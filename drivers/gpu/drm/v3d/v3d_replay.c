#include <linux/kernel.h>
#include <linux/syscalls.h>
#include <linux/fcntl.h>
#include <linux/list.h>
#include <asm/uaccess.h>

#include "v3d_drv.h"
#include "v3d_replay.h"

#include "v3d_records.h"

#define V3D_MMU_PAGE_SHIFT 12 // as defined in v3d_mmu.c
#define V3D_PAGE_SIZE (1 << V3D_MMU_PAGE_SHIFT)

// v3d_mmu.c
void v3d_mmu_insert_ptes_xzl(struct drm_gem_shmem_object *shmem_obj,
		u32 gpu_page);
void v3d_mmu_remove_ptes_xzl(struct v3d_dev *v3d, u32 gpu_page_start,
		u32 num_pages);

// bookkeeping all live GPU regions (BO)
struct gpu_region {
	u32 start_page; // gpu
	u32 num_pages; // gpu
//	u32 num_pages_dump; // non zeros pages
	u32 num_bytes_dump;
	struct drm_gem_shmem_object * shmem; // cpu kernel
//	struct list_head list;
	u32 type; // from bo type
};

#define MAX_RECORDS 				65536		// failsafe
#define DEFAULT_DELAY_US		5000 	// per reg access.
#define WAIT_FOR_IRQ_TIMEOUT_US (5 * 1000 * 1000)

#define FILE_PATH "/tmp/"	// where we dump gpu mem regions

// For replay: BOs we've mapped during replay. will free at the end of replay
//static struct gpu_region the_gpu_regions[NUM_BO_SLOTS];
//static LIST_HEAD(the_gpu_region_list);
static RADIX_TREE(the_gpu_regions, GFP_KERNEL);
static LIST_HEAD(the_shmem_freelist);

//static int num_gpu_regions = 0;

int v3d_is_recording_xzl = 1;  // are we recording (w/ dumping) or running at full spd?
int v3d_is_replay_xzl = 0; // are we replaying? irq paths will diff

atomic_t v3d_replay_irqcnt = ATOMIC_INIT(0);
struct dma_fence * v3d_replay_fence = 0;

// xzl: must sync with mesa v3dv_bo.c
enum v3d_create_bo_type_xzl {
	V3D_CREATE_BO_NOFLAG 	= 0, //
	V3D_CREATE_BO_DEVICE	 = 1,	//	"device_alloc"
	V3D_CREATE_BO_CL,				//	"CL"
	V3D_CREATE_BO_TSDA,			//	"TSDA"
	V3D_CREATE_BO_TILE,			// 	"tile_alloc"
	V3D_CREATE_BO_SHARED,		// 	"descriptor pool bo"
	V3D_CREATE_BO_VKCMD,		// "vkCmdUpdateBuffer"
	V3D_CREATE_BO_SPILL,		// "spill"
	V3D_CREATE_BO_VI, 			// "default_vi_attributes"
	V3D_CREATE_BO_QUERY, 		// "query"
	V3D_CREATE_BO_CONST,			// "push constants"
	// coord_shader_assembly, vertex_shader_assembly, fragment_shader_assembly,compute_shader_assembly
	V3D_CREATE_BO_SHADER,
	V3D_CREATE_BO_UNKNOWN, // EOF
};

const char *v3d_create_bo_names[] = {
		[V3D_CREATE_BO_NOFLAG] = "(no flag)",
		[V3D_CREATE_BO_DEVICE] = "device_alloc",
		[V3D_CREATE_BO_CL] = "CL",
		[V3D_CREATE_BO_TSDA] = "TSDA",
		[V3D_CREATE_BO_TILE] = "tile_alloc",
		[V3D_CREATE_BO_SHARED] = "descriptor pool bo",
		[V3D_CREATE_BO_VKCMD] = "vkCmdUpdateBuffer",
		[V3D_CREATE_BO_SPILL] = "spill",
		[V3D_CREATE_BO_VI] = "default_vi_attributes",
		[V3D_CREATE_BO_QUERY] = "query",
		[V3D_CREATE_BO_CONST] = "push constants",
		[V3D_CREATE_BO_SHADER] = "shader_assembly",
};

// what bos to dump?
const int v3d_dump_bo_type[] = {
		[V3D_CREATE_BO_NOFLAG] = 	1,	// runtime not setting flag. stock mesa. pyvideocore, etc.
		[V3D_CREATE_BO_DEVICE] = 	0,
		[V3D_CREATE_BO_CL] = 			1,
		[V3D_CREATE_BO_TSDA] = 		1,		// needed by rcl
		[V3D_CREATE_BO_TILE] = 		0,
		[V3D_CREATE_BO_SHARED] = 	1,
		[V3D_CREATE_BO_VKCMD] = 	1,
		[V3D_CREATE_BO_SPILL] = 	1,
		[V3D_CREATE_BO_VI] = 			1,
		[V3D_CREATE_BO_QUERY] = 	1,
		[V3D_CREATE_BO_CONST] = 	1,
		[V3D_CREATE_BO_SHADER] = 	1,
		[V3D_CREATE_BO_UNKNOWN] = 1,
};


static int xzl_load_gpu_regions_elf(struct file *file, ssize_t *filesz);

static void v3d_replay_cleanup(void) {
#if 0  // all regions should been freed
	int i;
	for (i = 0; i < num_gpu_regions; i++) {
		if (the_gpu_regions[i].shmem)
			drm_gem_shmem_free_object(&the_gpu_regions[i].shmem->base);
			DRM_INFO("free GPU bo start_page %08x num_pages %08x",
					the_gpu_regions[i].start_page, the_gpu_regions[i].num_pages);
	}
	DRM_INFO("freed %d shmem objs", num_gpu_regions);
	num_gpu_regions = 0;
#endif

	struct drm_gem_shmem_object *shmem_obj = NULL;
	struct list_head *c, *tmp;
	int cnt = 0;

	list_for_each_safe(c, tmp, &the_shmem_freelist) {
		list_del(c); // unlink it first
		shmem_obj = list_entry(c, struct drm_gem_shmem_object, madv_list);
		drm_gem_shmem_free_object(&shmem_obj->base);
		cnt ++;
	}
	DRM_INFO("freed %d shmem objs", cnt);
}

/* from Heejin's odroid replayer */

// While it is inadvisable, just try to dump driver instrument using file IO in user space
// sys_open doesn't work
// https://sonseungha.tistory.com/137
// use filp_open
// https://stackoverrun.com/ko/q/214960

static struct file* file_open(const char *path, int flags, int rights) {
	struct file *filp = NULL;
	mm_segment_t oldfs;
	int err = 0;

	oldfs = get_fs();
	// set_fs(get_ds());
	set_fs(KERNEL_DS);
	filp = filp_open(path, flags, rights);
	set_fs(oldfs);
	if (IS_ERR(filp)) {
		err = PTR_ERR(filp);
		return NULL;
	}
	return filp;
}

static int file_write(struct file *file, unsigned long long offset, void *data,
		unsigned int size) {
	mm_segment_t oldfs;
	int ret;
	oldfs = get_fs();
	// set_fs(get_ds());
	set_fs(KERNEL_DS);

	// Since kernel version 4.14, vfs_write is no longer exported
	// https://stackoverflow.com/questions/53917041/unknown-symbol-vfs-write-err-2-in-kernel-module-in-kernel-4-20
//	ret = vfs_write(file, data, size, &offset);
	ret = kernel_write(file, data, size, &offset);
	// ret = kernel_write(file, data, size, offset);

	set_fs(oldfs);
	return ret;
}

static int __maybe_unused file_read(struct file *file,
		unsigned long long offset, void *data, unsigned int size)
{
	mm_segment_t oldfs;
	int ret;
	oldfs = get_fs();
	set_fs(KERNEL_DS);

	ret = kernel_read(file, data, size, &offset);
	BUG_ON(ret != (ssize_t)size);

	set_fs(oldfs);
	return ret;
}

static void file_close(struct file *file) {
	filp_close(file, NULL);
}

