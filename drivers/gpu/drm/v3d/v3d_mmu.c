// SPDX-License-Identifier: GPL-2.0+
/* Copyright (C) 2017-2018 Broadcom */

/**
 * DOC: Broadcom V3D MMU
 *
 * The V3D 3.x hardware (compared to VC4) now includes an MMU.  It has
 * a single level of page tables for the V3D's 4GB address space to
 * map to AXI bus addresses, thus it could need up to 4MB of
 * physically contiguous memory to store the PTEs.
 *
 * Because the 4MB of contiguous memory for page tables is precious,
 * and switching between them is expensive, we load all BOs into the
 * same 4GB address space.
 *
 * To protect clients from each other, we should use the GMP to
 * quickly mask out (at 128kb granularity) what pages are available to
 * each client.  This is not yet implemented.
 */

#include <linux/pm_runtime.h>

#include "v3d_drv.h"
#include "v3d_regs.h"

#define V3D_MMU_PAGE_SHIFT 12

/* Note: All PTEs for the 1MB superpage must be filled with the
 * superpage bit set.
 */
#define V3D_PTE_SUPERPAGE BIT(31) // xzl: pte format: pfns shifted to lower bits
#define V3D_PTE_WRITEABLE BIT(29)
#define V3D_PTE_VALID BIT(28)

static int v3d_mmu_flush_all(struct v3d_dev *v3d)
{
	struct drm_device *dev = &v3d->drm;
	int ret;

	trace_v3d_mmu_flush_begin(dev);

	/* Make sure that another flush isn't already running when we
	 * start this one.
	 */
	ret = wait_for(!(V3D_READ(V3D_MMU_CTL) &
			 V3D_MMU_CTL_TLB_CLEARING), 100);
	if (ret)
		dev_err(v3d->drm.dev, "TLB clear wait idle pre-wait failed\n");

	V3D_WRITE(V3D_MMU_CTL, V3D_READ(V3D_MMU_CTL) |
		  V3D_MMU_CTL_TLB_CLEAR);

	V3D_WRITE(V3D_MMUC_CONTROL,
		  V3D_MMUC_CONTROL_FLUSH |
		  V3D_MMUC_CONTROL_ENABLE);

	ret = wait_for(!(V3D_READ(V3D_MMU_CTL) &
			 V3D_MMU_CTL_TLB_CLEARING), 100);
	if (ret) {
		dev_err(v3d->drm.dev, "TLB clear wait idle failed\n");
		trace_v3d_mmu_flush_end(dev);
		return ret;
	}

	ret = wait_for(!(V3D_READ(V3D_MMUC_CONTROL) &
			 V3D_MMUC_CONTROL_FLUSHING), 100);
	if (ret)
		dev_err(v3d->drm.dev, "MMUC flush wait idle failed\n");

	trace_v3d_mmu_flush_end(dev);
	return ret;
}

// mark reg access as no replay
static int v3d_mmu_flush_all_noreplay(struct v3d_dev *v3d)
{
	struct drm_device *dev = &v3d->drm;
	int ret;

	trace_v3d_mmu_flush_begin(dev);

	/* Make sure that another flush isn't already running when we
	 * start this one.
	 */
	ret = wait_for(!(V3D_READ_NOREPLAY(V3D_MMU_CTL) &
			 V3D_MMU_CTL_TLB_CLEARING), 100);
	if (ret)
		dev_err(v3d->drm.dev, "TLB clear wait idle pre-wait failed\n");

	V3D_WRITE_NOREPLAY(V3D_MMU_CTL, V3D_READ_NOREPLAY(V3D_MMU_CTL) |
		  V3D_MMU_CTL_TLB_CLEAR);

	V3D_WRITE_NOREPLAY(V3D_MMUC_CONTROL,
		  V3D_MMUC_CONTROL_FLUSH |
		  V3D_MMUC_CONTROL_ENABLE);

	ret = wait_for(!(V3D_READ_NOREPLAY(V3D_MMU_CTL) &
			 V3D_MMU_CTL_TLB_CLEARING), 100);
	if (ret) {
		dev_err(v3d->drm.dev, "TLB clear wait idle failed\n");
		trace_v3d_mmu_flush_end(dev);
		return ret;
	}

	ret = wait_for(!(V3D_READ_NOREPLAY(V3D_MMUC_CONTROL) &
			 V3D_MMUC_CONTROL_FLUSHING), 100);
	if (ret)
		dev_err(v3d->drm.dev, "MMUC flush wait idle failed\n");

	trace_v3d_mmu_flush_end(dev);
	return ret;
}

