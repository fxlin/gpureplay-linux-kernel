// SPDX-License-Identifier: GPL-2.0+
/* Copyright (C) 2015-2018 Broadcom */

#if !defined(_V3D_TRACE_H_) || defined(TRACE_HEADER_MULTI_READ)
#define _V3D_TRACE_H_

#include <linux/stringify.h>
#include <linux/types.h>
#include <linux/tracepoint.h>

#undef TRACE_SYSTEM
#define TRACE_SYSTEM v3d
#define TRACE_INCLUDE_FILE v3d_trace

TRACE_EVENT(v3d_submit_cl_ioctl,
	    TP_PROTO(struct drm_device *dev, u32 ct1qba, u32 ct1qea),
	    TP_ARGS(dev, ct1qba, ct1qea),

	    TP_STRUCT__entry(
			     __field(u32, dev)
			     __field(u32, ct1qba)
			     __field(u32, ct1qea)
			     ),

	    TP_fast_assign(
			   __entry->dev = dev->primary->index;
			   __entry->ct1qba = ct1qba;
			   __entry->ct1qea = ct1qea;
			   ),

	    TP_printk("dev=%u, RCL 0x%08x..0x%08x",
		      __entry->dev,
		      __entry->ct1qba,
		      __entry->ct1qea)
);

TRACE_EVENT(v3d_submit_cl,
	    TP_PROTO(struct drm_device *dev, bool is_render,
		     uint64_t seqno,
		     u32 ctnqba, u32 ctnqea),
	    TP_ARGS(dev, is_render, seqno, ctnqba, ctnqea),

	    TP_STRUCT__entry(
			     __field(u32, dev)
			     __field(bool, is_render)
			     __field(u64, seqno)
			     __field(u32, ctnqba)
			     __field(u32, ctnqea)
			     ),

	    TP_fast_assign(
			   __entry->dev = dev->primary->index;
			   __entry->is_render = is_render;
			   __entry->seqno = seqno;
			   __entry->ctnqba = ctnqba;
			   __entry->ctnqea = ctnqea;
			   ),

	    TP_printk("dev=%u, %s, seqno=%llu, 0x%08x..0x%08x",
		      __entry->dev,
		      __entry->is_render ? "RCL" : "BCL",
		      __entry->seqno,
		      __entry->ctnqba,
		      __entry->ctnqea)
);

TRACE_EVENT(v3d_bcl_irq,
	    TP_PROTO(struct drm_device *dev,
		     uint64_t seqno),
	    TP_ARGS(dev, seqno),

	    TP_STRUCT__entry(
			     __field(u32, dev)
			     __field(u64, seqno)
			     ),

	    TP_fast_assign(
			   __entry->dev = dev->primary->index;
			   __entry->seqno = seqno;
			   ),

	    TP_printk("dev=%u, seqno=%llu",
		      __entry->dev,
		      __entry->seqno)
);

TRACE_EVENT(v3d_rcl_irq,
	    TP_PROTO(struct drm_device *dev,
		     uint64_t seqno),
	    TP_ARGS(dev, seqno),

	    TP_STRUCT__entry(
			     __field(u32, dev)
			     __field(u64, seqno)
			     ),

	    TP_fast_assign(
			   __entry->dev = dev->primary->index;
			   __entry->seqno = seqno;
			   ),

	    TP_printk("dev=%u, seqno=%llu",
		      __entry->dev,
		      __entry->seqno)
);

TRACE_EVENT(v3d_tfu_irq,
	    TP_PROTO(struct drm_device *dev,
		     uint64_t seqno),
	    TP_ARGS(dev, seqno),

	    TP_STRUCT__entry(
			     __field(u32, dev)
			     __field(u64, seqno)
			     ),

	    TP_fast_assign(
			   __entry->dev = dev->primary->index;
			   __entry->seqno = seqno;
			   ),

	    TP_printk("dev=%u, seqno=%llu",
		      __entry->dev,
		      __entry->seqno)
);

TRACE_EVENT(v3d_csd_irq,
	    TP_PROTO(struct drm_device *dev,
		     uint64_t seqno),
	    TP_ARGS(dev, seqno),

	    TP_STRUCT__entry(
			     __field(u32, dev)
			     __field(u64, seqno)
			     ),

	    TP_fast_assign(
			   __entry->dev = dev->primary->index;
			   __entry->seqno = seqno;
			   ),

	    TP_printk("dev=%u, seqno=%llu",
		      __entry->dev,
		      __entry->seqno)
);

TRACE_EVENT(v3d_submit_tfu_ioctl,
	    TP_PROTO(struct drm_device *dev, u32 iia),
	    TP_ARGS(dev, iia),

	    TP_STRUCT__entry(
			     __field(u32, dev)
			     __field(u32, iia)
			     ),

	    TP_fast_assign(
			   __entry->dev = dev->primary->index;
			   __entry->iia = iia;
			   ),

	    TP_printk("dev=%u, IIA 0x%08x",
		      __entry->dev,
		      __entry->iia)
);