/* on success: return 0. failure: return neg */
static int v3d_replay(struct v3d_dev *v3d, const struct record_entry *records,
		const char * filepath) {
	unsigned int counter = 0;
	int ret = 0;
	u64 ts_start, ts_end, total_load_ns = 0, total_irq_ns = 0, total_map_ns = 0;
	u64 total_wait_us = 0, total_waitreg_us = 0; // artificial delay, not including irq wait
	u64 total_reg_ns = 0;

	int v3d_is_recording_saved;

	BUG_ON(v3d_is_replay_xzl);
	v3d_is_replay_xzl = 1;

	v3d_is_recording_saved = v3d_is_recording_xzl;
	v3d_is_recording_xzl = 0;

//	mb();

	DRM_INFO("--- replay starts --- ");

	ts_start = ktime_get_ns();

	for (;;) {
		switch (records->type) {
		case type_access_reg:
		{
			const char rw = records->entry_access_reg.rw;
			s64 delay = records->delay_after_us;
			int expected;
			u64 t0;

			t0 = ktime_get_ns(); // can be costly?

			if (!strncmp(records->entry_access_reg.group, "hub", 3)) {
				if (rw == 'w')
					V3D_WRITE_NOTRACE(records->entry_access_reg.offset,
							records->entry_access_reg.val);
				else { /* 'r' or 'R' */
					u32 val = V3D_READ_NOTRACE(records->entry_access_reg.offset);
					if (val != records->entry_access_reg.val) { // mismatch
						if (rw == 'R') {
							DRM_DEBUG("%d: ignore mismatched reads. actual 0x%08x expected 0x%08x. comment %s",
									counter, val, records->entry_access_reg.val,
									records->comment ? records->comment : "(n/a)");
							// return -1;  // unmatched read val
						} else if (rw == 'r') { //
							DRM_ERROR("%d: bad. hub mismatched reads. actual 0x%08x expected 0x%08x. comment %s",
									counter, val, records->entry_access_reg.val,
									records->comment ? records->comment : "(n/a)");
						} else {
							DRM_ERROR("bug? rw=%c", rw);
							ret = -2;
							goto done;
						}
					} // mismatch
				}
			} else if (!strncmp(records->entry_access_reg.group, "core", 4)) {
				BUG_ON(records->entry_access_reg.core != 0); // we only support core==0
				if (rw == 'w')
					V3D_CORE_WRITE_NOTRACE(records->entry_access_reg.core,
							records->entry_access_reg.offset,
							records->entry_access_reg.val);
				else {
					u32 val = V3D_CORE_READ_NOTRACE(records->entry_access_reg.core,
							records->entry_access_reg.offset);
					if (val != records->entry_access_reg.val) {
						if (rw == 'r')
							dev_err(v3d->drm.dev,
									"%d: bad. core mismatched reads. actual 0x%08x expected 0x%08x. comment %s",
									counter, val, records->entry_access_reg.val,
									records->comment ? records->comment : "(n/a)");
						else if (rw == 'R')
							dev_dbg(v3d->drm.dev,
										"%d: ignore core mismatched reads. actual 0x%08x expected 0x%08x. comment %s",
										counter, val, records->entry_access_reg.val,
										records->comment ? records->comment : "(n/a)");
						else {
							ret = -2;
							goto done;
						}
					}
				}
			} else {
				dev_err(v3d->drm.dev, "gca or bridge? unsupported reg types.");
				ret = -1;
				goto done;
			}

			total_reg_ns += ktime_get_ns() - t0;

			if (delay > REPLAY_DELAY_BASE_US) {
				udelay(delay);
				total_wait_us += delay;
			} else if (delay == REPLAY_DELAY_WAIT_SHORT) {
				udelay(500);
				total_wait_us += 500;
			} else if (delay == REPLAY_DELAY_WAIT_NORMAL) {
				udelay(1 * 1000);		// 1ms
				total_wait_us += 1000;
			} else if (delay == REPLAY_DELAY_WAIT_LONG) {
				udelay(10 * 1000); 	// 10 ms
				total_wait_us += 10 * 1000;
			} else if (delay <= REPLAY_DELAY_IRQ_BCL /*-1*/) {
				static const char *irq_src[] = {"bcl","rcl","csd","tfu"};
				const char * src = irq_src[-delay-1];
				u64 t0, t1, ms;
				int ret;

				// XXX: race cond - should read expected before the reg write trigger irq
				expected = atomic_read(&v3d_replay_irqcnt) + 1;

				t0 = ktime_get_ns();
				// uses usleep
#if 0
				ret = (wait_for((atomic_read(&v3d_replay_irqcnt) == expected),
						WAIT_FOR_IRQ_TIMEOUT_US/1000 /*ms*/));
#else
				{ // udelay, spin waiting
					int k, cur;
					int iter = WAIT_FOR_IRQ_TIMEOUT_US / 20;
					DRM_DEBUG("wait for irq (delay=%lld)", delay);
					for (k = 0; k < iter; k++) { // XXX spin wait. this is bad.
						cur = atomic_read(&v3d_replay_irqcnt);
						if (cur == expected)
							break;
						BUG_ON(cur > expected);
						udelay(20);
					}
					if (k == iter)
						ret = -1;
					else
						ret = 0;
				}
#endif
				t1 = ktime_get_ns();
				ms = (t1-t0)/1000/1000;
				total_irq_ns += (t1-t0);

				if (ret)
					DRM_ERROR("bug? wait for irq %s timeout (around %lld ms)", src, ms);
				else
					DRM_DEBUG("wait for irq %s okay. (around %lld ms)", src, ms);
			}	// else no delay
			break;
		}
		case type_wait_for_reg:
		{
			// alias
			const char * group = records->entry_wait_for_reg.group;
			u32 offset = records->entry_wait_for_reg.offset;
			u32 mask = records->entry_wait_for_reg.mask;
			u32 expected = records->entry_wait_for_reg.expected;
			int core = records->entry_wait_for_reg.core;

			u64 t1 = ktime_get_ns();

			if (!strncmp(group, "hub", 3)) {
				BUG_ON(core != -1);
				if (wait_for(((V3D_READ_NOREPLAY(offset) & mask) == expected),
						100 /* hard coded XXX */)) {
					DRM_ERROR("bad. timeout. comment %s. quit replay \n",
							records->comment ? records->comment : "(n/a)");
					ret = -1;
					goto done;
				}
			} else if (!strncmp(group, "core", 4)) {
				BUG_ON(core != 0); // we only support core==0
				if (wait_for(
						((V3D_CORE_READ_NOTRACE(core, offset) & mask) == expected),
						100 /* hard coded XXX */)) {
					DRM_ERROR("bad. timeout. comment %s. quit replay \n",
							records->comment ? records->comment : "(n/a)");
					ret = -1;
					goto done;
				}
			} else {
				dev_err(v3d->drm.dev, "gca or bridge? unsupported reg types.");
				ret = -1;
				goto done;
			}

			total_waitreg_us += (ktime_get_ns() - t1) / 1000;
		}
		break;
		case type_update_pte:
			break;
		case type_map_gpu_mem:
			if (records->entry_map_gpu_mem.is_map) {
				/* map a mem region to GPU. cr a shmem obj, allocate phys mem,
				 * and set GPU ptes */
				u64 t0, t1;
				struct sg_table *sgt;
				u32 start_page = records->entry_map_gpu_mem.start_page;
				u32 num_pages = records->entry_map_gpu_mem.num_pages;
				struct drm_gem_shmem_object *shmem_obj = NULL;
				struct list_head *c;

				t0 = ktime_get_ns();

				/* xzl: below can be costly. XXX reuse them in one replay session XXX */
				list_for_each(c, &the_shmem_freelist) {
					shmem_obj = list_entry(c, struct drm_gem_shmem_object, madv_list);
					if (shmem_obj->base.size == num_pages << V3D_MMU_PAGE_SHIFT) {
						list_del(c);
						break;
					}
				}

				if (c == &the_shmem_freelist) { /* miss in freelist, alloc a new one*/
					shmem_obj = drm_gem_shmem_create(&v3d->drm,
											num_pages << V3D_MMU_PAGE_SHIFT);
					BUG_ON(!shmem_obj);
					/* for the shmem region, allocate the underneath phys mem.
					 * the result is a sgt */
					sgt = drm_gem_shmem_get_pages_sgt(&shmem_obj->base);
					BUG_ON(!sgt);
				}

//				t1 = ktime_get_ns();

				/* xzl: the following is cheap */

				/* instead of alloc GPU addr via drm_mm, directly use the
				 * recorded GPU addr */
				v3d_mmu_insert_ptes_xzl(shmem_obj, start_page);

				// bookkeep the gpu region
				{
					struct gpu_region * r = kvmalloc(sizeof(*r), GFP_KERNEL);
					int ret;

					r->shmem = shmem_obj;
					r->start_page = start_page;
					r->num_pages = num_pages;
					ret = radix_tree_insert(&the_gpu_regions, start_page, r);
					if (ret) { /* 0 means okay */
						DRM_ERROR("gpu mem already mapped? ret %d start_page 0x%08x skip",
								ret, start_page);
						continue;
					}
				}
				DRM_DEBUG("map GPU mem start_page %08x num_pages 0x%08x", start_page,
						num_pages);
				t1 = ktime_get_ns();
				total_map_ns += (t1-t0);
			} else {  // unmap
				u64 t0, t1;
				struct gpu_region * rr;

				t0 = ktime_get_ns();

				rr = radix_tree_delete(&the_gpu_regions,
						records->entry_map_gpu_mem.start_page);
				BUG_ON(!rr || rr->num_pages != records->entry_map_gpu_mem.num_pages);

				// return shmem to freelist. don't destroy
				list_add(&rr->shmem->madv_list, &the_shmem_freelist);
				//drm_gem_shmem_free_object(&rr->shmem->base);

				kvfree(rr);

				v3d_mmu_remove_ptes_xzl(v3d,
						records->entry_map_gpu_mem.start_page,
						records->entry_map_gpu_mem.num_pages);

				t1 = ktime_get_ns();
				total_map_ns += (t1-t0);
			}
			break;
		case type_write_gpu_mem: { // useful for debugging
			struct drm_gem_shmem_object *shmem_obj = NULL;
			void *addr = NULL;
			u32 start_page = records->entry_write_gpu_mem.start_page;
			u32 num_pages = records->entry_write_gpu_mem.sz >> V3D_MMU_PAGE_SHIFT;
			// write size must be page aligned as of now
			BUG_ON(records->entry_write_gpu_mem.sz &
					((1<<V3D_MMU_PAGE_SHIFT)-1));

#if 0
                    char * buf1 = kmalloc(records->entry_write_gpu_mem.sz, GFP_KERNEL);
                    u32 paddr, paddr1; 
                    BUG_ON(!buf1); 
                    paddr = virt_to_phys(records->entry_write_gpu_mem.buf); 
                    paddr1 = virt_to_phys(buf1);
                    dev_err(v3d->drm.dev, "record buf %llx phys addr %lx",     
                    (u64)records->entry_write_gpu_mem.buf, paddr);                    

                    dev_err(v3d->drm.dev, "buf1 %llx paddr1 %lx",     
                    (u64)buf1, paddr1);                    
                    kfree(buf1);
                    #endif

#if 0
			/* will map a mem region to GPU. To do so, cr a shmem obj. */
			struct sg_table *sgt;
			void *addr;
			struct drm_gem_shmem_object *shmem_obj = drm_gem_shmem_create(&v3d->drm,
					records->entry_write_gpu_mem.sz);

			BUG_ON(num_shmem_objs >= NUM_BO_SLOTS);
			BUG_ON(!shmem_obj);
			/* for the shmem region, allocate the underneath phys mem. the result is a sgt */
			sgt = drm_gem_shmem_get_pages_sgt(&shmem_obj->base);
			BUG_ON(!sgt);

			/* instead of alloc GPU addr via drm_mm, directly use the recorded GPU addr */
			v3d_mmu_insert_ptes_xzl(shmem_obj,
					records->entry_write_gpu_mem.gpu_page);
#endif
			/* the GPU mem region must have been mapped */
#if 0
			for (i = 0; i < num_gpu_regions; i++) {
				if (the_gpu_regions[i].start_page == start_page) {
					BUG_ON(the_gpu_regions[i].num_pages != num_pages); // unsupported. TBD
					shmem_obj = the_gpu_regions[i].shmem;
					break;
				}
			}
			BUG_ON(i == num_gpu_regions); // no found
#endif

			{
				struct gpu_region *rr = radix_tree_lookup(&the_gpu_regions, start_page);
				BUG_ON(!rr || rr->num_pages != num_pages);
				shmem_obj = rr->shmem;
			}

			/* map to kernel space, copy mem contents */
			addr = drm_gem_shmem_vmap(&shmem_obj->base);
			BUG_ON(!addr);
			DRM_INFO("bo kernel CPU vaddr is %lx 0x%08x pages",
					(unsigned long)shmem_obj->vaddr, num_pages);
			memcpy(addr, records->entry_write_gpu_mem.buf,
					records->entry_write_gpu_mem.sz);
			drm_gem_shmem_vunmap(&shmem_obj->base, addr);
			// flush? sync DMA memory?
		}
		break;
		case type_write_gpu_mem_fromfile:
		{
			struct file *fp;
			u64 t0, t1;
			ssize_t filesz;
			char * fname;

			t0 = ktime_get_ns();
			fname = kvmalloc(256, GFP_KERNEL);

			BUG_ON(IS_ERR(fname));

			snprintf(fname, 256, "%s/mem_%s.elf", filepath,
					records->entry_write_gpu_mem_fromfile.tag);
			fp = file_open(fname, O_RDONLY, 0 /* ignored */);

			DRM_DEBUG("open file %s...", fname);

			if (!fp) {
				DRM_ERROR("cannot open %s for replay. quit", fname);
				ret = -1;
				kvfree(fname);
				goto done;
			} else {
				xzl_load_gpu_regions_elf(fp, &filesz);
				file_close(fp);
				kvfree(fname);
				t1 = ktime_get_ns();
				DRM_INFO("loaded mem dump. %zd KB in %lld ms",
						filesz/1000, (t1-t0)/1000/1000);
				total_load_ns += (t1-t0);
			}
		}
		break;
		case type_dump_gpu_mem:  // unused
		{
			struct file *fp;
			char fname[64];
			struct drm_gem_shmem_object *shmem_obj = NULL;
			void *addr = NULL;
			u32 start_page = records->entry_dump_gpu_mem.start_page;
			u32 num_pages = records->entry_dump_gpu_mem.sz >> V3D_MMU_PAGE_SHIFT;
			// write size must be page aligned as of now
			BUG_ON(records->entry_dump_gpu_mem.sz &
					((1<<V3D_MMU_PAGE_SHIFT)-1));

			/* the GPU mem region must have been mapped */
#if 0
			for (i = 0; i < num_gpu_regions; i++) {
				if (the_gpu_regions[i].start_page == start_page) {
					BUG_ON(the_gpu_regions[i].num_pages != num_pages); // unsupported. TBD
					shmem_obj = the_gpu_regions[i].shmem;
					break;
				}
			}
			BUG_ON(i == num_gpu_regions); // no found
#endif

			{
				struct gpu_region *rr = radix_tree_lookup(&the_gpu_regions, start_page);
				BUG_ON(!rr || rr->num_pages != num_pages);
				shmem_obj = rr->shmem;
			}

			/* file */
			snprintf(fname, 64, "%s/mem_%s_0x%08x.bin", filepath,
					records->entry_write_gpu_mem_fromfile.tag,
					start_page << V3D_MMU_PAGE_SHIFT);

			fp = file_open(fname, O_WRONLY | O_CREAT, 0644);
			BUG_ON(!fp);

			/* map to kernel space, dump mem contents */
			addr = drm_gem_shmem_vmap(&shmem_obj->base);
			BUG_ON(!addr);
			file_write(fp, 0, addr, records->entry_dump_gpu_mem.sz);
			file_close(fp);
			DRM_INFO("written %d bytes to %s", records->entry_dump_gpu_mem.sz, fname);
			drm_gem_shmem_vunmap(&shmem_obj->base, addr);
		}
			break;
		case type_eof:
			ts_end = ktime_get_ns();
			DRM_INFO("--- done. %d records replayed. %lld ms"
					"(load %lld irq %lld map %lld wait %lld waitreg %lld reg %lld)--- ",
					counter,
					(ts_end - ts_start) / 1000 / 1000,
					total_load_ns/1000/1000, total_irq_ns/1000/1000,
					total_map_ns/1000/1000, total_wait_us / 1000,
					total_waitreg_us/1000, total_reg_ns/1000/1000 );
			ret = 0;
			goto done;
		default:
			ret = -10;
			dev_err(v3d->drm.dev, "unrecognized type, abort");
			goto done;
			break;
		} // switch

		records++;
		if (counter == MAX_RECORDS) { // failsafe.
			dev_err(v3d->drm.dev, "reached # max records = %d. abort", counter);
			ret = -1;
			goto done;
		}
		counter++;
	} // for(;;)

done:
	v3d_is_replay_xzl = 0;
	v3d_is_recording_xzl = v3d_is_recording_saved;
	mb();
	return ret;
}