// xzl: setting up the pgtable (1 lv only), init 
// XXX handle this??
int v3d_mmu_set_page_table(struct v3d_dev *v3d)
{
	V3D_WRITE(V3D_MMU_PT_PA_BASE, v3d->pt_paddr >> V3D_MMU_PAGE_SHIFT);
	V3D_WRITE(V3D_MMU_CTL,
		  V3D_MMU_CTL_ENABLE |
		  V3D_MMU_CTL_PT_INVALID_ENABLE |
		  V3D_MMU_CTL_PT_INVALID_ABORT |
		  V3D_MMU_CTL_PT_INVALID_INT |
		  V3D_MMU_CTL_WRITE_VIOLATION_ABORT |
		  V3D_MMU_CTL_WRITE_VIOLATION_INT |
		  V3D_MMU_CTL_CAP_EXCEEDED_ABORT |
		  V3D_MMU_CTL_CAP_EXCEEDED_INT);
	V3D_WRITE(V3D_MMU_ILLEGAL_ADDR,
		  (v3d->mmu_scratch_paddr >> V3D_MMU_PAGE_SHIFT) |
		  V3D_MMU_ILLEGAL_ADDR_ENABLE);
	V3D_WRITE(V3D_MMUC_CONTROL, V3D_MMUC_CONTROL_ENABLE);

	return v3d_mmu_flush_all(v3d);
}

// xzl: normal exec (w/ recording)
// xzl: maps a BO to GPU. the BO is contig in GPU virt addr space.
// the underlying phys mem may not be contig. it is represented by a sgtable.
void v3d_mmu_insert_ptes(struct v3d_bo *bo)
{
	struct drm_gem_shmem_object *shmem_obj = &bo->base;
	struct v3d_dev *v3d = to_v3d_dev(shmem_obj->base.dev);
	u32 page = bo->node.start; // xzl: virt page number in GPU addr?
	u32 page_prot = V3D_PTE_WRITEABLE | V3D_PTE_VALID;
	struct sg_dma_page_iter dma_iter;

	trace_v3d_map_gpu_region(page,
			shmem_obj->base.size >> V3D_MMU_PAGE_SHIFT, 1 /* is_map */);

	// xzl: each sgtable corresponds to a phys contig region.
	// there's a DMA addr. (start)
	for_each_sgtable_dma_page(shmem_obj->sgt, &dma_iter, 0) {
		dma_addr_t dma_addr = sg_page_iter_dma_address(&dma_iter); // start DMA addr
		u32 page_address = dma_addr >> V3D_MMU_PAGE_SHIFT;
		u32 pte = page_prot | page_address; // xzl: encoding phys addr
		u32 i;

		DRM_DEBUG("xzl: dma_addr: %llx", dma_addr);

		BUG_ON(page_address + (PAGE_SIZE >> V3D_MMU_PAGE_SHIFT) >=
		       BIT(24));

		// xzl: within one phys contig region, increment pfn (pte+i)
		// this seems to install 1 pte only? when PAGE_SIZE=4KB
		for (i = 0; i < PAGE_SIZE >> V3D_MMU_PAGE_SHIFT; i++) {
//			trace_v3d_update_pte(page, pte); // xzl
			v3d->pt[page++] = pte + i;
		}
	}

	WARN_ON_ONCE(page - bo->node.start !=
		     shmem_obj->base.size >> V3D_MMU_PAGE_SHIFT);

	// xzl: reason: @v3d_mmu_insert_ptes will be one whole record entry
//	if (v3d_mmu_flush_all(v3d))
	if (v3d_mmu_flush_all_noreplay(v3d))
		dev_err(v3d->drm.dev, "MMU flush timeout\n");
}