TRACE_EVENT(v3d_submit_tfu,
	    TP_PROTO(struct drm_device *dev,
		     uint64_t seqno),
	    TP_ARGS(dev, seqno),

	    TP_STRUCT__entry(
			     __field(u32, dev)
			     __field(u64, seqno)
			     ),

	    TP_fast_assign(
			   __entry->dev = dev->primary->index;
			   __entry->seqno = seqno;
			   ),

	    TP_printk("dev=%u, seqno=%llu",
		      __entry->dev,
		      __entry->seqno)
);

TRACE_EVENT(v3d_submit_csd_ioctl,
	    TP_PROTO(struct drm_device *dev, u32 cfg5, u32 cfg6),
	    TP_ARGS(dev, cfg5, cfg6),

	    TP_STRUCT__entry(
			     __field(u32, dev)
			     __field(u32, cfg5)
			     __field(u32, cfg6)
			     ),

	    TP_fast_assign(
			   __entry->dev = dev->primary->index;
			   __entry->cfg5 = cfg5;
			   __entry->cfg6 = cfg6;
			   ),

	    TP_printk("dev=%u, CFG5 0x%08x, CFG6 0x%08x",
		      __entry->dev,
		      __entry->cfg5,
		      __entry->cfg6)
);

TRACE_EVENT(v3d_submit_csd,
	    TP_PROTO(struct drm_device *dev,
		     uint64_t seqno),
	    TP_ARGS(dev, seqno),

	    TP_STRUCT__entry(
			     __field(u32, dev)
			     __field(u64, seqno)
			     ),

	    TP_fast_assign(
			   __entry->dev = dev->primary->index;
			   __entry->seqno = seqno;
			   ),

	    TP_printk("dev=%u, seqno=%llu",
		      __entry->dev,
		      __entry->seqno)
);

TRACE_EVENT(v3d_cache_clean_begin,
	    TP_PROTO(struct drm_device *dev),
	    TP_ARGS(dev),

	    TP_STRUCT__entry(
			     __field(u32, dev)
			     ),

	    TP_fast_assign(
			   __entry->dev = dev->primary->index;
			   ),

	    TP_printk("dev=%u",
		      __entry->dev)
);

TRACE_EVENT(v3d_cache_clean_end,
	    TP_PROTO(struct drm_device *dev),
	    TP_ARGS(dev),

	    TP_STRUCT__entry(
			     __field(u32, dev)
			     ),

	    TP_fast_assign(
			   __entry->dev = dev->primary->index;
			   ),

	    TP_printk("dev=%u",
		      __entry->dev)
);

/* --- xzl --- */
TRACE_EVENT(v3d_mmu_flush_begin,
	    TP_PROTO(struct drm_device *dev),
	    TP_ARGS(dev),

	    TP_STRUCT__entry(
			     __field(u32, dev)
			     ),

	    TP_fast_assign(
			   __entry->dev = dev->primary->index;
			   ),

	    TP_printk("dev=%u",
		      __entry->dev)
);
/* --- xzl --- */
TRACE_EVENT(v3d_mmu_flush_end,
	    TP_PROTO(struct drm_device *dev),
	    TP_ARGS(dev),

	    TP_STRUCT__entry(
			     __field(u32, dev)
			     ),

	    TP_fast_assign(
			   __entry->dev = dev->primary->index;
			   ),

	    TP_printk("dev=%u",
		      __entry->dev)
);


TRACE_EVENT(v3d_reset_begin,
	    TP_PROTO(struct drm_device *dev),
	    TP_ARGS(dev),

	    TP_STRUCT__entry(
			     __field(u32, dev)
			     ),

	    TP_fast_assign(
			   __entry->dev = dev->primary->index;
			   ),

	    TP_printk("dev=%u",
		      __entry->dev)
);

TRACE_EVENT(v3d_reset_end,
	    TP_PROTO(struct drm_device *dev),
	    TP_ARGS(dev),

	    TP_STRUCT__entry(
			     __field(u32, dev)
			     ),

	    TP_fast_assign(
			   __entry->dev = dev->primary->index;
			   ),

	    TP_printk("dev=%u",
		      __entry->dev)
);

#if 0 // xzl. not needed 
TRACE_EVENT(v3d_read_reg,
	    TP_PROTO(uint32_t offset,
		     uint32_t value),
	    TP_ARGS(offset, value),

	    TP_STRUCT__entry(
			     __field(u32, offset)
			     __field(u32, value)
			     ),

	    TP_fast_assign(
			   __entry->offset = offset;
			   __entry->value = value;
			   ),

	    TP_printk("offset=%08x, seqno=%u",
		      __entry->offset,
		      __entry->value)
);

TRACE_EVENT(v3d_write_reg,
	    TP_PROTO(uint32_t offset,
		     uint32_t value),
	    TP_ARGS(offset, value),

	    TP_STRUCT__entry(
			     __field(u32, offset)
			     __field(u32, value)
			     ),

	    TP_fast_assign(
			   __entry->offset = offset;
			   __entry->value = value;
			   ),

	    TP_printk("offset=%08x, seqno=%u",
		      __entry->offset,
		      __entry->value)
);
#endif