/* return 0 on success */
int v3d_dump_gpu_mem(void *vptr, u32 size) {
	// struct file* file;
	return 0;
}

#include <linux/zlib.h>

/* Compression parameters */
#define COMPR_LEVEL 1
#define WINDOW_BITS 12
#define MEM_LEVEL 4
static struct z_stream_s stream;

/* Derived from nvram_compress() */
static int __maybe_unused nvram_compress(const void *in, void *out, size_t inlen,
							size_t outlen)
{
	int err, ret;

	ret = -EIO;
	err = zlib_deflateInit2(&stream, COMPR_LEVEL, Z_DEFLATED, WINDOW_BITS,
						MEM_LEVEL, Z_DEFAULT_STRATEGY);
	if (err != Z_OK)
		goto error;

	stream.next_in = in;
	stream.avail_in = inlen;
	stream.total_in = 0;
	stream.next_out = out;
	stream.avail_out = outlen;
	stream.total_out = 0;

	err = zlib_deflate(&stream, Z_FINISH);
	if (err != Z_STREAM_END)
		goto error;

	err = zlib_deflateEnd(&stream);
	if (err != Z_OK)
		goto error;

	if (stream.total_out >= stream.total_in)
		goto error;

	ret = stream.total_out;
error:
	return ret;
}

