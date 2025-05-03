//#include "v3d_drv.h"

#ifndef V3D_REPLAY_H
#define V3D_REPLAY_H

#include <linux/ctype.h>

struct v3d_dev;

#define type_access_reg         				0
#define type_update_pte         				1
#define type_write_gpu_mem      				2
#define type_dump_gpu_mem       				3
#define type_map_gpu_mem								4
#define type_write_gpu_mem_fromfile      5		// same as type_write_gpu_mem but data comes from a file
#define type_write_gpu_mempart_fromfile      6		// byte granularity, instead of page granularity
#define type_wait_for_reg         				7
#define type_eof                				-1

#define REPLAY_DELAY_BASE_US  		100 // > this will be abs value
#define REPLAY_DELAY_WAIT_SHORT  	1
#define REPLAY_DELAY_WAIT_NORMAL 	2
#define REPLAY_DELAY_WAIT_LONG  	3
#define REPLAY_DELAY_NONE 				0
//#define REPLAY_DELAY_WAIT_IRQ  		-1
#define REPLAY_DELAY_IRQ_BCL  		-1
#define REPLAY_DELAY_IRQ_RCL  		-2
#define REPLAY_DELAY_IRQ_CSD  		-3
#define REPLAY_DELAY_IRQ_TFU  		-4

/* add more */

#if 0
struct entry_access_reg {
            const char * group;
            char rw;
            u32 offset;
            u32 val;
            int core;
    };

struct entry_update_pte {
            u32 page;
            u32 pte;
    };

struct record_entry {
    int type;
    union
    {
        struct entry_access_reg;
        struct entry_update_pte;
    };
};
#endif

struct record_entry {
    int type;
    union
    {
        struct {
            const char * group;
            char rw; /*r/w; R=read and ignore*/
            u32 offset;
            u32 val;
            int core; /* ignored unless for "core" regs */
        } entry_access_reg;

        struct {
        	const char * group;
        	u32 offset;
        	u32 mask;
        	u32 expected;
        	int core;
        } entry_wait_for_reg;

        struct {
            u32 page;
            u32 pte;
        } entry_update_pte;

        struct {
            u32 start_page;
            u32 num_pages;
            char is_map;
        } entry_map_gpu_mem;

        struct {
            u32 start_page; // gpu
            u32 sz;  // in bytes, not pages. reason: no guarantee header bufs are page-sized
            unsigned char * buf;
            // const unsigned char * buf; // the header from xxd does not carry "const". bad?
        } entry_write_gpu_mem;

        struct {
						u32 start_page; // gpu
						u32 num_pages;
						// file offset default to be 0
						unsigned char * tag; // used to assemble fname
				} entry_write_gpu_mem_fromfile;

        struct {
						u32 start_addr;
						u32 num_bytes;
						// file offset default to be 0
						unsigned char * tag; // used to assemble fname
				} entry_write_gpu_mempart_fromfile;

        struct { // dump specific gpu mm region to a bin file
            u32 start_page;
            u32 sz;
            char * tag;
        } entry_dump_gpu_mem;
    };

    // > 0: udelay (busy wait)
    // 	>=100: at least X us
    //  2. normal delay, (e.g. for reg w & wait)
    // 	1: short delay, (e.g. for reg w)
    // 0: no delay.
    // < 0: interrupt driven. in us
    // 	<=-100: at least X us.
    s64 delay_after_us;
    //char waitirq; // 1: wait for irq
    const char * comment; // optional
};

struct v3d_recording {
	const char * name;
	const struct record_entry * records;
	const char * path; // for mem dumps
};

struct xzl_gpu_region {
	u32 start_addr;
	u32 num_bytes;
};

void xzl_dump_all_gpu_regions(struct v3d_dev *v3d, char * tag);

/* dump a given range of a GPU mem. Not whole BO
 * num_bytes == 0 --> dump until the end of this BO */
void xzl_dump_gpu_mempart(struct v3d_dev *v3d, char* tag,
		u32 start_addr, u32 num_bytes);

/* given a list of regions, dump all the bos that contain the regions
 * dump whole BOs */
void xzl_dump_gpu_regions(struct v3d_dev *v3d, char* tag,
		struct xzl_gpu_region * regions);


void xzl_dump_gpu_regions_elf(struct v3d_dev *v3d, char* tag,
		struct xzl_gpu_region * r);

#endif // V3D_REPLAY_H
