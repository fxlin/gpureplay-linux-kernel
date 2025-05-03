// ---------------- example recordings ---------------------------- //

static unsigned char buf[] = {0x10, 0x20, 0x30};

static struct record_entry __maybe_unused sample_records[] = {
    {
        .type = type_access_reg,
        .entry_access_reg = {"hub", 'r', 0x00001200, 71578454, -1}, 
        .delay_after_us = 0,
        .comment = NULL,
    },
    {
        .type = type_update_pte,
        .entry_update_pte = {0x00000080, 0x3004b981}, 
        .delay_after_us = 0,
        .comment = NULL,
    }, 
    {
        .type = type_write_gpu_mem,
        // .entry_v3d_write_gpu_mem = {0x00000080, 0x10, .buf = {0x10, 0x20, 0x30}}, 
        .entry_write_gpu_mem = {0x00000080, 0x10, buf}, 
        .delay_after_us = 0,
        .comment = NULL,
    },     
    {
        .type = type_eof /* last one */
    }
};


/* map a region & dump & unmap the region */
static struct record_entry __maybe_unused records_gpumem[] = {
    {.type = type_map_gpu_mem, .entry_map_gpu_mem = {0x20, 1, 1}},
		{.type = type_dump_gpu_mem, .entry_dump_gpu_mem = {0x20, 4096, "test"}},
		{.type = type_map_gpu_mem, .entry_map_gpu_mem = {0x20, 1, 0/*is_map*/}},
    {.type = type_eof /* last one */ }
};

/* read id regs */
static struct record_entry __maybe_unused records_readids[] = {
    /* hub ids */
    { type_access_reg, .entry_access_reg = {"hub", 'r', 0x0008, 0x42554856}, 100 /* us*/, "V3D_HUB_IDENT0"},
    { type_access_reg, .entry_access_reg = {"hub", 'r', 0x000c, 0x000e1124}, 100 /* us*/, "V3D_HUB_IDENT1"},
    { type_access_reg, .entry_access_reg = {"hub", 'r', 0x0010, 0x00000100}, 100 /* us*/, "V3D_HUB_IDENT2"},
    { type_access_reg, .entry_access_reg = {"hub", 'r', 0x0014, 0x00000e00}, 100 /* us*/, "V3D_HUB_IDENT3"},
    /* core ids */
    { type_access_reg, .entry_access_reg = {"core", 'r', 0x0000, 0x04443356}, 100 /* us*/, "V3D_CTL_IDENT0"},
    { type_access_reg, .entry_access_reg = {"core", 'r', 0x0004, 0x81001422}, 100 /* us*/, "V3D_CTL_IDENT1"},
    { type_access_reg, .entry_access_reg = {"core", 'r', 0x0008, 0x40078121}, 100 /* us*/, "V3D_CTL_IDENT2"},
    {.type = type_eof /* last one */ }
};

/* load a mem dump, ubench*/
struct record_entry __maybe_unused v3d_records_loadmem [] = {
		{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000020/*page*/, 0x00008101/*num_pages*/, 1/*is_map*/ } },
		{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0001"/*tag*/ } },
		{.type = type_eof /* last one */ }
};

/* write a BO */
#if 0 // need such bo declared
static struct record_entry __maybe_unused records_writebo[] = {
    {.type = type_write_gpu_mem, 
        .entry_write_gpu_mem = {0x20,
        		sizeof(_tmp_bo_bin_0001_0x00000020_bin), _tmp_bo_bin_0001_0x00000020_bin}
    }, 
    {.type = type_eof /* last one */ }
};
#endif


//#include "gen/records-pyvideocore6.h"
//#include "gen/records-pyvideocore6-2.h"
#include "gen/records-py.h"
#include "gen/records-pysummation.h"
#include "gen/records-headless.h"
#include "gen/records-alexnet.h"
#include "gen/records-vgg16.h"
#include "gen/records-mobilenet.h"
#include "gen/records-resnet18.h"
#include "gen/records-sqz.h"
#include "gen/records-yolov4tiny.h"

static struct v3d_recording * recordings[] =
{
		&recording_py,
		&recording_pysummation,
		&recording_headless,
		&recording_vgg16,
		&recording_alexnet,
		&recording_mobilenet,
		&recording_resnet18,
		&recording_sqz,
		&recording_yolov4tiny,
		NULL /* end */
};