// infutil.c
static int __maybe_unused xzl_zlib_inflate_blob(void *gunzip_buf, unsigned int sz,
		      const void *buf, unsigned int len)
{
	const u8 *zbuf = buf;
	struct z_stream_s *strm;
	int rc;

	rc = -ENOMEM;
	strm = kmalloc(sizeof(*strm), GFP_KERNEL);
	if (strm == NULL)
		goto gunzip_nomem1;
	strm->workspace = kmalloc(zlib_inflate_workspacesize(), GFP_KERNEL);
	if (strm->workspace == NULL)
		goto gunzip_nomem2;

	/* gzip header (1f,8b,08... 10 bytes total + possible asciz filename)
	 * expected to be stripped from input
	 */
	strm->next_in = zbuf;
	strm->avail_in = len;
	strm->next_out = gunzip_buf;
	strm->avail_out = sz;

	rc = zlib_inflateInit2(strm, WINDOW_BITS /* must match */);
//	rc = zlib_inflateInit2(strm, -MAX_WBITS);

	if (rc == Z_OK) {
		rc = zlib_inflate(strm, Z_FINISH);
		/* after Z_FINISH, only Z_STREAM_END is "we unpacked it all" */
		if (rc == Z_STREAM_END)
			rc = sz - strm->avail_out;
		else
			rc = -EINVAL;
		zlib_inflateEnd(strm);
	} else
		rc = -EINVAL;

	kfree(strm->workspace);
gunzip_nomem2:
	kfree(strm);
gunzip_nomem1:
	return rc; /* returns Z_OK (0) if successful */
}



#if 0 
static void hex_dump(const void *data, size_t size) {
	char ascii[17];
	size_t i, j;
	ascii[16] = '\0';
	for (i = 0; i < size; ++i) {
		print_to_tracebuffer(KERN_CONT "%02X ", ((unsigned char*)data)[i]);
		if (((unsigned char*)data)[i] >= ' ' && ((unsigned char*)data)[i] <= '~') {
			ascii[i % 16] = ((unsigned char*)data)[i];
		} else {
			ascii[i % 16] = '.';
		}
		if ((i+1) % 8 == 0 || i+1 == size) {
			print_to_tracebuffer(KERN_CONT " ");
			if ((i+1) % 16 == 0) {
				print_to_tracebuffer(KERN_CONT "|  %s \n", ascii);
			} else if (i+1 == size) {
				ascii[(i+1) % 16] = '\0';
				if ((i+1) % 16 <= 8) {
					print_to_tracebuffer(KERN_CONT " ");
				}
				for (j = (i+1) % 16; j < 16; ++j) {
					print_to_tracebuffer(KERN_CONT "   ");
				}
				print_to_tracebuffer(KERN_CONT "|  %s \n", ascii);
			}
		}
	}
}
#endif

// dump all alive drm BOs in a snapshot
// @tag: will be used to name the dump
void xzl_dump_all_gpu_regions_multi(struct v3d_dev *v3d, char* tag) {
#if 0 // working but not useful
	struct drm_mm_node *node;
	// struct drm_gem_shmem_object *shmem_obj;

	// print all mm "nodes" -- by drm allocator. including both free and allocated
	drm_mm_for_each_node(node, &v3d->mm)
	{
		dev_err(v3d->drm.dev, "drm_mm_node start: %llx \n", node->start);
		// shmem_obj = to_drm_gem_shemem_object()
	}
	{
		struct drm_printer p;
		p = drm_info_printer(v3d->drm.dev);
		drm_mm_print(&v3d->mm, &p);
	}
#endif

	u64 ts_start, ts_end;

	// print v3d_bos we've memoized
	{
		u32 i;
		struct file *fp;
		char fname[64];
		// char * line;

		//snprintf(fname, "%s-%0x%llx.txt", FILE_PATH, bo->node.start);
		// fp = file_open(fname, O_WRONLY | O_CREAT, 0644);
		// fp = file_open(FILE_PATH "bos.txt", O_WRONLY | O_CREAT, 0644);
		// if (!fp)
		//     DRM_ERR("failed to write to %s\n", fname);

		// line = kmalloc(1024, GFP_KERNEL); // a line in output
		// line = vmalloc(4096 * 16); // a line in output

		// if (!line)
		//     DRM_ERR("failed to alloc");
		//     return;

		ts_start = ktime_get_ns();
		mutex_lock(&v3d->bo_lock);
		for (i = 0; i < NUM_BO_SLOTS; i++) {
			struct v3d_bo *bo = v3d->bo_stats.bos[i];
			struct drm_gem_shmem_object *shmem_obj = NULL;
			void *addr;

			if (!bo)
				continue;

			shmem_obj = &(bo->base);

//			if (shmem_obj->base.size > 4096 * 4) // cheating. after this, it works
//				continue;

			DRM_INFO("will map: bo node start (page): 0x%llx size 0x%lx (0x%lx pages)\n",
					bo->node.start, shmem_obj->base.size, shmem_obj->base.size >> V3D_MMU_PAGE_SHIFT);
			addr = drm_gem_shmem_vmap(&shmem_obj->base);
			DRM_DEBUG("bo kernel virt addr is %lx", (unsigned long )shmem_obj->vaddr);

//			snprintf(fname, 64, FILE_PATH "/bo_%s_0x%08llx.bin", tag, bo->node.start);
			snprintf(fname, 64, "%s/mem_%s_0x%08llx.bin", FILE_PATH, tag,
					bo->node.start << V3D_MMU_PAGE_SHIFT);

			fp = file_open(fname, O_WRONLY | O_CREAT, 0644);
			if (!fp)
				DRM_INFO("failed to write to %s\n", fname);
			else {
				file_write(fp, 0, addr, shmem_obj->base.size);
				file_close(fp);
				DRM_INFO("written %ld bytes to %s", shmem_obj->base.size, fname);
				trace_v3d_dump_gpu_region(bo->node.start,
						shmem_obj->base.size >> V3D_MMU_PAGE_SHIFT, tag);
			}

			// if (shmem_obj->base.size % 32) {
			//     DRM_INFO("buffer size not 32-byte aligned. unsupported");
			//     continue;
			// }

			// int remaining_items = shmem_obj->base.size/4, n_items = 0;
			// u32 * buf = vaddr;
			// char * p = line;
			// for (int j = 0; j < remaining_items; j++)
			//     p += snprintf()
			drm_gem_shmem_vunmap(&shmem_obj->base, addr);
		}
		mutex_unlock(&v3d->bo_lock);
		ts_end = ktime_get_ns();
		// kfree(line);
	}

	DRM_INFO("----- end of xzl_dump_all_gpu_regions (%lld ms)-------\n",
			(ts_end-ts_start)/1000/1000);
}