// xzl: for replay
// go through the sglist for the shmem region and populate GPU pgtable entries. 
// take GPU_addr directly. 
// @ page: # of the starting GPU virtual page. 
void v3d_mmu_insert_ptes_xzl(struct drm_gem_shmem_object *shmem_obj, u32 page)
{
	struct v3d_dev *v3d = to_v3d_dev(shmem_obj->base.dev);
	// u32 page = gpu_addr >> V3D_MMU_PAGE_SHIFT; // xzl: virt page number in GPU addr?
	u32 page_prot = V3D_PTE_WRITEABLE | V3D_PTE_VALID;
	struct sg_dma_page_iter dma_iter;

	// xzl: each sgtable corresponds to a phys contig region. there's a DMA addr. (start)
	for_each_sgtable_dma_page(shmem_obj->sgt, &dma_iter, 0) {
		dma_addr_t dma_addr = sg_page_iter_dma_address(&dma_iter); // start DMA addr
		u32 page_address = dma_addr >> V3D_MMU_PAGE_SHIFT; // phys addr
		u32 pte = page_prot | page_address; // xzl: encoding phys addr
		u32 i;

		DRM_DEBUG("v3d_mmu_insert_ptes_xzl: a phys contig region. dma_addr: %llx",
				dma_addr);

		BUG_ON(page_address + (PAGE_SIZE >> V3D_MMU_PAGE_SHIFT) >=
		       BIT(24));

		// xzl: within one phys contig region, increment pfn (pte+i)
		for (i = 0; i < PAGE_SIZE >> V3D_MMU_PAGE_SHIFT; i++) {
//			trace_v3d_update_pte(page, pte); // trace ptes
			DRM_DEBUG("v3d_mmu_insert_ptes_xzl: page 0x%08x 0x%08x", page, pte);
			v3d->pt[page++] = pte + i;
		}
	}

	// TODO: convert to GPU reg access
	if (v3d_mmu_flush_all(v3d))
		dev_err(v3d->drm.dev, "MMU flush timeout\n");
}

void v3d_mmu_remove_ptes(struct v3d_bo *bo)
{
	struct v3d_dev *v3d = to_v3d_dev(bo->base.base.dev);
	u32 npages = bo->base.base.size >> V3D_MMU_PAGE_SHIFT;
	u32 page;

	trace_v3d_map_gpu_region(bo->node.start, npages, 0 /* is_map */);

	for (page = bo->node.start; page < bo->node.start + npages; page++) {
//		trace_v3d_update_pte(page, 0); // xzl
		v3d->pt[page] = 0;
	}

	// xzl: reason: @v3d_mmu_insert_ptes will be one whole record entry
//	if (v3d_mmu_flush_all(v3d))
	if (v3d_mmu_flush_all_noreplay(v3d))
		dev_err(v3d->drm.dev, "MMU flush timeout\n");
}

// xzl: for replay
void v3d_mmu_remove_ptes_xzl(struct v3d_dev *v3d, u32 gpu_page_start,
			u32 num_pages)
{
	u32 page;
	for (page = gpu_page_start; page < gpu_page_start + num_pages; page++) {
		DRM_DEBUG("v3d_mmu_remove_ptes_xzl: page 0x%08x", page);
		v3d->pt[page] = 0;
	}

	// TODO: convert to reg replay
	if (v3d_mmu_flush_all(v3d))
			dev_err(v3d->drm.dev, "MMU flush timeout\n");
}