TRACE_EVENT(v3d_access_reg,
	    TP_PROTO(uint32_t offset,
		     uint32_t value,
			 char rw, 
			 const char *group,
			 int core),
	    TP_ARGS(offset, value, rw, group, core),

	    TP_STRUCT__entry(
			     __field(u32, offset)
			     __field(u32, value)
				 __field(char, rw)
				 __array(char, group, 7)
				 __field(int32_t, core)
			     ),

	    TP_fast_assign(
			   __entry->offset = offset;
			   __entry->value = value;
			   __entry->rw = rw;
			   strlcpy(__entry->group, group, 7);
			   __entry->core = core; 
			   ),

	    TP_printk("group=%s rw=%c offset=0x%08x val=0x%08x core=%d",
			  __entry->group,
			  __entry->rw,  
		      __entry->offset,
		      __entry->value,
			  __entry->core)
);

TRACE_EVENT(v3d_wait_for_reg,
	    TP_PROTO(uint32_t offset,
			 const char *group,
		   uint32_t mask,
			 uint32_t expected,
			 int core),
	    TP_ARGS(offset, group, mask, expected, core),

	    TP_STRUCT__entry(
			     __field(u32, offset)
				 __array(char, group, 7)
			     __field(u32, mask)
					 __field(u32, expected)
				 __field(int32_t, core)
			     ),

	    TP_fast_assign(
			   __entry->offset = offset;
			   strlcpy(__entry->group, group, 7);
			   __entry->mask = mask;
			   __entry->expected = expected;
			   __entry->core = core;
			   ),

	    TP_printk("group=%s offset=0x%08x mask=0x%08x expected=0x%08x core=%d",
			  __entry->group,
		      __entry->offset,
		      __entry->mask,
					__entry->expected,
			  __entry->core)
);

TRACE_EVENT(v3d_update_pte,
	    TP_PROTO(uint32_t page,
		     uint32_t pte),
	    TP_ARGS(page, pte),

	    TP_STRUCT__entry(
			     __field(u32, page)
			     __field(u32, pte)
			     ),

	    TP_fast_assign(
			   __entry->page = page;
			   __entry->pte = pte;
			   ),

	    TP_printk("page=0x%08x pte=0x%08x",
		      __entry->page,
		      __entry->pte)
);

TRACE_EVENT(v3d_map_gpu_region,
	    TP_PROTO(uint32_t start_page,
		     uint32_t num_pages, u8 is_map),
	    TP_ARGS(start_page, num_pages, is_map),

	    TP_STRUCT__entry(
			     __field(u32, start_page)
			     __field(u32, num_pages)
					 __field(u8, is_map)
			     ),

	    TP_fast_assign(
			   __entry->start_page = start_page;
			   __entry->num_pages = num_pages;
			   __entry->is_map = is_map;
			   ),

	    TP_printk("start_page=0x%08x num_pages=0x%08x is_map=%d",
		      __entry->start_page,
		      __entry->num_pages,
					__entry->is_map)
);

// will be translated "write GPU region" in replay
TRACE_EVENT(v3d_dump_gpu_region,
	    TP_PROTO(uint32_t start_page, uint32_t num_pages, const char *tag),
	    TP_ARGS(start_page, num_pages, tag),

	    TP_STRUCT__entry(
			     __field(u32, start_page)
					 __field(u32, num_pages)
					 __array(char, tag, 16)
			     ),

	    TP_fast_assign(
			   __entry->start_page = start_page;
				 __entry->num_pages = num_pages;
					strlcpy(__entry->tag, tag, 16);
			   ),

	    TP_printk("start_page=0x%08x num_pages=0x%08x tag=%s",
		      __entry->start_page,
					__entry->num_pages,
					__entry->tag)
);

// instead of pages, support byte granularity
// will be translated "write GPU region2" in replay
TRACE_EVENT(v3d_dump_gpu_region2,
	    TP_PROTO(uint32_t start_addr, uint32_t num_bytes, const char *tag),
	    TP_ARGS(start_addr, num_bytes, tag),

	    TP_STRUCT__entry(
			     __field(u32, start_addr)
					 __field(u32, num_bytes)
					 __array(char, tag, 16)
			     ),

	    TP_fast_assign(
			   __entry->start_addr = start_addr;
				 __entry->num_bytes = num_bytes;
					strlcpy(__entry->tag, tag, 16);
			   ),

	    TP_printk("start_addr=0x%08x num_bytes=0x%08x tag=%s",
		      __entry->start_addr,
					__entry->num_bytes,
					__entry->tag)
);

#endif /* _V3D_TRACE_H_ */

/* This part must be outside protection */
#undef TRACE_INCLUDE_PATH
#define TRACE_INCLUDE_PATH .
#include <trace/define_trace.h>