#include <linux/binfmts.h>
#include <linux/coredump.h>

/* from binfmt_elf.c */

static void fill_elf_header(struct elfhdr *elf, int segs,
			    u16 machine, u32 flags)
{
	memset(elf, 0, sizeof(*elf));

	memcpy(elf->e_ident, ELFMAG, SELFMAG);
	elf->e_ident[EI_CLASS] = ELF_CLASS;
	elf->e_ident[EI_DATA] = ELF_DATA;
	elf->e_ident[EI_VERSION] = EV_CURRENT;
	elf->e_ident[EI_OSABI] = ELF_OSABI;

	elf->e_type = ET_CORE;
	elf->e_machine = machine;
	elf->e_version = EV_CURRENT;
	elf->e_phoff = sizeof(struct elfhdr);
	elf->e_flags = flags;
	elf->e_ehsize = sizeof(struct elfhdr);
	elf->e_phentsize = sizeof(struct elf_phdr);
	elf->e_phnum = segs;
}

static int elf_read(struct file *file, void *buf, size_t len, loff_t pos)
{
	ssize_t rv;

	rv = kernel_read(file, buf, len, &pos);
	if (unlikely(rv != len)) {
		return (rv < 0) ? rv : -EIO;
	}
	return 0;
}

/**
 * load_elf_phdrs() - load ELF program headers
 * @elf_ex:   ELF header of the binary whose program headers should be loaded
 * @elf_file: the opened ELF binary file
 *
 * Loads ELF program headers from the binary file elf_file, which has the ELF
 * header pointed to by elf_ex, into a newly allocated array. The caller is
 * responsible for freeing the allocated data. Returns an ERR_PTR upon failure.
 */
static struct elf_phdr __maybe_unused *load_elf_phdrs(const struct elfhdr *elf_ex,
				       struct file *elf_file)
{
	struct elf_phdr *elf_phdata = NULL;
	int retval, err = -1;
	unsigned int size;

	/*
	 * If the size of this structure has changed, then punt, since
	 * we will be doing the wrong thing.
	 */
	if (elf_ex->e_phentsize != sizeof(struct elf_phdr))
		goto out;

	/* Sanity check the number of program headers... */
	/* ...and their total size. */
	size = sizeof(struct elf_phdr) * elf_ex->e_phnum;
	if (size == 0 || size > 65536)
		goto out;

	elf_phdata = kmalloc(size, GFP_KERNEL);
	if (!elf_phdata)
		goto out;

	/* Read in the program headers */
	retval = elf_read(elf_file, elf_phdata, size, elf_ex->e_phoff);
	if (retval < 0) {
		err = retval;
		goto out;
	}

	/* Success! */
	err = 0;
out:
	if (err) {
		kfree(elf_phdata);
		elf_phdata = NULL;
	}
	return elf_phdata;
}

/* derived from dump_user_range()
 * unlike dump_user_range, all pages are valid for us. we don't need dump_skip()
 * return 1 on ok
 *
 * XXX: only dump the non-zero portion
 */
static int dump_gpu_region(struct coredump_params *cprm, struct gpu_region *r)
{
	struct drm_gem_shmem_object *shmem = r->shmem;
	char * addr;
	int ret;

	addr = drm_gem_shmem_vmap(&shmem->base);
	BUG_ON(!addr); // NB: it's possible r->num_bytes_dump==0
//	ret = dump_emit(cprm, addr, shmem->base.size);
	ret = dump_emit(cprm, addr, r->num_bytes_dump);
	drm_gem_shmem_vunmap(&shmem->base, addr);

	return ret; /* 1 on success */
}

static int fix_gpu_region_filesz(struct gpu_region *r)
{
	struct drm_gem_shmem_object *shmem = r->shmem;
	static char zeroes[V3D_PAGE_SIZE] = {0};
	char * base, *p;

	base = drm_gem_shmem_vmap(&shmem->base);

	DRM_DEBUG("fix_gpu_region_filesz: start_page %08x num_pages %u "
			"sgt %llx, shmem.vaddr %llx, pages_use count %u vmap_use_count %u"
			"virt %llx size 0x%lx",
					r->start_page, r->num_pages, (u64)shmem->sgt,
					(u64)shmem->vaddr, shmem->pages_use_count, shmem->vmap_use_count,
					(u64)base, shmem->base.size);

	BUG_ON(IS_ERR_OR_NULL(base) || r->num_pages<1
			|| shmem->base.size != r->num_pages * V3D_PAGE_SIZE || !shmem->pages_use_count);

	for (p = base + V3D_PAGE_SIZE * (r->num_pages-1); /* start of the last page */
			 p >= base; p -= V3D_PAGE_SIZE) {
		if (memcmp(p, zeroes, V3D_PAGE_SIZE))
			break;
	}
	drm_gem_shmem_vunmap(&shmem->base, base);

	if (p < base)
//		r->num_pages_dump = 0;
		r->num_bytes_dump = 0;
	else
//		r->num_pages_dump = (p - base) / V3D_PAGE_SIZE + 1;
		r->num_bytes_dump = V3D_PAGE_SIZE * ((p - base) / V3D_PAGE_SIZE + 1);

	DRM_DEBUG("fix_gpu_region_filesz: num_pages %u num_bytes_dump 0x%08x",
			r->num_pages, r->num_bytes_dump);

	return r->num_bytes_dump;
}

/* dump all or some BOs.
 *
 * given a list of regions, dump all the bos that contain the regions
 * dump whole BOs
 *
 * @r: an array of regions ended with {0,0}. okay to have dup regions.
 * 	region size is for sanity check.
 *
 * 	=NULL to dump all live BOs.
 */
#define MAX_FNAME_LENGTH 64
void xzl_dump_gpu_regions_elf(struct v3d_dev *v3d, char* tag,
		struct xzl_gpu_region * r)
{
		u64 ts_start, ts_end;

		u32 i;
		loff_t offset = 0, dataoff;
		size_t vma_data_size = 0; // total dump file size

		struct file *fp;
		char * fname = NULL;

		/* for writing elf */
		struct coredump_params *cprm;
		int segs;  // # of valid gpu regions
		struct elfhdr elf;
		Elf_Half e_phnum; // # of prog headers (= # segs as we don't create any extra)
		elf_addr_t e_shoff; // sect header offset, for us it's the eof

		struct gpu_region * regions; // valid GPU regions to include in the dump

		if (!v3d_is_recording_xzl)
			return;

		ts_start = ktime_get_ns();

		// found valid gpu regions (XXX sort them?)
		regions = kvmalloc(sizeof(struct gpu_region) * NUM_BO_SLOTS,
				GFP_KERNEL);
		BUG_ON(!regions);
		memset(regions, 0, sizeof(struct gpu_region) * NUM_BO_SLOTS);

		// pass 1 - find valid regions
		mutex_lock(&v3d->bo_lock);

		segs = 0;

		if (!r) { /* dump all valid regions */
			for (i = 0; i < NUM_BO_SLOTS; i++) {
					struct v3d_bo *bo = v3d->bo_stats.bos[i];
					if (bo && v3d_dump_bo_type[bo->type]) {
						struct drm_gem_shmem_object * shmem_obj = &(bo->base);
						regions[segs].start_page = bo->node.start;
						regions[segs].num_pages = shmem_obj->base.size >> V3D_MMU_PAGE_SHIFT;
						regions[segs].shmem = shmem_obj;
						regions[segs].type = bo->type;
						segs++;
					}
			}
		} else { /* find specified regions. XXX naive search XXX */
			char *bo_flags; // whether we have dumped a BO
			bo_flags = kmalloc(NUM_BO_SLOTS, GFP_KERNEL);
			BUG_ON(!bo_flags);
			memset(bo_flags, 0, NUM_BO_SLOTS);

			for (; !(r->start_addr == 0 && r->num_bytes == 0); r++) {
				u32 start_addr = r->start_addr;
				u32 end_addr = start_addr + r->num_bytes;

				DRM_DEBUG("look for region %x - %x", start_addr, end_addr);

				for (i = 0; i < NUM_BO_SLOTS; i++) {
						u64 bo_start, bo_end;
						struct drm_gem_shmem_object *shmem_obj;
						struct v3d_bo *bo = v3d->bo_stats.bos[i];
						if (!bo || !v3d_dump_bo_type[bo->type])
							continue;

						shmem_obj = &(bo->base);
						bo_start = bo->node.start << V3D_MMU_PAGE_SHIFT;
						bo_end = bo_start + shmem_obj->base.size;

						if (!(start_addr >= bo_start && end_addr <= bo_end)) {  // miss
								/* unsupported: given region intersects with a BO */
								BUG_ON(!((start_addr < bo_start && end_addr < bo_start)
											|| (start_addr > bo_end && end_addr > bo_end)));
								continue;
						}

						if (bo_flags[i]) // hit but already dumped. done with the region
								break;
						bo_flags[i] = 1;

						// hit, not dumped. add to list
						DRM_DEBUG("will dump: bo node start: 0x%llx end 0x%llx requested start_addr %08x end_addr %08x\n",
										bo_start, bo_end, start_addr, end_addr);

						regions[segs].start_page = bo->node.start;
						regions[segs].num_pages = shmem_obj->base.size >> V3D_MMU_PAGE_SHIFT;
						regions[segs].shmem = shmem_obj;
						regions[segs].type = bo->type;
						segs++;
						break;
					} // for BO slots
					if (i == NUM_BO_SLOTS) {
						DRM_ERROR("bug? cannot find BO for a given region");
					}
				} // for given regions
				kfree(bo_flags);
			}

#if 1
		{ /* determine dump filesize, which can be smaller than memsize */
			u64 t1;
			t1=ktime_get_ns();
			for (i = 0; i < segs; i++) {
				DRM_DEBUG("to fix gpu regions. %d/%d segs", i, segs);
				regions[i].num_bytes_dump = V3D_PAGE_SIZE * regions[i].num_pages; // default value
				fix_gpu_region_filesz(regions + i);
				vma_data_size += regions[i].num_bytes_dump;
			}
			DRM_INFO("fix gpu regions %lld ms", (ktime_get_ns()-t1)/1000/1000);
		}
#endif

		/* pass 2 - dump to an elf file */
		cprm = kvmalloc(sizeof(struct coredump_params), GFP_KERNEL);
		BUG_ON(!cprm);

		/* If segs > PN_XNUM(0xffff), then e_phnum overflows. To avoid
		 * this, kernel supports extended numbering. Have a look at
		 * include/linux/elf.h for further information. */
		e_phnum = segs > PN_XNUM ? PN_XNUM : segs;
		BUG_ON(e_phnum != segs); // xzl: not supporting overflow

		fname = kvmalloc(MAX_FNAME_LENGTH, GFP_KERNEL);
		BUG_ON(IS_ERR(fname));
		snprintf(fname, MAX_FNAME_LENGTH, "%s/mem_%s.elf", FILE_PATH, tag);
		fp = file_open(fname, O_WRONLY | O_CREAT, 0644);
		if (!fp) {
			DRM_ERROR("failed to write to %s\n", fname);
			goto cleanup;
		}

		cprm->siginfo = NULL;
		cprm->regs = NULL;
		cprm->limit = 0xffffffff; /* max dump size? in bytes */
		cprm->file = fp;
		cprm->written = 0;
		cprm->pos = 0;

		fill_elf_header(&elf, segs, ELF_ARCH, 0 /*ELF_CORE_EFLAGS*/);
		offset += sizeof(elf);				/* Elf header */
		offset += segs * sizeof(struct elf_phdr);	/* Program headers */
		/* Write notes phdr entry -- TODO */

		/* xzl: dataoff points to the start of the data (1st seg)*/
		dataoff = offset = roundup(offset, ELF_EXEC_PAGESIZE);
		offset += vma_data_size; /* xzl: end of all segs */
		// offset += elf_core_extra_data_size(); /// nothing?
		e_shoff = offset; // start of sect header. non existsing to us

		offset = dataoff; // back to the seg start

		if (!dump_emit(cprm, &elf, sizeof(elf)))
			goto cleanup;

		/* Write program headers for segments dump */
		for (i = 0; i < segs; i++) {
			struct gpu_region *region = regions + i;
			struct elf_phdr phdr;

			phdr.p_type = PT_LOAD;
			phdr.p_offset = offset;
			phdr.p_vaddr = region->start_page << V3D_MMU_PAGE_SHIFT;
			phdr.p_paddr = 0;
			phdr.p_memsz = region->num_pages << V3D_MMU_PAGE_SHIFT;
			phdr.p_filesz = region->num_bytes_dump;
			offset += phdr.p_filesz;
			phdr.p_flags = (PF_R|PF_W)|(region->type<<16); // xzl: bo type in higher 16 bits
			phdr.p_align = ELF_EXEC_PAGESIZE;

			DRM_DEBUG("elf seg vaddr %08llx memsz %08llx filesz %08llx",
					phdr.p_vaddr, phdr.p_memsz, phdr.p_filesz);

			if (!dump_emit(cprm, &phdr, sizeof(phdr)))
				goto end_coredump;
		}

		/* Align to page */
		if (!dump_skip(cprm, dataoff - cprm->pos))
			goto end_coredump;

		for (i = 0; i < segs; i++) {
			struct gpu_region *region = regions + i;
			if (!dump_gpu_region(cprm, region)) {
				DRM_ERROR("failed to dump gpu region. why?");
				goto end_coredump;
			}
//			trace_v3d_dump_gpu_region(region->start_page,
//										region->num_pages, tag);
		}

		// only one trace point
		trace_v3d_dump_gpu_region(0, 0xffff, tag);

#if 0
		for (i = 0; i < NUM_BO_SLOTS; i++) {
			struct v3d_bo *bo = v3d->bo_stats.bos[i];
			struct drm_gem_shmem_object *shmem_obj = NULL;
			void *addr;
			char *dump;

			if (!bo)
				continue;

			shmem_obj = &(bo->base);

			dump = kvmalloc(shmem_obj->base.size, GFP_KERNEL);
			if (!dump) {
				DRM_ERROR("xzl_dump_all_gpu_regions: kvmalloc failed");
				goto cleanup;
			}

			DRM_INFO("will map: bo node start (page): 0x%llx size 0x%lx (0x%lx pages)\n",
					bo->node.start, shmem_obj->base.size, shmem_obj->base.size >> V3D_MMU_PAGE_SHIFT);
			addr = drm_gem_shmem_vmap(&shmem_obj->base);
			DRM_DEBUG("bo kernel virt addr is %lx", (unsigned long )shmem_obj->vaddr);

//			snprintf(fname, 64, FILE_PATH "/bo_%s_0x%08llx.bin", tag, bo->node.start);
//			snprintf(fname, 64, FILE_PATH "/mem_%s_0x%08llx.bin", tag,
//					bo->node.start << V3D_MMU_PAGE_SHIFT);

			// write to file
//				offset += file_write(fp, offset, addr, shmem_obj->base.size);
//				DRM_INFO("written %ld bytes to %s", shmem_obj->base.size, fname);
				memcpy(dump, addr, shmem_obj->base.size);

				trace_v3d_dump_gpu_region(bo->node.start,
						shmem_obj->base.size >> V3D_MMU_PAGE_SHIFT, tag);

			drm_gem_shmem_vunmap(&shmem_obj->base, addr);

			kvfree(dump);
		}
#endif

cleanup:
end_coredump:
		file_close(fp);
		kvfree(fname);
		kvfree(cprm);
		mutex_unlock(&v3d->bo_lock);
		kvfree(regions);
		ts_end = ktime_get_ns();

		DRM_INFO("----- end of %s (%lld ms) fname %s-------\n", __func__,
			(ts_end-ts_start)/1000/1000, fname);
}


// dump a given range of a GPU mem
// @num_bytes == 0 --> dump until the end of this BO
void xzl_dump_gpu_mempart(struct v3d_dev *v3d, char* tag,
		u32 start_addr, u32 num_bytes)
{
	u32 i;
	struct file *fp;
	char fname[64];
	u32 end_addr = start_addr + num_bytes;
	u64 bo_start;
	u64 bo_end;

	BUG_ON(end_addr < start_addr); // wrap around

	mutex_lock(&v3d->bo_lock);
	for (i = 0; i < NUM_BO_SLOTS; i++) {
		struct v3d_bo *bo = v3d->bo_stats.bos[i];
		struct drm_gem_shmem_object *shmem_obj = NULL;
		char *addr;

		if (!bo)
			continue;

		shmem_obj = &(bo->base);

		 bo_start = bo->node.start << V3D_MMU_PAGE_SHIFT;
		 bo_end = bo_start + shmem_obj->base.size;

		if (!(start_addr >= bo_start && end_addr <= bo_end)) {  // miss
			/* unsupported: given region intersects with a BO */
			BUG_ON(!((start_addr < bo_start && end_addr < bo_start)
					|| (start_addr > bo_end && end_addr > bo_end)));
			continue;
		}

		// hit
		DRM_INFO("will map: bo node start: 0x%llx end 0x%llx requested start_addr %08x end_addr %08x\n",
				bo_start, bo_end, start_addr, end_addr);

		BUG_ON(num_bytes > shmem_obj->base.size);

		addr = drm_gem_shmem_vmap(&shmem_obj->base);
		DRM_DEBUG("bo kernel virt addr is %lx", (unsigned long )shmem_obj->vaddr);

//		snprintf(fname, 64, "%s/bo_%s_0x%08x.bin", FILE_PATH, tag, start_addr);
		snprintf(fname, 64, "%s/mem_%s_0x%08x.bin", FILE_PATH, tag,
				start_addr << V3D_MMU_PAGE_SHIFT);

		fp = file_open(fname, O_WRONLY | O_CREAT, 0644);
		if (!fp)
			DRM_INFO("failed to write to %s\n", fname);
		else {
			u32 offset = start_addr - bo_start;
			u32 written_bytes = num_bytes
					? num_bytes : shmem_obj->base.size - offset;
			file_write(fp, 0, addr + offset, written_bytes);
			file_close(fp);
			DRM_INFO("written 0x%08x bytes to %s", written_bytes, fname);
			trace_v3d_dump_gpu_region2(start_addr, written_bytes, tag);
		}
		drm_gem_shmem_vunmap(&shmem_obj->base, addr);
		break;
	}
	mutex_unlock(&v3d->bo_lock);

	if (i == NUM_BO_SLOTS)
		DRM_ERROR("----- bug? cannot find BO for GPU addr %x-------\n", start_addr);
	else
		DRM_INFO("----- end of xzl_dump_gpu_region -------\n");
}

/* given a list of regions, dump all the bos that contain the regions
 * dump whole BOs
 * @regions: an array ended with {0,0}. okay to have dup regions.
 * 	region size is for sanity check.
 */
#include <linux/crc32.h>

void xzl_dump_gpu_regions(struct v3d_dev *v3d, char* tag,
		struct xzl_gpu_region * regions)
{
	u32 i;
	struct xzl_gpu_region * region;
	struct file *fp;
	char fname[64];
	char *bo_flags; // whether we have dumped a BO
	u64 bo_start, bo_end;
	u32 start_addr, end_addr;
	u64 ts_before, ts_after_c, ts_after_f;

	BUG_ON(!regions);
	region = regions;

	bo_flags = kmalloc(NUM_BO_SLOTS, GFP_KERNEL);
	BUG_ON(!bo_flags);
	memset(bo_flags, 0, NUM_BO_SLOTS);

	mutex_lock(&v3d->bo_lock);

	for (region = regions;
			!(region->start_addr == 0 && region->num_bytes == 0); region ++) {

		start_addr = region->start_addr;
		end_addr = start_addr + region->num_bytes;

		for (i = 0; i < NUM_BO_SLOTS; i++) { // go through all allocated BOs
			struct v3d_bo *bo = v3d->bo_stats.bos[i];
			struct drm_gem_shmem_object *shmem_obj = NULL;
			char *addr = NULL;

			if (!bo)
				continue;

			shmem_obj = &(bo->base);

			bo_start = bo->node.start << V3D_MMU_PAGE_SHIFT;
			bo_end = bo_start + shmem_obj->base.size;

			if (!(start_addr >= bo_start && end_addr <= bo_end)) {  // miss
				/* unsupported: given region intersects with a BO */
				BUG_ON(!((start_addr < bo_start && end_addr < bo_start)
						|| (start_addr > bo_end && end_addr > bo_end)));
				continue;
			}

			if (bo_flags[i]) // hit but already dumped. done.
				break;
			bo_flags[i] = 1;

			// hit, not dumped. dump the whole BO
			DRM_INFO("will map: bo node start: 0x%llx end 0x%llx requested start_addr %08x end_addr %08x\n",
							bo_start, bo_end, start_addr, end_addr);
			addr = drm_gem_shmem_vmap(&shmem_obj->base);
			DRM_DEBUG("bo kernel virt addr is %lx", (unsigned long )shmem_obj->vaddr);

//			snprintf(fname, 64, "%s/bo_%s_0x%08llx.bin", FILE_PATH, tag, bo->node.start /* start_page */);
			snprintf(fname, 64, "%s/mem_%s_0x%08llx.bin", FILE_PATH, tag,
					bo->node.start << V3D_MMU_PAGE_SHIFT /* start addr */);

			fp = file_open(fname, O_WRONLY | O_CREAT, 0644);

			if (!fp)
				DRM_INFO("failed to write to %s\n", fname);
			else {
//				static int gz_magic[2] = {0x1f, 0x8b};
				int zipped_len = -1;
				char * zipped = kvmalloc(shmem_obj->base.size, GFP_KERNEL);
//				char * zip_base = zipped;
//				int crc = 0xdeadbeef;
				BUG_ON(!zipped);

//				crc = crc32(0, addr, shmem_obj->base.size);


#if 0 /* difficult/unnecessary to gen gz */
				/* gzip header, 10 bytes*/
				zipped += snprintf(zipped, shmem_obj->base.size, "%c%c%c%c%c%c%c%c%c%c",
						gz_magic[0], gz_magic[1],
						8 /*Z_DEFLATED*/, 0 /*flags*/, 0,0,0,0 /*time*/, 0 /*xflags*/,
						3 /* OS_CODE=unix*/);
#endif

				ts_before = ktime_get_ns();
//				zipped_len = nvram_compress(addr, zipped,
//						shmem_obj->base.size, shmem_obj->base.size);
				ts_after_c = ktime_get_ns();

//				BUG_ON(zipped_len < 0);

#if 0 /* test unzip. it works */
				{
					char *unzip;
					int len, cmp;

					unzip = kvmalloc(shmem_obj->base.size * 2, GFP_KERNEL);
					len = xzl_zlib_inflate_blob(unzip,
							shmem_obj->base.size * 2, zipped, zipped_len);
					cmp = strncmp(addr, unzip, shmem_obj->base.size);

					DRM_INFO("inflate returns %d, cmp res %d", len, cmp);
					kvfree(unzip);
				}
#endif

#if 0
				// gz footer, 8 bytes
				*(unsigned int *)zipped = crc;
				*((unsigned int *)zipped + 1) = shmem_obj->base.size;
#endif

				file_write(fp, 0, addr, shmem_obj->base.size); // uncompressed
//				file_write(fp, 0, zipped, zipped_len);	// zlib
//				file_write(fp, 0, zip_base, zipped_len + 18);  // gz - not working

				file_close(fp);

				ts_after_f = ktime_get_ns();

//				DRM_INFO("written %ld bytes to %s", shmem_obj->base.size, fname);
				DRM_INFO("written %d bytes (uncompressed %ld) to %s. zip: %lld ms file: %lld ms",
						zipped_len, shmem_obj->base.size, fname,
						(ts_after_c-ts_before)/1000/1000,
						(ts_after_f-ts_after_c)/1000/1000);

				trace_v3d_dump_gpu_region(bo->node.start,
						shmem_obj->base.size >> V3D_MMU_PAGE_SHIFT, tag);

				kvfree(zipped);
			}
			drm_gem_shmem_vunmap(&shmem_obj->base, addr);
			break;
		} // for BOs
		if (i == NUM_BO_SLOTS)
			DRM_ERROR("----- bug? cannot find BO for GPU addr %x-------\n", start_addr);
	} // for input regions
	mutex_unlock(&v3d->bo_lock);

	kfree(bo_flags);
	DRM_INFO("----- end of xzl_dump_gpu_regions -------\n");
}

/* load all segs from an elf file. assuming the GPU mappings exist
 * @filesz: out, total file bytes loaded
 * cf: load_elf_library
 * return: error code. 0 okay
 * */
static int xzl_load_gpu_regions_elf(struct file *file, ssize_t *filesz)
{
	struct elf_phdr *elf_phdata;
	struct elf_phdr *eppnt;
	int retval, error, i, j;
	struct elfhdr elf_ex;

	*filesz = 0;

	error = -ENOEXEC;
	retval = elf_read(file, &elf_ex, sizeof(elf_ex), 0);
	if (retval < 0)
		goto out;

	if (memcmp(elf_ex.e_ident, ELFMAG, SELFMAG) != 0)
		goto out;

	/* First of all, some simple consistency checks */
	if (elf_ex.e_machine != ELF_ARCH) /* xzl: add more checks? */
		goto out;

	/* Now read in all of the header information */
	j = sizeof(struct elf_phdr) * elf_ex.e_phnum;
	/* j < ELF_MIN_ALIGN because elf_ex.e_phnum <= 2 */ //xzl-- matters?

	error = -ENOMEM;
	elf_phdata = kmalloc(j, GFP_KERNEL);
	if (!elf_phdata)
		goto out;

	eppnt = elf_phdata;
	error = -ENOEXEC;
	retval = elf_read(file, eppnt, j, elf_ex.e_phoff);
	if (retval < 0)
		goto out_free_ph;

	// xzl: @eppnt: buf for all prog headers @j: sz of all program headers
	for (i = 0; i<elf_ex.e_phnum; i++) {
		u32 start_page;
		char *addr;
		struct drm_gem_shmem_object *shmem_obj = NULL;

		BUG_ON(eppnt[i].p_type != PT_LOAD);

		start_page = eppnt[i].p_vaddr >> V3D_MMU_PAGE_SHIFT;

		/* the GPU mem region must have been mapped */
#if 0
		for (j = 0; j < num_gpu_regions; j++) {
			if (the_gpu_regions[j].start_page == start_page) {
				shmem_obj = the_gpu_regions[j].shmem;
				break;
			}
		}
		if (j == num_gpu_regions) {
					DRM_ERROR("BUG? try to load a GPU region unmapped. start_page=%08x",
							start_page);
					goto out_free_ph;
				}
#endif
		{
				struct gpu_region *rr = radix_tree_lookup(&the_gpu_regions, start_page);
				if (!rr) {
					DRM_ERROR("BUG? try to load a GPU region unmapped. start_page=%08x",
							start_page);
					goto out_free_ph;
				}
				shmem_obj = rr->shmem;
		}

		if (shmem_obj->base.size != eppnt[i].p_memsz) { /* sanity check */
			DRM_ERROR("sz %lx != memsz %llx filesz %llx",
					shmem_obj->base.size, eppnt[i].p_memsz, eppnt[i].p_filesz);
			goto out_free_ph;
		}
//		BUG_ON(shmem_obj->base.size != eppnt[i].p_memsz);

		/* map GPU BO to kernel space, upload mem contents */
		addr = drm_gem_shmem_vmap(&shmem_obj->base);
		BUG_ON(!addr);
		retval = elf_read(file, addr, eppnt[i].p_filesz,
				eppnt[i].p_offset/*file offset*/);
		drm_gem_shmem_vunmap(&shmem_obj->base, addr);

		if (retval) {
			DRM_ERROR("elf_read failed. why?");
			continue;
		}

		*filesz += eppnt[i].p_filesz;

		DRM_DEBUG("loadelf: vaddr %08llx memsz %08llx filesz %08llx",
				eppnt[i].p_vaddr, eppnt[i].p_memsz, eppnt[i].p_filesz);
	}

	error = 0;

out_free_ph:
	kfree(elf_phdata);
out:
	return error;
}

#if 0
// procfs control interface... how to pass in v3d*?
// cf: https://devarea.com/linux-kernel-development-creating-a-proc-file-and-interfacing-with-user-space/#.YGDuU51KiUU

#include <linux/proc_fs.h>
#include <asm/uaccess.h>

//static struct dentry *dir_v3d_replay = 0;
static struct proc_dir_entry *ent = 0;

#define BUFSIZE  64
static ssize_t mywrite(struct file *file, const char __user *ubuf, size_t count, loff_t *ppos)
{
	int num,c,i,m;
	char buf[BUFSIZE];
	if(*ppos > 0 || count > BUFSIZE)
		return -EFAULT;
	if(copy_from_user(buf, ubuf, count))
		return -EFAULT;
	printk(KERN_ALERT"received %s\n", buf);
	c = strlen(buf);
	*ppos = c;
	return c;
}

static ssize_t myread(struct file *file, char __user *ubuf,size_t count, loff_t *ppos)
{
	char buf[BUFSIZE];
	int len=0;
	if(*ppos > 0 || count < BUFSIZE)
		return 0;
	len += sprintf(buf,"hello");

	if(copy_to_user(ubuf,buf,len))
		return -EFAULT;
	*ppos = len;
	return len;
}

static struct proc_ops myops =
{
//	.owner = THIS_MODULE,
	.proc_read = myread,
	.proc_write = mywrite,
};
#endif

//struct v3d_recording recording_py  = {
//		.name = "py",
//		.records = v3d_records_py,
//		.path = "/data/rpi4-workspace/trace/py-videocore6-5/"
//};

// entry func
int test_v3d_replay(struct v3d_dev *v3d, const char *name) {

//	v3d_replay(v3d, r);
//	DRM_INFO("r = %08llx", (u64)r);
	struct v3d_recording ** r;

	for (r = recordings; *r != NULL; r++) {
		if (strncmp((*r)->name, name, 32) == 0) {
			v3d_replay(v3d, (*r)->records, (*r)->path);
			v3d_replay_cleanup();
			break;
		}
	}

	if (!*r) {
		DRM_ERROR("---- cannot find recording %s ----", name);
		return -1;
	}

	DRM_INFO("---- all done ----");
	return 0;
}

// to be called when driver loaded/unloaded
int v3d_rnr_init(void)
{
	stream.workspace = kvmalloc(zlib_deflate_workspacesize(
						WINDOW_BITS, MEM_LEVEL), GFP_KERNEL);
	if (!stream.workspace) {
		DRM_ERROR("Bug -- cannot allocate space. why?");
		stream.workspace = NULL;
		return -1;
	}

//	ent = proc_create("v3d-replay",0666,NULL,&myops);
//	if (IS_ERR(ent))
//		DRM_ERROR("failed to cr procfs entry");

	return 0;
}

void v3d_rnr_fini(void)
{
//	if (!IS_ERR(ent))
//		proc_remove(ent);

	if (stream.workspace)
		kvfree(stream.workspace);

	v3d_replay_cleanup();
}


