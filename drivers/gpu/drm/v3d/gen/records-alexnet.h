// auto generated. do not edit
// input trace:  /data/rpi4-workspace/trace-test/alexnet/ftrace.txt
 
struct record_entry __maybe_unused v3d_records_alexnet [] = { 
/*1*/{type_access_reg, .entry_access_reg = { "core", 'r', 0x00000000/*offset*/, 0x04443356/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_IDENT0" },
/*2*/{type_access_reg, .entry_access_reg = { "core", 'r', 0x00000004/*offset*/, 0x81001422/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_IDENT1" },
/*3*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000020/*page*/, 0x00000004/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [000] .... 88742.690922: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.690924: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.690925: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.690926: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.690927: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.690928: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.690930: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.690931: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [000] .... 88742.690932: v3d_mmu_flush_end: dev=1 */
/*4*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000040/*page*/, 0x00000004/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [000] .... 88742.691109: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.691110: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.691111: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.691111: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.691112: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.691113: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.691114: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.691115: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [000] .... 88742.691115: v3d_mmu_flush_end: dev=1 */
/*5*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000060/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [000] .... 88742.691250: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.691251: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.691252: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.691253: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.691254: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.691254: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.691255: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.691256: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [000] .... 88742.691257: v3d_mmu_flush_end: dev=1 */
/*6*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000080/*page*/, 0x00000083/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [000] .... 88742.693066: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.693068: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.693069: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.693070: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.693071: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.693072: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.693073: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.693074: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [000] .... 88742.693075: v3d_mmu_flush_end: dev=1 */
/*7*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000120/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [000] .... 88742.693157: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.693158: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.693159: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.693160: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.693161: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.693162: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.693163: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.693164: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [000] .... 88742.693164: v3d_mmu_flush_end: dev=1 */
/*8*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000140/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [000] .... 88742.693224: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.693225: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.693226: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.693226: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.693227: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.693228: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.693229: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.693230: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [000] .... 88742.693230: v3d_mmu_flush_end: dev=1 */
/*9*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000160/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [000] .... 88742.693311: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.693312: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.693313: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.693314: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.693314: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.693315: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.693316: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [000] .... 88742.693317: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [000] .... 88742.693318: v3d_mmu_flush_end: dev=1 */
/*        benchncnn-10678   [000] .... 88742.693585: v3d_submit_cl_ioctl: dev=1, RCL 0x00140000..0x00140038 */
/*10*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000030c/*offset*/, 0x00000000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_PTB_BPOS" },
/*11*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*12*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*          v3d_bin-10644   [001] .... 88742.693849: v3d_submit_cl: dev=1, BCL, seqno=1, 0x00060000..0x0006000e */
/*13*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "bcl_0001"/*tag*/ } },
/*14*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000170/*offset*/, 0x00080000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CLE_CT0QMA" },
/*15*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000174/*offset*/, 0x00083000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CLE_CT0QMS" },
/*16*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000015c/*offset*/, 0x00120002/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CLE_CT0QTS" },
/*17*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000160/*offset*/, 0x00060000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CLE_CT0QBA" },
/*18*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000168/*offset*/, 0x0006000e/*val*/, 0/*core*/ }, -1/*irq_bcl*/, "V3D_CLE_CT0QEA" },
/* (skipped)        benchncnn-10678   [000] d.h. 88742.694319: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000002 core=0 */
/* (skipped)        benchncnn-10678   [000] d.h. 88742.694321: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000002 core=0 */
/*        benchncnn-10678   [000] d.h. 88742.694323: v3d_bcl_irq: dev=1, seqno=1 irq_delay:0.47 ms*/
/*19*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*20*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*       v3d_render-10645   [000] .... 88742.694355: v3d_submit_cl: dev=1, RCL, seqno=1, 0x00140000..0x00140038 */
/*21*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "rcl_0001"/*tag*/ } },
/*22*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000164/*offset*/, 0x00140000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CLE_CT1QBA" },
/*23*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000016c/*offset*/, 0x00140038/*val*/, 0/*core*/ }, -2/*irq_rcl*/, "V3D_CLE_CT1QEA" },
/* (skipped)       v3d_render-10645   [000] d.h1 88742.694846: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000001 core=0 */
/* (skipped)       v3d_render-10645   [000] d.h1 88742.694847: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000001 core=0 */
/*       v3d_render-10645   [000] d.h1 88742.694849: v3d_rcl_irq: dev=1, seqno=1 irq_delay:0.49 ms*/
/* idle long delay = 0.8345629999967059 */
/*24*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000180/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [000] .... 88743.529420: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [000] .... 88743.529422: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [000] .... 88743.529423: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [000] .... 88743.529424: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [000] .... 88743.529425: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [000] .... 88743.529426: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [000] .... 88743.529427: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [000] .... 88743.529427: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [000] .... 88743.529428: v3d_mmu_flush_end: dev=1 */
/*25*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000001a0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88743.546250: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.546252: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.546254: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.546255: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.546255: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.546256: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.546257: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.546258: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88743.546259: v3d_mmu_flush_end: dev=1 */
/*26*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000001c0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88743.556737: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.556739: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.556740: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.556741: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.556741: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.556742: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.556743: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.556744: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88743.556745: v3d_mmu_flush_end: dev=1 */
/*27*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000001e0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88743.570204: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.570206: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.570207: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.570208: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.570209: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.570209: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.570210: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.570211: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88743.570212: v3d_mmu_flush_end: dev=1 */
/*28*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000200/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88743.602358: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.602360: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.602362: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.602362: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.602363: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.602364: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.602365: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.602365: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88743.602366: v3d_mmu_flush_end: dev=1 */
/*29*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000220/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88743.619550: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.619552: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.619553: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.619554: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.619555: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.619555: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.619556: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.619557: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88743.619559: v3d_mmu_flush_end: dev=1 */
/*30*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000240/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88743.652310: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.652312: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.652313: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.652314: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.652315: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.652316: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.652316: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.652317: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88743.652318: v3d_mmu_flush_end: dev=1 */
/*31*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000260/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88743.675154: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.675156: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.675157: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.675158: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.675159: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.675160: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.675160: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.675161: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88743.675162: v3d_mmu_flush_end: dev=1 */
/*32*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000280/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88743.685907: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.685909: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.685910: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.685911: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.685912: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.685912: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.685913: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.685914: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88743.685915: v3d_mmu_flush_end: dev=1 */
/*33*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000002a0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88743.699867: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.699868: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.699870: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.699871: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.699871: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.699872: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.699873: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.699874: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88743.699875: v3d_mmu_flush_end: dev=1 */
/*34*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000002c0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88743.732215: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.732217: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.732218: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.732219: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.732219: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.732220: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.732221: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.732222: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88743.732223: v3d_mmu_flush_end: dev=1 */
/*35*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000002e0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88743.749860: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.749862: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.749864: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.749864: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.749865: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.749866: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.749867: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88743.749867: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88743.749869: v3d_mmu_flush_end: dev=1 */
/* idle long delay = 0.25225799999316223 */
/*36*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000300/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88744.002134: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.002136: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.002138: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.002138: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.002139: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.002140: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.002141: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.002141: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88744.002142: v3d_mmu_flush_end: dev=1 */
/*37*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000320/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88744.034992: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.034994: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.034995: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.034996: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.034996: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.034997: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.034998: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.034999: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88744.035000: v3d_mmu_flush_end: dev=1 */
/*38*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000340/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88744.045788: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.045790: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.045791: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.045792: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.045792: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.045793: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.045794: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.045795: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88744.045796: v3d_mmu_flush_end: dev=1 */
/*39*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000360/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88744.058760: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.058762: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.058763: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.058764: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.058767: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.058768: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.058769: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.058770: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88744.058771: v3d_mmu_flush_end: dev=1 */
/*40*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000380/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88744.099867: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.099870: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.099871: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.099872: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.099872: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.099873: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.099874: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.099875: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88744.099876: v3d_mmu_flush_end: dev=1 */
/*41*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000003a0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88744.128290: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.128292: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.128293: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.128294: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.128295: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.128296: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.128297: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.128298: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88744.128299: v3d_mmu_flush_end: dev=1 */
/*42*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000003c0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88744.167989: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.167991: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.167992: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.167993: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.167994: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.167994: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.167995: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.167996: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88744.167997: v3d_mmu_flush_end: dev=1 */
/* idle long delay = 0.16410300000279676 */
/*43*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000003e0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88744.332107: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.332109: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.332110: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.332111: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.332112: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.332113: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.332114: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.332114: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88744.332116: v3d_mmu_flush_end: dev=1 */
/*44*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000400/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88744.357136: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.357138: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.357139: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.357140: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.357141: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.357142: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.357142: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.357143: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88744.357144: v3d_mmu_flush_end: dev=1 */
/* idle long delay = 0.10234900000796188 */
/*45*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000420/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88744.459499: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.459501: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.459503: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.459504: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.459504: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.459505: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.459506: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.459507: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88744.459508: v3d_mmu_flush_end: dev=1 */
/*46*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000440/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88744.493439: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.493442: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.493443: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.493444: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.493444: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.493445: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.493446: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.493447: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88744.493448: v3d_mmu_flush_end: dev=1 */
/*47*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000460/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88744.511499: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.511501: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.511502: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.511503: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.511503: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.511504: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.511505: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.511506: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88744.511507: v3d_mmu_flush_end: dev=1 */
/* idle long delay = 0.07067000000097323 */
/*48*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000480/*page*/, 0x00000002/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88744.582183: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.582186: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.582187: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.582187: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.582188: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.582189: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.582190: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.582190: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88744.582192: v3d_mmu_flush_end: dev=1 */
/*49*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000004a0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88744.598461: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.598463: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.598464: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.598465: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.598465: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.598466: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.598467: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.598468: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88744.598469: v3d_mmu_flush_end: dev=1 */
/*50*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000004c0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88744.616340: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.616342: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.616343: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.616344: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.616344: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.616345: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.616346: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.616347: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88744.616349: v3d_mmu_flush_end: dev=1 */
/*51*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000004e0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88744.632395: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.632397: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.632398: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.632399: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.632400: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.632400: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.632401: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.632402: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88744.632403: v3d_mmu_flush_end: dev=1 */
/*52*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000500/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88744.648433: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.648435: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.648436: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.648437: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.648438: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.648438: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.648439: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.648440: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88744.648441: v3d_mmu_flush_end: dev=1 */
/*53*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000520/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88744.665799: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.665801: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.665802: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.665803: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.665803: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.665804: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.665805: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.665806: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88744.665807: v3d_mmu_flush_end: dev=1 */
/*54*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000540/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88744.682782: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.682785: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.682786: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.682787: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.682788: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.682788: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.682789: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.682790: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88744.682791: v3d_mmu_flush_end: dev=1 */
/*55*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000560/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88744.704405: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.704407: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.704408: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.704409: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.704409: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.704410: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.704411: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.704412: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88744.704413: v3d_mmu_flush_end: dev=1 */
/*56*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000580/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88744.725763: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.725765: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.725766: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.725767: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.725768: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.725768: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.725769: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.725770: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88744.725772: v3d_mmu_flush_end: dev=1 */
/*57*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000005a0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88744.736984: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.736986: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.736987: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.736988: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.736989: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.736990: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.736990: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.736991: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88744.736992: v3d_mmu_flush_end: dev=1 */
/*58*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000005c0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88744.748045: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.748047: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.748049: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.748049: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.748050: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.748051: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.748051: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.748052: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88744.748053: v3d_mmu_flush_end: dev=1 */
/*59*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000005e0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88744.762448: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.762450: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.762451: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.762453: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.762453: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.762454: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.762455: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.762456: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88744.762457: v3d_mmu_flush_end: dev=1 */
/*60*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000600/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88744.776556: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.776558: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.776559: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.776560: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.776561: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.776562: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.776562: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.776563: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88744.776565: v3d_mmu_flush_end: dev=1 */
/*61*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000620/*page*/, 0x00000800/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88744.789506: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.789509: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.789510: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.789511: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.789511: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.789513: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.789514: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88744.789514: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88744.789515: v3d_mmu_flush_end: dev=1 */
/* idle long delay = 0.5956100000039442 */
/*62*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000e20/*page*/, 0x00004800/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88745.385539: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.385542: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.385543: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.385544: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.385545: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.385545: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.385547: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.385547: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88745.385549: v3d_mmu_flush_end: dev=1 */
/* idle long delay = 0.37834100000327453 */
/*63*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00005620/*page*/, 0x00002000/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88745.764078: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.764081: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.764082: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.764083: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.764084: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.764085: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.764086: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.764086: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88745.764087: v3d_mmu_flush_end: dev=1 */
/* idle long delay = 0.0983189999969909 */
/*64*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00007620/*page*/, 0x00000800/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88745.862457: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.862459: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.862460: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.862461: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.862462: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.862462: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.862463: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.862464: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88745.862465: v3d_mmu_flush_end: dev=1 */
/*        benchncnn-10678   [003] .... 88745.873830: v3d_submit_cl_ioctl: dev=1, RCL 0x00140000..0x00140038 */
/*65*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000030c/*offset*/, 0x00000000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_PTB_BPOS" },
/*66*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*67*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*          v3d_bin-10644   [001] .... 88745.873930: v3d_submit_cl: dev=1, BCL, seqno=2, 0x00060000..0x0006000e */
/*68*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "bcl_0002"/*tag*/ } },
/*69*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000170/*offset*/, 0x00080000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CLE_CT0QMA" },
/*70*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000174/*offset*/, 0x00083000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CLE_CT0QMS" },
/*71*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000015c/*offset*/, 0x00120002/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CLE_CT0QTS" },
/*72*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000160/*offset*/, 0x00060000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CLE_CT0QBA" },
/*73*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000168/*offset*/, 0x0006000e/*val*/, 0/*core*/ }, -1/*irq_bcl*/, "V3D_CLE_CT0QEA" },
/* (skipped)           <idle>-0       [000] d.h1 88745.875656: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000002 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 88745.875658: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000002 core=0 */
/*           <idle>-0       [000] d.h1 88745.875660: v3d_bcl_irq: dev=1, seqno=2 irq_delay:1.73 ms*/
/*74*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*75*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*       v3d_render-10645   [000] .... 88745.875689: v3d_submit_cl: dev=1, RCL, seqno=2, 0x00140000..0x00140038 */
/*76*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "rcl_0002"/*tag*/ } },
/*77*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000164/*offset*/, 0x00140000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CLE_CT1QBA" },
/*78*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000016c/*offset*/, 0x00140038/*val*/, 0/*core*/ }, -2/*irq_rcl*/, "V3D_CLE_CT1QEA" },
/* (skipped)       v3d_render-10645   [000] d.h1 88745.877379: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000001 core=0 */
/* (skipped)       v3d_render-10645   [000] d.h1 88745.877380: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000001 core=0 */
/*       v3d_render-10645   [000] d.h1 88745.877381: v3d_rcl_irq: dev=1, seqno=2 irq_delay:1.69 ms*/
/*79*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00007e20/*page*/, 0x00000097/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88745.878389: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.878391: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.878391: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.878392: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.878393: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.878394: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.878395: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.878396: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88745.878397: v3d_mmu_flush_end: dev=1 */
/*80*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00007ec0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88745.891377: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.891380: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.891381: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.891382: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.891382: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.891383: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.891384: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.891385: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88745.891386: v3d_mmu_flush_end: dev=1 */
/*81*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00007ee0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88745.907177: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.907179: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.907180: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.907181: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.907182: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.907182: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.907183: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.907184: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88745.907185: v3d_mmu_flush_end: dev=1 */
/*82*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00007f00/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88745.929414: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.929416: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.929418: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.929421: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.929422: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.929422: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.929423: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.929424: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88745.929425: v3d_mmu_flush_end: dev=1 */
/*83*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00007f20/*page*/, 0x00001000/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88745.953291: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953294: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953295: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953296: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953297: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953297: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953298: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953299: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88745.953300: v3d_mmu_flush_end: dev=1 */
/*84*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00008f20/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88745.953490: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953491: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953492: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953493: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953493: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953494: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953495: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953495: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88745.953496: v3d_mmu_flush_end: dev=1 */
/*85*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00008f40/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88745.953576: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953576: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953577: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953578: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953578: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953578: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953579: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953580: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88745.953580: v3d_mmu_flush_end: dev=1 */
/*86*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00008f60/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88745.953710: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953710: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953711: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953711: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953712: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953712: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953713: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953714: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88745.953714: v3d_mmu_flush_end: dev=1 */
/*87*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00008f80/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88745.953779: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953780: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953780: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953781: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953781: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953782: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953782: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953783: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88745.953783: v3d_mmu_flush_end: dev=1 */
/*88*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00008fa0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88745.953839: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953840: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953840: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953841: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953841: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953842: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953842: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953843: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88745.953844: v3d_mmu_flush_end: dev=1 */
/*89*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00008fc0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88745.953919: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953919: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953920: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953920: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953921: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953921: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953922: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.953923: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88745.953923: v3d_mmu_flush_end: dev=1 */
/*90*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00008fe0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88745.953999: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954000: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954000: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954001: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954001: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954002: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954003: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954003: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88745.954004: v3d_mmu_flush_end: dev=1 */
/*91*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009000/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88745.954068: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954069: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954070: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954070: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954071: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954071: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954072: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954072: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88745.954073: v3d_mmu_flush_end: dev=1 */
/*92*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009020/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88745.954132: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954133: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954134: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954134: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954135: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954136: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954136: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954137: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88745.954137: v3d_mmu_flush_end: dev=1 */
/*93*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009040/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88745.954199: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954199: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954200: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954200: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954201: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954201: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954202: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954203: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88745.954203: v3d_mmu_flush_end: dev=1 */
/*94*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009060/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88745.954264: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954265: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954265: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954266: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954266: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954267: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954267: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954268: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88745.954268: v3d_mmu_flush_end: dev=1 */
/*95*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009080/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88745.954330: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954331: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954331: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954332: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954332: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954333: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954333: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954334: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88745.954334: v3d_mmu_flush_end: dev=1 */
/*96*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000090a0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88745.954399: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954400: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954400: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954401: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954402: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954402: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954403: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954404: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88745.954406: v3d_mmu_flush_end: dev=1 */
/*97*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000090c0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88745.954468: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954469: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954470: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954470: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954471: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954471: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954472: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954472: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88745.954473: v3d_mmu_flush_end: dev=1 */
/*98*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000090e0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88745.954533: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954534: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954535: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954535: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954536: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954536: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954537: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954537: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88745.954538: v3d_mmu_flush_end: dev=1 */
/*99*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009100/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88745.954595: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954595: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954596: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954596: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954597: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954597: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954598: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954599: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88745.954599: v3d_mmu_flush_end: dev=1 */
/*100*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009120/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88745.954665: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954666: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954667: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954667: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954667: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954668: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954669: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954669: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88745.954670: v3d_mmu_flush_end: dev=1 */
/*101*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009140/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88745.954730: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954731: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954732: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954732: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954733: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954733: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954734: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954735: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88745.954735: v3d_mmu_flush_end: dev=1 */
/*102*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009160/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88745.954794: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954795: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954796: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954796: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954797: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954797: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954798: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954799: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88745.954799: v3d_mmu_flush_end: dev=1 */
/*103*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009180/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88745.954860: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954861: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954862: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954862: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954863: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954863: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954864: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954864: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88745.954865: v3d_mmu_flush_end: dev=1 */
/*104*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000091a0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88745.954925: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954926: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954926: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954927: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954927: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954928: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954928: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.954929: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88745.954929: v3d_mmu_flush_end: dev=1 */
/*105*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000091c0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88745.955002: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955003: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955003: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955004: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955004: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955005: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955005: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955006: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88745.955006: v3d_mmu_flush_end: dev=1 */
/*106*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000091e0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88745.955068: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955069: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955070: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955070: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955071: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955071: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955072: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955073: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88745.955073: v3d_mmu_flush_end: dev=1 */
/*107*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009200/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88745.955128: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955129: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955129: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955130: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955130: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955131: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955131: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955132: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88745.955133: v3d_mmu_flush_end: dev=1 */
/*108*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009220/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88745.955190: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955191: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955192: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955192: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955193: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955193: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955194: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955195: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88745.955195: v3d_mmu_flush_end: dev=1 */
/*109*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009240/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88745.955255: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955256: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955256: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955257: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955257: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955258: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955258: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955259: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88745.955260: v3d_mmu_flush_end: dev=1 */
/*110*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009260/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88745.955322: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955323: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955324: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955324: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955325: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955325: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955326: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955327: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88745.955327: v3d_mmu_flush_end: dev=1 */
/*111*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009280/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88745.955386: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955387: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955388: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955388: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955390: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955390: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955391: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955392: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88745.955392: v3d_mmu_flush_end: dev=1 */
/*112*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000092a0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88745.955454: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955455: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955455: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955456: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955456: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955457: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955457: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955458: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88745.955458: v3d_mmu_flush_end: dev=1 */
/*113*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000092c0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88745.955516: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955516: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955517: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955518: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955518: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955519: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955519: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.955520: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88745.955521: v3d_mmu_flush_end: dev=1 */
/*114*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000092e0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88745.969801: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.969803: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.969804: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.969805: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.969806: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.969807: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.969807: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.969808: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88745.969809: v3d_mmu_flush_end: dev=1 */
/*115*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009300/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88745.985545: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.985547: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.985548: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.985549: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.985550: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.985550: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.985551: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88745.985552: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88745.985553: v3d_mmu_flush_end: dev=1 */
/*116*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009320/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88746.003219: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.003221: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.003222: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.003223: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.003224: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.003224: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.003225: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.003226: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88746.003227: v3d_mmu_flush_end: dev=1 */
/*117*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009340/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88746.003427: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.003428: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.003429: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.003430: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.003430: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.003431: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.003431: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.003432: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88746.003433: v3d_mmu_flush_end: dev=1 */
/*118*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009360/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88746.003540: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.003541: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.003541: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.003542: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.003542: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.003543: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.003543: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.003544: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88746.003544: v3d_mmu_flush_end: dev=1 */
/*119*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009380/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88746.003608: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.003609: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.003610: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.003610: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.003611: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.003611: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.003612: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.003613: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88746.003613: v3d_mmu_flush_end: dev=1 */
/*120*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000093a0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88746.003688: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.003689: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.003689: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.003690: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.003690: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.003691: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.003691: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.003692: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88746.003692: v3d_mmu_flush_end: dev=1 */
/*121*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000093c0/*page*/, 0x00000083/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88746.004533: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.004534: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.004535: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.004536: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.004536: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.004537: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.004538: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.004538: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88746.004539: v3d_mmu_flush_end: dev=1 */
/*122*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009460/*page*/, 0x00000003/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88746.004799: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.004800: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.004801: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.004801: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.004802: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.004802: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.004803: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.004803: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88746.004804: v3d_mmu_flush_end: dev=1 */
/*123*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009480/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88746.004968: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.004969: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.004970: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.004971: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.004971: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.004971: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.004972: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.004973: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88746.004973: v3d_mmu_flush_end: dev=1 */
/*124*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000094a0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88746.005044: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005045: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005045: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005046: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005046: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005047: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005048: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005048: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88746.005049: v3d_mmu_flush_end: dev=1 */
/*125*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000094c0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88746.005117: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005117: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005118: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005119: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005119: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005120: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005121: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005121: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88746.005122: v3d_mmu_flush_end: dev=1 */
/*126*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000094e0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88746.005325: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005326: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005327: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005327: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005328: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005328: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005329: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005329: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88746.005330: v3d_mmu_flush_end: dev=1 */
/*127*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009500/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88746.005473: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005473: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005474: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005474: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005475: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005476: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005476: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005477: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88746.005477: v3d_mmu_flush_end: dev=1 */
/*128*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009520/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88746.005541: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005542: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005543: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005543: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005544: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005544: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005545: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005546: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88746.005546: v3d_mmu_flush_end: dev=1 */
/*129*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009540/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88746.005726: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005727: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005728: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005728: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005729: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005730: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005731: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005731: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88746.005732: v3d_mmu_flush_end: dev=1 */
/*130*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009560/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88746.005885: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005885: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005886: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005886: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005887: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005887: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005888: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.005889: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88746.005889: v3d_mmu_flush_end: dev=1 */
/*131*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009580/*page*/, 0x00000083/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88746.006623: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.006624: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.006625: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.006626: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.006626: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.006627: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.006627: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.006628: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88746.006629: v3d_mmu_flush_end: dev=1 */
/*132*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009620/*page*/, 0x00000002/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88746.006711: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.006712: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.006712: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.006713: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.006713: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.006714: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.006715: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.006715: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88746.006716: v3d_mmu_flush_end: dev=1 */
/*133*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009640/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88746.006761: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.006761: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.006762: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.006763: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.006763: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.006764: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.006764: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.006765: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88746.006766: v3d_mmu_flush_end: dev=1 */
/*134*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009660/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88746.006934: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.006935: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.006936: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.006936: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.006937: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.006937: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.006938: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.006938: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88746.006939: v3d_mmu_flush_end: dev=1 */
/*135*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009680/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88746.007085: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007086: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007087: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007087: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007088: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007088: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007089: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007089: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88746.007090: v3d_mmu_flush_end: dev=1 */
/*136*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000096a0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88746.007149: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007149: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007150: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007151: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007151: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007152: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007152: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007153: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88746.007153: v3d_mmu_flush_end: dev=1 */
/*137*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000096c0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88746.007292: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007293: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007293: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007294: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007295: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007295: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007296: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007296: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88746.007297: v3d_mmu_flush_end: dev=1 */
/*138*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000096e0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88746.007439: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007440: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007441: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007441: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007442: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007442: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007443: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007444: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88746.007444: v3d_mmu_flush_end: dev=1 */
/*139*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009700/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88746.007508: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007508: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007509: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007510: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007510: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007510: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007511: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007512: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88746.007512: v3d_mmu_flush_end: dev=1 */
/*140*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009720/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88746.007660: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007661: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007662: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007662: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007664: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007665: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007665: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007666: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88746.007666: v3d_mmu_flush_end: dev=1 */
/*141*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009740/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88746.007814: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007814: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007815: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007815: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007816: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007816: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007817: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007818: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88746.007818: v3d_mmu_flush_end: dev=1 */
/*142*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009760/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88746.007889: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007890: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007891: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007891: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007892: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007892: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007893: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.007894: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88746.007894: v3d_mmu_flush_end: dev=1 */
/*143*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009780/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88746.008044: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008044: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008045: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008045: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008046: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008046: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008047: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008048: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88746.008048: v3d_mmu_flush_end: dev=1 */
/*144*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000097a0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88746.008189: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008190: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008191: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008191: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008192: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008192: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008193: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008193: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88746.008194: v3d_mmu_flush_end: dev=1 */
/*145*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000097c0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88746.008256: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008257: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008257: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008258: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008258: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008259: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008259: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008260: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88746.008260: v3d_mmu_flush_end: dev=1 */
/*146*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000097e0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88746.008473: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008474: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008475: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008475: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008476: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008476: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008477: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008478: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88746.008478: v3d_mmu_flush_end: dev=1 */
/*147*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009800/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88746.008640: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008641: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008641: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008642: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008642: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008643: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008643: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008644: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88746.008645: v3d_mmu_flush_end: dev=1 */
/*148*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009820/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88746.008710: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008710: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008711: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008711: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008712: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008712: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008713: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008714: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88746.008714: v3d_mmu_flush_end: dev=1 */
/*149*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009840/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88746.008896: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008897: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008898: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008898: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008899: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008899: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008900: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.008900: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88746.008901: v3d_mmu_flush_end: dev=1 */
/*150*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009860/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88746.009051: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.009052: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.009053: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.009054: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.009054: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.009055: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.009055: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.009056: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88746.009057: v3d_mmu_flush_end: dev=1 */
/*151*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009880/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88746.009117: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.009118: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.009118: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.009119: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.009120: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.009120: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.009121: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.009121: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88746.009122: v3d_mmu_flush_end: dev=1 */
/*152*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000098a0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88746.009294: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.009295: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.009296: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.009296: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.009297: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.009297: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.009298: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.009299: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88746.009299: v3d_mmu_flush_end: dev=1 */
/*153*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000098c0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88746.009447: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.009448: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.009448: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.009449: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.009449: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.009450: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.009450: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.009451: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88746.009451: v3d_mmu_flush_end: dev=1 */
/*154*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000098e0/*page*/, 0x00000083/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88746.010198: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010199: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010200: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010201: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010201: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010202: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010203: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010204: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88746.010205: v3d_mmu_flush_end: dev=1 */
/*155*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009980/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88746.010282: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010282: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010283: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010283: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010284: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010284: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010285: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010286: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88746.010286: v3d_mmu_flush_end: dev=1 */
/*156*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000099a0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88746.010334: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010335: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010336: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010336: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010337: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010337: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010338: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010339: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88746.010339: v3d_mmu_flush_end: dev=1 */
/*157*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000099c0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88746.010563: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010564: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010565: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010565: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010566: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010567: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010567: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010568: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88746.010568: v3d_mmu_flush_end: dev=1 */
/*158*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000099e0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88746.010714: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010715: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010716: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010716: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010717: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010717: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010718: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010718: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88746.010719: v3d_mmu_flush_end: dev=1 */
/*159*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009a00/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88746.010785: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010786: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010786: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010787: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010787: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010788: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010788: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010789: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88746.010789: v3d_mmu_flush_end: dev=1 */
/*160*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009a20/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88746.010953: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010953: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010954: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010954: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010955: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010955: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010956: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.010957: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88746.010957: v3d_mmu_flush_end: dev=1 */
/*161*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009a40/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88746.011092: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.011093: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.011094: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.011094: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.011095: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.011095: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.011096: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.011096: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88746.011097: v3d_mmu_flush_end: dev=1 */
/*162*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009a60/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88746.011161: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.011162: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.011162: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.011163: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.011163: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.011164: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.011165: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88746.011165: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88746.011166: v3d_mmu_flush_end: dev=1 */
/*        benchncnn-10678   [003] .... 88746.011291: v3d_submit_csd_ioctl: dev=1, CFG5 0x07ec0005, CFG6 0x09360000 */
/*        benchncnn-10678   [003] .... 88746.011340: v3d_submit_csd_ioctl: dev=1, CFG5 0x001a0005, CFG6 0x09380000 */
/*        benchncnn-10678   [003] .... 88746.011358: v3d_submit_cl_ioctl: dev=1, RCL 0x09480000..0x094800d4 */
/*        benchncnn-10678   [003] .... 88746.011382: v3d_submit_csd_ioctl: dev=1, CFG5 0x001c0005, CFG6 0x094c0000 */
/*        benchncnn-10678   [003] .... 88746.011395: v3d_submit_csd_ioctl: dev=1, CFG5 0x001e0005, CFG6 0x094e0000 */
/*        benchncnn-10678   [003] .... 88746.011406: v3d_submit_csd_ioctl: dev=1, CFG5 0x00220005, CFG6 0x09500000 */
/*        benchncnn-10678   [003] .... 88746.011419: v3d_submit_csd_ioctl: dev=1, CFG5 0x00240005, CFG6 0x09520000 */
/*        benchncnn-10678   [003] .... 88746.011432: v3d_submit_csd_ioctl: dev=1, CFG5 0x00260005, CFG6 0x09540000 */
/*        benchncnn-10678   [003] .... 88746.011445: v3d_submit_cl_ioctl: dev=1, RCL 0x09640000..0x096400a4 */
/*163*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*164*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*165*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000030c/*offset*/, 0x00000000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_PTB_BPOS" },
/*166*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*167*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*          v3d_bin-10644   [002] .... 88746.011461: v3d_submit_cl: dev=1, BCL, seqno=3, 0x093a0000..0x093a000e */
/*        benchncnn-10678   [003] .... 88746.011461: v3d_submit_csd_ioctl: dev=1, CFG5 0x00280005, CFG6 0x09680000 */
/*        benchncnn-10678   [003] .... 88746.011477: v3d_submit_csd_ioctl: dev=1, CFG5 0x002a0005, CFG6 0x096a0000 */
/*        benchncnn-10678   [003] .... 88746.011490: v3d_submit_csd_ioctl: dev=1, CFG5 0x002e0005, CFG6 0x096c0000 */
/*        benchncnn-10678   [003] .... 88746.011514: v3d_submit_csd_ioctl: dev=1, CFG5 0x00300005, CFG6 0x096e0000 */
/*        benchncnn-10678   [003] .... 88746.011526: v3d_submit_csd_ioctl: dev=1, CFG5 0x00320005, CFG6 0x09700000 */
/*        benchncnn-10678   [003] .... 88746.011537: v3d_submit_csd_ioctl: dev=1, CFG5 0x00380004, CFG6 0x09720000 */
/*        benchncnn-10678   [003] .... 88746.011548: v3d_submit_csd_ioctl: dev=1, CFG5 0x003a0004, CFG6 0x09740000 */
/*        benchncnn-10678   [003] .... 88746.011564: v3d_submit_csd_ioctl: dev=1, CFG5 0x003c0004, CFG6 0x09760000 */
/*        benchncnn-10678   [003] .... 88746.011577: v3d_submit_csd_ioctl: dev=1, CFG5 0x00340005, CFG6 0x09780000 */
/*        benchncnn-10678   [003] .... 88746.011589: v3d_submit_csd_ioctl: dev=1, CFG5 0x003e0005, CFG6 0x097a0000 */
/*        benchncnn-10678   [003] .... 88746.011601: v3d_submit_csd_ioctl: dev=1, CFG5 0x00400005, CFG6 0x097c0000 */
/*        benchncnn-10678   [003] .... 88746.011612: v3d_submit_csd_ioctl: dev=1, CFG5 0x003e0005, CFG6 0x097e0000 */
/*        benchncnn-10678   [003] .... 88746.011629: v3d_submit_csd_ioctl: dev=1, CFG5 0x00420005, CFG6 0x09800000 */
/*        benchncnn-10678   [003] .... 88746.011641: v3d_submit_csd_ioctl: dev=1, CFG5 0x00460005, CFG6 0x09820000 */
/*        benchncnn-10678   [003] .... 88746.011652: v3d_submit_csd_ioctl: dev=1, CFG5 0x00480004, CFG6 0x09840000 */
/*        benchncnn-10678   [003] .... 88746.011664: v3d_submit_csd_ioctl: dev=1, CFG5 0x004a0005, CFG6 0x09860000 */
/*        benchncnn-10678   [003] .... 88746.011679: v3d_submit_csd_ioctl: dev=1, CFG5 0x004e0005, CFG6 0x09880000 */
/*        benchncnn-10678   [003] .... 88746.011691: v3d_submit_csd_ioctl: dev=1, CFG5 0x00500005, CFG6 0x098a0000 */
/*        benchncnn-10678   [003] .... 88746.011704: v3d_submit_cl_ioctl: dev=1, RCL 0x099a0000..0x099a005f */
/*        benchncnn-10678   [003] .... 88746.011717: v3d_submit_csd_ioctl: dev=1, CFG5 0x00560005, CFG6 0x099e0000 */
/*        benchncnn-10678   [003] .... 88746.011731: v3d_submit_csd_ioctl: dev=1, CFG5 0x005e0005, CFG6 0x09a00000 */
/*168*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0001"/*tag*/ } },
/*        benchncnn-10678   [003] .... 88746.011742: v3d_submit_csd_ioctl: dev=1, CFG5 0x00580005, CFG6 0x09a20000 */
/*        benchncnn-10678   [003] .... 88746.011754: v3d_submit_csd_ioctl: dev=1, CFG5 0x00600005, CFG6 0x09a40000 */
/*          v3d_csd-10647   [001] .... 88746.011756: v3d_submit_csd: dev=1, seqno=1 */
/*169*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00390000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*170*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*171*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*172*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x000032c3/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*173*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x07ec0005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*174*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x09360000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*175*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00390000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/*        benchncnn-10678   [003] .... 88746.011764: v3d_submit_csd_ioctl: dev=1, CFG5 0x092e0004, CFG6 0x09a60000 */
/*176*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "bcl_0003"/*tag*/ } },
/*177*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000170/*offset*/, 0x093c0000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CLE_CT0QMA" },
/*178*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000174/*offset*/, 0x00083000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CLE_CT0QMS" },
/*179*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000015c/*offset*/, 0x09460002/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CLE_CT0QTS" },
/*180*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000160/*offset*/, 0x093a0000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CLE_CT0QBA" },
/*181*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000168/*offset*/, 0x093a000e/*val*/, 0/*core*/ }, -1/*irq_bcl*/, "V3D_CLE_CT0QEA" },
/* (skipped)           <idle>-0       [000] d.h1 88746.015804: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000002 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 88746.015806: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000002 core=0 */
/*           <idle>-0       [000] d.h1 88746.015808: v3d_bcl_irq: dev=1, seqno=3 irq_delay:4.35 ms*/
/*182*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000030c/*offset*/, 0x00000000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_PTB_BPOS" },
/*183*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*184*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*          v3d_bin-10644   [002] .... 88746.015860: v3d_submit_cl: dev=1, BCL, seqno=4, 0x09560000..0x0956000e */
/* (skipped)           <idle>-0       [000] d.h1 88746.016644: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 88746.016647: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 88746.016648: v3d_csd_irq: dev=1, seqno=1 irq_delay:4.89 ms*/
/*  v3d_cache_clean-10648   [000] .... 88746.016678: v3d_cache_clean_begin: dev=1 */
/*185*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*186*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.016681: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*187*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*188*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.016685: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.016716: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10648   [000] .... 88746.016718: v3d_cache_clean_end: dev=1 */
/*189*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*190*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*191*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "bcl_0004"/*tag*/ } },
/*192*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000170/*offset*/, 0x09580000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CLE_CT0QMA" },
/*193*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000174/*offset*/, 0x00083000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CLE_CT0QMS" },
/*194*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000015c/*offset*/, 0x09620002/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CLE_CT0QTS" },
/*195*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000160/*offset*/, 0x09560000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CLE_CT0QBA" },
/*196*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000168/*offset*/, 0x0956000e/*val*/, 0/*core*/ }, -1/*irq_bcl*/, "V3D_CLE_CT0QEA" },
/* (skipped)           <idle>-0       [000] d.h1 88746.019934: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000002 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 88746.019935: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000002 core=0 */
/*           <idle>-0       [000] d.h1 88746.019937: v3d_bcl_irq: dev=1, seqno=4 irq_delay:4.08 ms*/
/*197*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000030c/*offset*/, 0x00000000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_PTB_BPOS" },
/*198*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*199*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*          v3d_bin-10644   [002] .... 88746.019957: v3d_submit_cl: dev=1, BCL, seqno=5, 0x098c0000..0x098c000e */
/*200*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0002"/*tag*/ } },
/*          v3d_csd-10647   [001] .... 88746.020090: v3d_submit_csd: dev=1, seqno=2 */
/*201*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00070000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*202*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00060000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*203*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x0000f100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*204*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x0000125f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*205*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x001a0005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*206*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x09380000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*207*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00070000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/*208*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "bcl_0005"/*tag*/ } },
/*209*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000170/*offset*/, 0x098e0000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CLE_CT0QMA" },
/*210*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000174/*offset*/, 0x00083000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CLE_CT0QMS" },
/*211*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000015c/*offset*/, 0x09980002/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CLE_CT0QTS" },
/*212*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000160/*offset*/, 0x098c0000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CLE_CT0QBA" },
/*213*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000168/*offset*/, 0x098c000e/*val*/, 0/*core*/ }, -1/*irq_bcl*/, "V3D_CLE_CT0QEA" },
/* (skipped)           <idle>-0       [000] d.h1 88746.024149: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000002 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 88746.024151: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000002 core=0 */
/*           <idle>-0       [000] d.h1 88746.024152: v3d_bcl_irq: dev=1, seqno=5 irq_delay:4.20 ms*/
/* busy B/R/C=001 $/MMU=00 long delay = 0.08913500000198837 */
/* (skipped)           <idle>-0       [000] d.h1 88746.113287: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 88746.113290: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 88746.113291: v3d_csd_irq: dev=1, seqno=2 irq_delay:93.20 ms*/
/*  v3d_cache_clean-10648   [000] .... 88746.113321: v3d_cache_clean_begin: dev=1 */
/*214*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*215*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.113324: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*216*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*217*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.113327: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.113360: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10648   [000] .... 88746.113362: v3d_cache_clean_end: dev=1 */
/*218*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*219*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*       v3d_render-10645   [001] .... 88746.113396: v3d_submit_cl: dev=1, RCL, seqno=3, 0x09480000..0x094800d4 */
/*220*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "rcl_0003"/*tag*/ } },
/*221*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000164/*offset*/, 0x09480000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CLE_CT1QBA" },
/*222*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000016c/*offset*/, 0x094800d4/*val*/, 0/*core*/ }, -2/*irq_rcl*/, "V3D_CLE_CT1QEA" },
/* (skipped)           <idle>-0       [000] d.h1 88746.117572: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000001 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 88746.117573: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000001 core=0 */
/*           <idle>-0       [000] d.h1 88746.117574: v3d_rcl_irq: dev=1, seqno=3 irq_delay:4.18 ms*/
/*223*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*224*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*225*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0003"/*tag*/ } },
/*          v3d_csd-10647   [001] .... 88746.118004: v3d_submit_csd: dev=1, seqno=3 */
/*226*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x000e0000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*227*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00190000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*228*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*229*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x00004c8f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*230*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x001c0005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*231*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x094c0000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*232*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x000e0000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 88746.125515: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 88746.125517: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 88746.125519: v3d_csd_irq: dev=1, seqno=3 irq_delay:7.51 ms*/
/*  v3d_cache_clean-10648   [000] .... 88746.125542: v3d_cache_clean_begin: dev=1 */
/*233*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*234*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.125545: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*235*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*236*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.125548: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.125577: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.125625: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10648   [000] .... 88746.125626: v3d_cache_clean_end: dev=1 */
/*237*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*238*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*239*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0004"/*tag*/ } },
/*          v3d_csd-10647   [001] .... 88746.125871: v3d_submit_csd: dev=1, seqno=4 */
/*240*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x000e0000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*241*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00060000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*242*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*243*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x0000125f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*244*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x001e0005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*245*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x094e0000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*246*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x000e0000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 88746.131090: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 88746.131092: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 88746.131093: v3d_csd_irq: dev=1, seqno=4 irq_delay:5.22 ms*/
/*  v3d_cache_clean-10648   [000] .... 88746.131114: v3d_cache_clean_begin: dev=1 */
/*247*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*248*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.131117: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*249*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*250*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.131119: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.131149: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10648   [000] .... 88746.131150: v3d_cache_clean_end: dev=1 */
/*251*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*252*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*253*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0005"/*tag*/ } },
/*          v3d_csd-10647   [001] .... 88746.131373: v3d_submit_csd: dev=1, seqno=5 */
/*254*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00070000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*255*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00060000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*256*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*257*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x00000497/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*258*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00220005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*259*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x09500000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*260*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00070000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 88746.133490: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 88746.133492: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 88746.133492: v3d_csd_irq: dev=1, seqno=5 irq_delay:2.12 ms*/
/*  v3d_cache_clean-10648   [000] .... 88746.133512: v3d_cache_clean_begin: dev=1 */
/*261*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*262*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.133514: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*263*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*264*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.133517: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.133546: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10648   [000] .... 88746.133547: v3d_cache_clean_end: dev=1 */
/*265*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*266*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*267*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0006"/*tag*/ } },
/*          v3d_csd-10647   [001] .... 88746.133773: v3d_submit_csd: dev=1, seqno=6 */
/*268*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00080000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*269*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00060000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*270*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*271*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x000005ff/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*272*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00240005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*273*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x09520000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*274*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00080000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 88746.134430: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 88746.134431: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 88746.134432: v3d_csd_irq: dev=1, seqno=6 irq_delay:0.66 ms*/
/*  v3d_cache_clean-10648   [000] .... 88746.134446: v3d_cache_clean_begin: dev=1 */
/*275*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*276*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.134448: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*277*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*278*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.134450: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.134478: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.134526: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10648   [000] .... 88746.134527: v3d_cache_clean_end: dev=1 */
/*279*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*280*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*281*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0007"/*tag*/ } },
/*          v3d_csd-10647   [001] .... 88746.134698: v3d_submit_csd: dev=1, seqno=7 */
/*282*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00040000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*283*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00100000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*284*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x0000f100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*285*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x00000fff/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*286*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00260005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*287*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x09540000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*288*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00040000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* busy B/R/C=001 $/MMU=00 long delay = 0.12774799999897368 */
/* (skipped)           <idle>-0       [000] d.h1 88746.262451: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 88746.262453: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 88746.262454: v3d_csd_irq: dev=1, seqno=7 irq_delay:127.76 ms*/
/*  v3d_cache_clean-10648   [000] .... 88746.262482: v3d_cache_clean_begin: dev=1 */
/*289*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*290*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.262485: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*291*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*292*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.262488: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.262519: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10648   [000] .... 88746.262520: v3d_cache_clean_end: dev=1 */
/*293*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*294*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*       v3d_render-10645   [001] .... 88746.262552: v3d_submit_cl: dev=1, RCL, seqno=4, 0x09640000..0x096400a4 */
/*295*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "rcl_0004"/*tag*/ } },
/*296*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000164/*offset*/, 0x09640000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CLE_CT1QBA" },
/*297*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000016c/*offset*/, 0x096400a4/*val*/, 0/*core*/ }, -2/*irq_rcl*/, "V3D_CLE_CT1QEA" },
/* (skipped)           <idle>-0       [000] d.h1 88746.266570: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000001 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 88746.266571: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000001 core=0 */
/*           <idle>-0       [000] d.h1 88746.266572: v3d_rcl_irq: dev=1, seqno=4 irq_delay:4.02 ms*/
/*298*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*299*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*300*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0008"/*tag*/ } },
/*          v3d_csd-10647   [001] .... 88746.267011: v3d_submit_csd: dev=1, seqno=8 */
/*301*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00070000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*302*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00410000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*303*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*304*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x000031c3/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*305*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00280005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*306*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x09680000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*307*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00070000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 88746.271902: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 88746.271905: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 88746.271906: v3d_csd_irq: dev=1, seqno=8 irq_delay:4.89 ms*/
/*  v3d_cache_clean-10648   [000] .... 88746.271931: v3d_cache_clean_begin: dev=1 */
/*308*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*309*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.271934: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*310*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*311*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.271936: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.271970: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.272018: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10648   [000] .... 88746.272020: v3d_cache_clean_end: dev=1 */
/*312*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*313*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*314*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0009"/*tag*/ } },
/*          v3d_csd-10647   [001] .... 88746.272258: v3d_submit_csd: dev=1, seqno=9 */
/*315*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00070000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*316*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00100000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*317*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*318*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x00000c3f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*319*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x002a0005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*320*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x096a0000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*321*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00070000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 88746.275674: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 88746.275676: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 88746.275677: v3d_csd_irq: dev=1, seqno=9 irq_delay:3.42 ms*/
/*  v3d_cache_clean-10648   [000] .... 88746.275700: v3d_cache_clean_begin: dev=1 */
/*322*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*323*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.275702: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*324*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*325*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.275705: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.275735: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10648   [000] .... 88746.275736: v3d_cache_clean_end: dev=1 */
/*326*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*327*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*328*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0010"/*tag*/ } },
/*          v3d_csd-10647   [001] .... 88746.275967: v3d_submit_csd: dev=1, seqno=10 */
/*329*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00040000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*330*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00100000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*331*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*332*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x000003ff/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*333*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x002e0005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*334*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x096c0000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*335*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00040000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 88746.277788: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 88746.277790: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 88746.277791: v3d_csd_irq: dev=1, seqno=10 irq_delay:1.82 ms*/
/*  v3d_cache_clean-10648   [000] .... 88746.277813: v3d_cache_clean_begin: dev=1 */
/*336*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*337*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.277816: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*338*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*339*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.277818: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.277849: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10648   [000] .... 88746.277850: v3d_cache_clean_end: dev=1 */
/*340*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*341*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*342*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0011"/*tag*/ } },
/*          v3d_csd-10647   [001] .... 88746.278079: v3d_submit_csd: dev=1, seqno=11 */
/*343*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00040000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*344*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00100000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*345*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*346*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x000003ff/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*347*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00300005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*348*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x096e0000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*349*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00040000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 88746.278539: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 88746.278539: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 88746.278540: v3d_csd_irq: dev=1, seqno=11 irq_delay:0.46 ms*/
/*  v3d_cache_clean-10648   [000] .... 88746.278556: v3d_cache_clean_begin: dev=1 */
/*350*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*351*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.278558: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*352*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*353*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.278560: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.278588: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10648   [000] .... 88746.278589: v3d_cache_clean_end: dev=1 */
/*354*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*355*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*356*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0012"/*tag*/ } },
/*          v3d_csd-10647   [001] .... 88746.278761: v3d_submit_csd: dev=1, seqno=12 */
/*357*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00040000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*358*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00100000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*359*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*360*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x000003ff/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*361*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00320005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*362*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x09700000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*363*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00040000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 88746.279196: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 88746.279197: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 88746.279198: v3d_csd_irq: dev=1, seqno=12 irq_delay:0.44 ms*/
/*  v3d_cache_clean-10648   [000] .... 88746.279213: v3d_cache_clean_begin: dev=1 */
/*364*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*365*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.279215: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*366*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*367*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.279217: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.279246: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10648   [000] .... 88746.279246: v3d_cache_clean_end: dev=1 */
/*368*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*369*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*370*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0013"/*tag*/ } },
/*          v3d_csd-10647   [001] .... 88746.279415: v3d_submit_csd: dev=1, seqno=13 */
/*371*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*372*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00400000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*373*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*374*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x000000ff/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*375*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00380004/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*376*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x09720000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*377*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00010000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 88746.279850: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 88746.279851: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 88746.279852: v3d_csd_irq: dev=1, seqno=13 irq_delay:0.44 ms*/
/*  v3d_cache_clean-10648   [000] .... 88746.279867: v3d_cache_clean_begin: dev=1 */
/*378*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*379*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.279872: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*380*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*381*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.279873: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.279902: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.279951: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10648   [000] .... 88746.279951: v3d_cache_clean_end: dev=1 */
/*382*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*383*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*384*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0014"/*tag*/ } },
/*          v3d_csd-10647   [001] .... 88746.280114: v3d_submit_csd: dev=1, seqno=14 */
/*385*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00040000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*386*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00180000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*387*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*388*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x000005ff/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*389*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x003a0004/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*390*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x09740000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*391*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00040000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* busy B/R/C=001 $/MMU=00 long delay = 0.053536999999778345 */
/* (skipped)           <idle>-0       [000] d.h1 88746.333655: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 88746.333658: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 88746.333659: v3d_csd_irq: dev=1, seqno=14 irq_delay:53.55 ms*/
/*  v3d_cache_clean-10648   [000] .... 88746.333686: v3d_cache_clean_begin: dev=1 */
/*392*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*393*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.333688: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*394*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*395*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.333691: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.333722: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10648   [000] .... 88746.333723: v3d_cache_clean_end: dev=1 */
/*396*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*397*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*398*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0015"/*tag*/ } },
/*          v3d_csd-10647   [001] .... 88746.333967: v3d_submit_csd: dev=1, seqno=15 */
/*399*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*400*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00600000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*401*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*402*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x0000017f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*403*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x003c0004/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*404*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x09760000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*405*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00010000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 88746.334608: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 88746.334609: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 88746.334610: v3d_csd_irq: dev=1, seqno=15 irq_delay:0.64 ms*/
/*  v3d_cache_clean-10648   [000] .... 88746.334626: v3d_cache_clean_begin: dev=1 */
/*406*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*407*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.334628: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*408*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*409*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.334629: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.334658: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10648   [000] .... 88746.334659: v3d_cache_clean_end: dev=1 */
/*410*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*411*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*412*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0016"/*tag*/ } },
/*          v3d_csd-10647   [001] .... 88746.334849: v3d_submit_csd: dev=1, seqno=16 */
/*413*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00040000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*414*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00180000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*415*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*416*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x000005ff/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*417*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00340005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*418*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x09780000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*419*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00040000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 88746.335385: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 88746.335386: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 88746.335386: v3d_csd_irq: dev=1, seqno=16 irq_delay:0.54 ms*/
/*  v3d_cache_clean-10648   [000] .... 88746.335402: v3d_cache_clean_begin: dev=1 */
/*420*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*421*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.335404: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*422*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*423*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.335405: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.335434: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10648   [000] .... 88746.335435: v3d_cache_clean_end: dev=1 */
/*424*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*425*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*426*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0017"/*tag*/ } },
/*          v3d_csd-10647   [001] .... 88746.335604: v3d_submit_csd: dev=1, seqno=17 */
/*427*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00040000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*428*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00180000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*429*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*430*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x000005ff/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*431*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x003e0005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*432*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x097a0000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*433*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00040000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] dNH2 88746.336292: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] dNH2 88746.336293: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] dNH2 88746.336293: v3d_csd_irq: dev=1, seqno=17 irq_delay:0.69 ms*/
/*  v3d_cache_clean-10648   [000] .... 88746.336316: v3d_cache_clean_begin: dev=1 */
/*434*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*435*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.336318: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*436*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*437*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.336319: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.336551: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10648   [000] .... 88746.336552: v3d_cache_clean_end: dev=1 */
/*438*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*439*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*440*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0018"/*tag*/ } },
/*          v3d_csd-10647   [001] .... 88746.336757: v3d_submit_csd: dev=1, seqno=18 */
/*441*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00020000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*442*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00180000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*443*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x0000f100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*444*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x000005ff/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*445*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00400005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*446*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x097c0000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*447*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00020000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* busy B/R/C=001 $/MMU=00 long delay = 0.09171399999468122 */
/* (skipped)           <idle>-0       [000] d.h1 88746.428475: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 88746.428478: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 88746.428479: v3d_csd_irq: dev=1, seqno=18 irq_delay:91.72 ms*/
/*  v3d_cache_clean-10648   [000] .... 88746.428505: v3d_cache_clean_begin: dev=1 */
/*448*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*449*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.428508: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*450*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*451*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.428510: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.428541: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10648   [000] .... 88746.428542: v3d_cache_clean_end: dev=1 */
/*452*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*453*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*454*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0019"/*tag*/ } },
/*          v3d_csd-10647   [001] .... 88746.428802: v3d_submit_csd: dev=1, seqno=19 */
/*455*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00040000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*456*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00180000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*457*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*458*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x000005ff/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*459*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x003e0005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*460*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x097e0000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*461*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00040000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 88746.429489: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 88746.429489: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 88746.429490: v3d_csd_irq: dev=1, seqno=19 irq_delay:0.69 ms*/
/*  v3d_cache_clean-10648   [000] .... 88746.429506: v3d_cache_clean_begin: dev=1 */
/*462*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*463*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.429508: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*464*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*465*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.429510: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.429539: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.429587: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10648   [000] .... 88746.429588: v3d_cache_clean_end: dev=1 */
/*466*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*467*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*468*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0020"/*tag*/ } },
/*          v3d_csd-10647   [001] .... 88746.429759: v3d_submit_csd: dev=1, seqno=20 */
/*469*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00020000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*470*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00100000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*471*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x0000f100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*472*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x000003ff/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*473*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00420005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*474*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x09800000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*475*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00020000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* busy B/R/C=001 $/MMU=00 long delay = 0.06298300001071766 */
/* (skipped)           <idle>-0       [000] d.h1 88746.492746: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 88746.492748: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 88746.492749: v3d_csd_irq: dev=1, seqno=20 irq_delay:62.99 ms*/
/*  v3d_cache_clean-10648   [000] .... 88746.492773: v3d_cache_clean_begin: dev=1 */
/*476*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*477*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.492776: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*478*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*479*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.492778: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.492809: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10648   [000] .... 88746.492810: v3d_cache_clean_end: dev=1 */
/*480*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*481*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*482*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0021"/*tag*/ } },
/*          v3d_csd-10647   [001] .... 88746.493078: v3d_submit_csd: dev=1, seqno=21 */
/*483*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00020000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*484*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00100000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*485*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*486*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x000000ff/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*487*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00460005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*488*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x09820000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*489*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00020000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 88746.493536: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 88746.493537: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 88746.493537: v3d_csd_irq: dev=1, seqno=21 irq_delay:0.46 ms*/
/*  v3d_cache_clean-10648   [000] .... 88746.493554: v3d_cache_clean_begin: dev=1 */
/*490*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*491*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.493556: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*492*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*493*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.493558: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.493586: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10648   [000] .... 88746.493587: v3d_cache_clean_end: dev=1 */
/*494*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*495*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*496*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0022"/*tag*/ } },
/*          v3d_csd-10647   [001] .... 88746.493794: v3d_submit_csd: dev=1, seqno=22 */
/*497*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*498*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*499*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*500*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x0000008f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*501*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00480004/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*502*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x09840000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*503*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00240000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 88746.494088: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 88746.494089: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 88746.494089: v3d_csd_irq: dev=1, seqno=22 irq_delay:0.30 ms*/
/*  v3d_cache_clean-10648   [000] .... 88746.494105: v3d_cache_clean_begin: dev=1 */
/*504*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*505*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.494107: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*506*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*507*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.494109: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.494137: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10648   [000] .... 88746.494138: v3d_cache_clean_end: dev=1 */
/*508*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*509*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*510*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0023"/*tag*/ } },
/*          v3d_csd-10647   [001] .... 88746.494320: v3d_submit_csd: dev=1, seqno=23 */
/*511*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*512*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*513*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*514*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x0000003f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*515*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x004a0005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*516*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x09860000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*517*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00100000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* busy B/R/C=001 $/MMU=00 long delay = 0.2897789999988163 */
/* (skipped)           <idle>-0       [000] d.h1 88746.784103: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 88746.784107: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 88746.784108: v3d_csd_irq: dev=1, seqno=23 irq_delay:289.79 ms*/
/*  v3d_cache_clean-10648   [000] .... 88746.784134: v3d_cache_clean_begin: dev=1 */
/*518*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*519*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.784137: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*520*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*521*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.784140: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.784170: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10648   [000] .... 88746.784172: v3d_cache_clean_end: dev=1 */
/*522*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*523*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*524*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0024"/*tag*/ } },
/*          v3d_csd-10647   [001] .... 88746.784479: v3d_submit_csd: dev=1, seqno=24 */
/*525*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*526*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*527*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*528*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x0000003f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*529*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x004e0005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*530*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x09880000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*531*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00100000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* busy B/R/C=001 $/MMU=00 long delay = 0.2116530000057537 */
/* (skipped)           <idle>-0       [000] d.h1 88746.996136: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 88746.996139: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 88746.996140: v3d_csd_irq: dev=1, seqno=24 irq_delay:211.66 ms*/
/*  v3d_cache_clean-10648   [000] .... 88746.996166: v3d_cache_clean_begin: dev=1 */
/*532*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*533*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.996169: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*534*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*535*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88746.996173: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10648   [000] .... 88746.996174: v3d_cache_clean_end: dev=1 */
/*536*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*537*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*538*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0025"/*tag*/ } },
/*          v3d_csd-10647   [001] .... 88746.996461: v3d_submit_csd: dev=1, seqno=25 */
/*539*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*540*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*541*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*542*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x0000000f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*543*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00500005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*544*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x098a0000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*545*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00040000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 88747.046022: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 88747.046024: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 88747.046026: v3d_csd_irq: dev=1, seqno=25 irq_delay:49.56 ms*/
/*  v3d_cache_clean-10648   [000] .... 88747.046051: v3d_cache_clean_begin: dev=1 */
/*546*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*547*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88747.046054: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*548*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*549*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [000] .... 88747.046056: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10648   [000] .... 88747.046087: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10648   [000] .... 88747.046088: v3d_cache_clean_end: dev=1 */
/*550*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*551*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*       v3d_render-10645   [001] .... 88747.046120: v3d_submit_cl: dev=1, RCL, seqno=5, 0x099a0000..0x099a005f */
/*552*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "rcl_0005"/*tag*/ } },
/*553*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000164/*offset*/, 0x099a0000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CLE_CT1QBA" },
/*554*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000016c/*offset*/, 0x099a005f/*val*/, 0/*core*/ }, -2/*irq_rcl*/, "V3D_CLE_CT1QEA" },
/* (skipped)           <idle>-0       [000] d.h1 88747.050257: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000001 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 88747.050258: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000001 core=0 */
/*           <idle>-0       [000] d.h1 88747.050259: v3d_rcl_irq: dev=1, seqno=5 irq_delay:4.14 ms*/
/*555*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*556*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*557*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0026"/*tag*/ } },
/*          v3d_csd-10647   [000] .... 88747.050787: v3d_submit_csd: dev=1, seqno=26 */
/*558*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*559*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*560*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00000101/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*561*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x00000000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*562*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00560005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*563*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x099e0000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*564*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00010000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 88747.050887: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 88747.050888: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 88747.050889: v3d_csd_irq: dev=1, seqno=26 irq_delay:0.10 ms*/
/*  v3d_cache_clean-10648   [001] .... 88747.050916: v3d_cache_clean_begin: dev=1 */
/*565*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*566*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [001] .... 88747.050919: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*567*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*568*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [001] .... 88747.050922: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10648   [001] .... 88747.050952: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10648   [001] .... 88747.050953: v3d_cache_clean_end: dev=1 */
/*569*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*570*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*571*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0027"/*tag*/ } },
/*          v3d_csd-10647   [000] .... 88747.051322: v3d_submit_csd: dev=1, seqno=27 */
/*572*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*573*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*574*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*575*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x0000000f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*576*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x005e0005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*577*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x09a00000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*578*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00040000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)          v3d_csd-10647   [000] d.h1 88747.051336: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)          v3d_csd-10647   [000] d.h1 88747.051336: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*          v3d_csd-10647   [000] d.h1 88747.051337: v3d_csd_irq: dev=1, seqno=27 irq_delay:0.01 ms*/
/*  v3d_cache_clean-10648   [001] .... 88747.051358: v3d_cache_clean_begin: dev=1 */
/*579*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*580*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [001] .... 88747.051361: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*581*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*582*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [001] .... 88747.051363: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10648   [001] .... 88747.051392: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10648   [001] .... 88747.051393: v3d_cache_clean_end: dev=1 */
/*583*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*584*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*585*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0028"/*tag*/ } },
/*          v3d_csd-10647   [000] .... 88747.051648: v3d_submit_csd: dev=1, seqno=28 */
/*586*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*587*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*588*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00000101/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*589*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x00000000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*590*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00580005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*591*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x09a20000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*592*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00010000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 88747.051746: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 88747.051747: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 88747.051748: v3d_csd_irq: dev=1, seqno=28 irq_delay:0.10 ms*/
/*  v3d_cache_clean-10648   [001] .... 88747.051807: v3d_cache_clean_begin: dev=1 */
/*593*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*594*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [001] .... 88747.051810: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*595*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*596*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [001] .... 88747.051812: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10648   [001] .... 88747.051842: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10648   [001] .... 88747.051843: v3d_cache_clean_end: dev=1 */
/*597*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*598*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*599*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0029"/*tag*/ } },
/*          v3d_csd-10647   [000] .... 88747.052115: v3d_submit_csd: dev=1, seqno=29 */
/*600*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*601*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*602*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*603*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x0000000f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*604*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00600005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*605*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x09a40000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*606*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00040000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)          v3d_csd-10647   [000] d.h1 88747.052129: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)          v3d_csd-10647   [000] d.h1 88747.052130: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*          v3d_csd-10647   [000] d.h1 88747.052130: v3d_csd_irq: dev=1, seqno=29 irq_delay:0.01 ms*/
/*  v3d_cache_clean-10648   [001] .... 88747.052275: v3d_cache_clean_begin: dev=1 */
/*607*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*608*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [001] .... 88747.052278: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*609*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*610*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [001] .... 88747.052279: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10648   [001] .... 88747.052319: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10648   [001] .... 88747.052320: v3d_cache_clean_end: dev=1 */
/*611*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*612*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*613*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0030"/*tag*/ } },
/*          v3d_csd-10647   [000] .... 88747.052623: v3d_submit_csd: dev=1, seqno=30 */
/*614*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*615*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*616*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*617*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x000000fb/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*618*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x092e0004/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*619*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x09a60000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*620*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x003f0000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)        in:imklog-423     [000] d.h. 88747.052771: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)        in:imklog-423     [000] d.h. 88747.052772: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*        in:imklog-423     [000] d.h. 88747.052773: v3d_csd_irq: dev=1, seqno=30 irq_delay:0.15 ms*/
/*  v3d_cache_clean-10648   [001] .... 88747.052793: v3d_cache_clean_begin: dev=1 */
/*621*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*622*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [001] .... 88747.052796: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*623*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*624*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10648   [001] .... 88747.052798: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10648   [001] .... 88747.052829: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10648   [001] .... 88747.052830: v3d_cache_clean_end: dev=1 */
/*625*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000620/*page*/, 0x00000800/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.099702: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.099704: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.099706: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.099707: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.099708: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.099708: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.099709: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.099710: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.099711: v3d_mmu_flush_end: dev=1 */
/*626*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000e20/*page*/, 0x00004800/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.110416: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.110419: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.110421: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.110421: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.110422: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.110423: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.110424: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.110424: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.110426: v3d_mmu_flush_end: dev=1 */
/*627*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00005620/*page*/, 0x00002000/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.160147: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.160150: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.160151: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.160152: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.160153: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.160153: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.160155: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.160155: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.160156: v3d_mmu_flush_end: dev=1 */
/*628*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00007620/*page*/, 0x00000800/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.182025: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.182027: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.182029: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.182030: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.182030: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.182031: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.182034: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.182036: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.182037: v3d_mmu_flush_end: dev=1 */
/*629*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00007f20/*page*/, 0x00001000/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.222933: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.222936: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.222938: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.222939: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.222939: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.222940: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.222941: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.222942: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.222943: v3d_mmu_flush_end: dev=1 */
/*630*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00008fa0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.233796: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.233797: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.233798: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.233799: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.233800: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.233800: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.233801: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.233802: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.233803: v3d_mmu_flush_end: dev=1 */
/*631*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00007e20/*page*/, 0x00000097/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.233904: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.233904: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.233905: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.233905: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.233906: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.233906: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.233907: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.233908: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.233908: v3d_mmu_flush_end: dev=1 */
/*632*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000020/*page*/, 0x00000004/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.239606: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.239609: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.239610: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.239611: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.239611: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.239612: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.239613: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.239614: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.239615: v3d_mmu_flush_end: dev=1 */
/*633*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000040/*page*/, 0x00000004/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.239698: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.239699: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.239699: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.239700: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.239700: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.239701: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.239701: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.239702: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.239703: v3d_mmu_flush_end: dev=1 */
/*634*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00008f20/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.243325: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243327: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243329: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243330: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243331: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243331: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243332: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243333: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.243334: v3d_mmu_flush_end: dev=1 */
/*635*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00008f40/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.243417: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243417: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243418: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243419: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243419: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243419: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243420: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243421: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.243421: v3d_mmu_flush_end: dev=1 */
/*636*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00008f60/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.243459: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243460: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243461: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243461: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243462: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243462: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243463: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243463: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.243464: v3d_mmu_flush_end: dev=1 */
/*637*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00008f80/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.243498: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243499: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243499: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243500: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243500: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243501: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243501: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243502: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.243502: v3d_mmu_flush_end: dev=1 */
/*638*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00008fc0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.243537: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243538: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243539: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243539: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243540: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243540: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243541: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243542: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.243542: v3d_mmu_flush_end: dev=1 */
/*639*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00008fe0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.243577: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243577: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243578: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243578: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243579: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243579: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243580: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243581: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.243581: v3d_mmu_flush_end: dev=1 */
/*640*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009000/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.243616: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243617: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243618: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243618: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243619: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243619: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243620: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243620: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.243621: v3d_mmu_flush_end: dev=1 */
/*641*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009020/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.243654: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243655: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243656: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243656: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243657: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243657: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243658: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243658: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.243659: v3d_mmu_flush_end: dev=1 */
/*642*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009040/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.243691: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243692: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243693: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243693: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243694: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243694: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243695: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243696: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.243696: v3d_mmu_flush_end: dev=1 */
/*643*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009060/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.243729: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243730: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243733: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243734: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243734: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243735: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243736: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243736: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.243737: v3d_mmu_flush_end: dev=1 */
/*644*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009080/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.243770: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243771: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243772: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243772: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243773: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243773: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243774: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243774: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.243775: v3d_mmu_flush_end: dev=1 */
/*645*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000090a0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.243808: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243808: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243809: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243809: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243810: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243811: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243811: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243812: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.243812: v3d_mmu_flush_end: dev=1 */
/*646*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000090c0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.243848: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243848: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243849: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243849: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243850: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243850: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243851: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243852: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.243852: v3d_mmu_flush_end: dev=1 */
/*647*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000090e0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.243885: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243886: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243887: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243887: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243888: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243888: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243889: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243889: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.243890: v3d_mmu_flush_end: dev=1 */
/*648*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009100/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.243925: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243925: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243926: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243927: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243927: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243928: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243928: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243929: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.243929: v3d_mmu_flush_end: dev=1 */
/*649*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009120/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.243962: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243962: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243963: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243964: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243964: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243965: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243966: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.243966: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.243967: v3d_mmu_flush_end: dev=1 */
/*650*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009140/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.244000: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244001: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244002: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244002: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244002: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244003: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244004: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244004: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.244005: v3d_mmu_flush_end: dev=1 */
/*651*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009160/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.244037: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244038: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244038: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244039: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244039: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244040: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244040: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244041: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.244041: v3d_mmu_flush_end: dev=1 */
/*652*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009180/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.244075: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244076: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244076: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244077: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244077: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244078: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244078: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244079: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.244080: v3d_mmu_flush_end: dev=1 */
/*653*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000091a0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.244113: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244113: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244114: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244115: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244115: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244116: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244116: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244117: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.244117: v3d_mmu_flush_end: dev=1 */
/*654*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000091c0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.244152: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244153: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244154: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244154: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244155: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244155: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244156: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244156: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.244157: v3d_mmu_flush_end: dev=1 */
/*655*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000091e0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.244189: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244190: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244191: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244191: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244192: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244192: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244193: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244193: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.244194: v3d_mmu_flush_end: dev=1 */
/*656*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009200/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.244227: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244228: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244228: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244229: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244229: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244230: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244230: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244231: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.244231: v3d_mmu_flush_end: dev=1 */
/*657*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009220/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.244263: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244264: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244264: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244265: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244266: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244266: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244267: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244268: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.244269: v3d_mmu_flush_end: dev=1 */
/*658*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009240/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.244395: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244396: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244397: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244397: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244398: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244398: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244399: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244399: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.244400: v3d_mmu_flush_end: dev=1 */
/*659*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009260/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.244439: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244439: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244440: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244441: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244441: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244442: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244443: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244443: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.244444: v3d_mmu_flush_end: dev=1 */
/*660*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009280/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.244479: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244480: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244481: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244481: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244482: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244482: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244483: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244483: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.244484: v3d_mmu_flush_end: dev=1 */
/*661*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000092a0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.244518: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244519: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244519: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244520: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244520: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244521: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244522: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244522: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.244523: v3d_mmu_flush_end: dev=1 */
/*662*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000092c0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.244557: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244558: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244559: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244559: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244560: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244560: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244561: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244561: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.244562: v3d_mmu_flush_end: dev=1 */
/*663*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009340/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.244596: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244597: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244597: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244598: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244599: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244599: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244600: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244601: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.244601: v3d_mmu_flush_end: dev=1 */
/*664*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009360/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.244642: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244643: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244644: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244644: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244645: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244645: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244646: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244646: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.244647: v3d_mmu_flush_end: dev=1 */
/*665*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009380/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.244684: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244685: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244686: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244686: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244686: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244687: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244688: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244688: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.244689: v3d_mmu_flush_end: dev=1 */
/*666*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000093a0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.244726: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244727: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244727: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244728: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244728: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244729: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244730: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244730: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.244731: v3d_mmu_flush_end: dev=1 */
/*667*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009480/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.244767: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244768: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244769: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244769: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244770: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244770: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244771: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244772: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.244772: v3d_mmu_flush_end: dev=1 */
/*668*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000094a0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.244809: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244810: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244810: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244811: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244811: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244812: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244812: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244813: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.244813: v3d_mmu_flush_end: dev=1 */
/*669*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000093c0/*page*/, 0x00000083/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.244842: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244843: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244843: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244844: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244844: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244845: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244846: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.244846: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.244847: v3d_mmu_flush_end: dev=1 */
/*670*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009460/*page*/, 0x00000003/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.245236: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245237: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245238: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245238: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245239: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245239: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245240: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245240: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.245241: v3d_mmu_flush_end: dev=1 */
/*671*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000094c0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.245292: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245292: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245293: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245293: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245294: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245294: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245295: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245296: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.245296: v3d_mmu_flush_end: dev=1 */
/*672*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000094e0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.245337: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245338: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245338: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245340: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245340: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245341: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245341: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245342: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.245342: v3d_mmu_flush_end: dev=1 */
/*673*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009500/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.245378: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245379: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245380: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245380: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245381: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245381: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245382: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245382: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.245383: v3d_mmu_flush_end: dev=1 */
/*674*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009520/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.245418: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245419: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245419: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245420: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245420: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245421: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245422: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245422: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.245423: v3d_mmu_flush_end: dev=1 */
/*675*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009540/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.245459: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245460: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245460: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245461: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245461: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245462: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245462: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245463: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.245464: v3d_mmu_flush_end: dev=1 */
/*676*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009560/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.245499: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245500: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245501: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245501: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245502: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245502: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245503: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245503: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.245504: v3d_mmu_flush_end: dev=1 */
/*677*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009640/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.245540: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245541: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245542: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245542: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245543: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245543: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245544: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245544: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.245545: v3d_mmu_flush_end: dev=1 */
/*678*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009660/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.245580: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245581: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245582: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245582: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245583: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245583: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245584: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245585: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.245585: v3d_mmu_flush_end: dev=1 */
/*679*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009580/*page*/, 0x00000083/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.245635: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245636: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245636: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245637: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245637: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245638: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245638: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.245639: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.245639: v3d_mmu_flush_end: dev=1 */
/*680*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009620/*page*/, 0x00000002/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.246017: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246018: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246019: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246019: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246020: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246020: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246021: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246022: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.246022: v3d_mmu_flush_end: dev=1 */
/*681*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009680/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.246065: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246066: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246066: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246067: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246067: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246068: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246069: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246069: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.246070: v3d_mmu_flush_end: dev=1 */
/*682*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000096a0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.246105: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246106: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246107: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246107: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246108: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246108: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246109: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246110: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.246111: v3d_mmu_flush_end: dev=1 */
/*683*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000096c0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.246146: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246147: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246148: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246148: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246149: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246149: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246150: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246150: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.246151: v3d_mmu_flush_end: dev=1 */
/*684*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000096e0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.246186: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246187: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246187: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246188: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246188: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246189: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246189: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246190: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.246190: v3d_mmu_flush_end: dev=1 */
/*685*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009700/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.246226: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246226: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246227: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246227: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246228: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246228: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246229: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246230: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.246230: v3d_mmu_flush_end: dev=1 */
/*686*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009720/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.246265: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246265: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246266: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246267: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246267: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246268: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246268: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246269: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.246270: v3d_mmu_flush_end: dev=1 */
/*687*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009740/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.246306: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246307: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246307: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246308: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246308: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246309: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246309: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246310: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.246310: v3d_mmu_flush_end: dev=1 */
/*688*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009760/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.246346: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246346: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246347: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246347: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246348: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246349: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246349: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246350: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.246350: v3d_mmu_flush_end: dev=1 */
/*689*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009780/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.246388: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246388: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246389: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246389: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246390: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246390: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246391: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246392: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.246392: v3d_mmu_flush_end: dev=1 */
/*690*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000097a0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.246428: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246429: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246430: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246430: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246431: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246431: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246432: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246432: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.246433: v3d_mmu_flush_end: dev=1 */
/*691*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000097c0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.246471: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246472: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246472: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246473: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246473: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246474: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246475: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246475: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.246476: v3d_mmu_flush_end: dev=1 */
/*692*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000097e0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.246510: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246511: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246512: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246512: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246513: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246513: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246514: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246515: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.246515: v3d_mmu_flush_end: dev=1 */
/*693*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009800/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.246552: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246553: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246553: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246554: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246554: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246555: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246555: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246556: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.246556: v3d_mmu_flush_end: dev=1 */
/*694*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009820/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.246592: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246592: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246593: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246593: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246594: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246594: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246595: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246596: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.246596: v3d_mmu_flush_end: dev=1 */
/*695*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009840/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.246631: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246632: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246633: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246633: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246634: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246634: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246635: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246635: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.246636: v3d_mmu_flush_end: dev=1 */
/*696*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009860/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.246669: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246670: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246671: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246671: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246672: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246672: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246673: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246674: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.246674: v3d_mmu_flush_end: dev=1 */
/*697*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009880/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.246709: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246710: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246710: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246711: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246711: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246712: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246712: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246713: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.246713: v3d_mmu_flush_end: dev=1 */
/*698*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000098a0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.246749: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246749: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246750: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246751: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246751: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246751: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246752: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246753: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.246753: v3d_mmu_flush_end: dev=1 */
/*699*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000098c0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.246789: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246789: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246790: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246790: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246791: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246791: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246792: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246793: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.246793: v3d_mmu_flush_end: dev=1 */
/*700*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000099a0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.246829: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246830: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246831: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246831: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246832: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246832: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246833: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246834: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.246834: v3d_mmu_flush_end: dev=1 */
/*701*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000099c0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.246871: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246871: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246872: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246872: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246874: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246874: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246875: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246875: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.246876: v3d_mmu_flush_end: dev=1 */
/*702*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000098e0/*page*/, 0x00000083/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.246904: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246905: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246905: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246906: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246906: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246907: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246907: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.246908: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.246908: v3d_mmu_flush_end: dev=1 */
/*703*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009980/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.247285: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247285: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247286: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247286: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247287: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247287: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247288: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247289: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.247289: v3d_mmu_flush_end: dev=1 */
/*704*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000099e0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.247325: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247326: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247327: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247327: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247328: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247328: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247329: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247329: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.247330: v3d_mmu_flush_end: dev=1 */
/*705*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009a00/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.247366: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247367: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247368: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247368: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247369: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247369: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247370: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247371: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.247371: v3d_mmu_flush_end: dev=1 */
/*706*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009a20/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.247405: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247406: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247407: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247407: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247408: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247408: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247409: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247410: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.247410: v3d_mmu_flush_end: dev=1 */
/*707*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009a40/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.247444: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247445: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247446: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247446: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247447: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247447: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247448: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247449: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.247449: v3d_mmu_flush_end: dev=1 */
/*708*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009a60/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.247484: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247484: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247485: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247486: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247486: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247487: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247487: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247488: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.247488: v3d_mmu_flush_end: dev=1 */
/*709*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000060/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.247528: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247528: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247529: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247529: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247530: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247530: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247531: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247532: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.247532: v3d_mmu_flush_end: dev=1 */
/*710*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000140/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.247571: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247572: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247572: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247573: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247573: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247574: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247574: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247575: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.247575: v3d_mmu_flush_end: dev=1 */
/*711*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000160/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.247611: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247612: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247613: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247613: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247614: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247614: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247615: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247616: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.247616: v3d_mmu_flush_end: dev=1 */
/*712*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000080/*page*/, 0x00000083/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.247645: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247645: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247646: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247646: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247647: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247647: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247648: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.247649: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.247649: v3d_mmu_flush_end: dev=1 */
/*713*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000120/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.248055: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248056: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248057: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248057: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248058: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248058: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248059: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248059: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.248060: v3d_mmu_flush_end: dev=1 */
/*714*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000560/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.248101: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248102: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248102: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248103: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248103: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248104: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248105: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248105: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.248106: v3d_mmu_flush_end: dev=1 */
/*715*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000540/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.248145: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248145: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248146: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248146: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248147: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248148: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248148: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248149: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.248149: v3d_mmu_flush_end: dev=1 */
/*716*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000220/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.248188: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248189: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248189: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248190: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248190: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248191: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248191: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248192: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.248192: v3d_mmu_flush_end: dev=1 */
/*717*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000180/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.248231: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248232: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248233: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248233: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248234: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248234: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248235: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248236: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.248236: v3d_mmu_flush_end: dev=1 */
/*718*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000500/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.248272: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248273: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248273: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248274: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248274: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248275: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248276: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248276: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.248277: v3d_mmu_flush_end: dev=1 */
/*719*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000380/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.248337: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248338: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248338: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248339: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248339: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248340: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248341: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248341: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.248342: v3d_mmu_flush_end: dev=1 */
/*720*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000400/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.248383: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248384: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248384: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248385: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248385: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248386: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248387: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248387: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.248388: v3d_mmu_flush_end: dev=1 */
/*721*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000003e0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.248425: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248426: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248427: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248427: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248428: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248428: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248429: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248430: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.248430: v3d_mmu_flush_end: dev=1 */
/*722*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000460/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.248468: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248468: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248469: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248469: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248470: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248470: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248471: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248472: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.248472: v3d_mmu_flush_end: dev=1 */
/*723*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000320/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.248511: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248511: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248512: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248513: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248513: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248514: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248514: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248515: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.248515: v3d_mmu_flush_end: dev=1 */
/*724*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000300/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.248552: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248553: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248554: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248554: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248555: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248555: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248556: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248556: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.248557: v3d_mmu_flush_end: dev=1 */
/*725*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000001e0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.248592: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248593: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248594: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248594: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248595: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248595: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248596: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248596: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.248597: v3d_mmu_flush_end: dev=1 */
/*726*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000002e0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.248634: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248634: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248635: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248636: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248636: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248637: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248637: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248638: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.248638: v3d_mmu_flush_end: dev=1 */
/*727*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000520/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.248674: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248675: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248676: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248677: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248677: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248678: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248678: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248679: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.248680: v3d_mmu_flush_end: dev=1 */
/*728*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000420/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.248730: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248731: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248732: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248732: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248733: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248733: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248734: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248734: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.248735: v3d_mmu_flush_end: dev=1 */
/*729*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000092e0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.248772: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248773: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248774: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248774: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248775: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248775: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248776: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248776: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.248777: v3d_mmu_flush_end: dev=1 */
/*730*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000003a0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.248812: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248812: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248813: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248813: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248815: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248815: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248816: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248817: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.248817: v3d_mmu_flush_end: dev=1 */
/*731*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000005a0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.248856: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248856: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248857: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248858: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248858: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248859: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248859: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248860: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.248860: v3d_mmu_flush_end: dev=1 */
/*732*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000004e0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.248896: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248896: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248897: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248897: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248898: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248899: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248899: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248900: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.248900: v3d_mmu_flush_end: dev=1 */
/*733*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000200/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.248938: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248938: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248939: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248939: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248940: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248940: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248941: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248942: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.248942: v3d_mmu_flush_end: dev=1 */
/*734*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000260/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.248977: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248978: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248978: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248979: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248979: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248980: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248980: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.248981: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.248981: v3d_mmu_flush_end: dev=1 */
/*735*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000240/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.249018: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249019: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249020: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249020: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249021: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249021: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249022: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249023: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.249023: v3d_mmu_flush_end: dev=1 */
/*736*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009300/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.249059: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249060: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249061: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249061: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249062: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249062: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249063: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249064: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.249064: v3d_mmu_flush_end: dev=1 */
/*737*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000580/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.249100: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249100: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249101: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249101: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249102: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249102: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249103: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249103: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.249104: v3d_mmu_flush_end: dev=1 */
/*738*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000600/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.249141: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249142: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249143: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249143: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249144: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249144: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249145: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249145: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.249146: v3d_mmu_flush_end: dev=1 */
/*739*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000440/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.249182: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249183: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249183: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249184: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249184: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249185: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249185: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249186: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.249186: v3d_mmu_flush_end: dev=1 */
/*740*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000003c0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.249221: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249222: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249223: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249223: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249224: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249224: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249225: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249226: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.249226: v3d_mmu_flush_end: dev=1 */
/*741*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000005c0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.249263: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249264: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249264: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249265: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249265: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249266: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249266: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249267: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.249267: v3d_mmu_flush_end: dev=1 */
/*742*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00007ee0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.249302: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249303: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249304: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249304: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249305: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249305: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249306: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249306: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.249307: v3d_mmu_flush_end: dev=1 */
/*743*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000340/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.249341: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249342: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249343: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249343: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249344: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249344: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249345: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249346: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.249346: v3d_mmu_flush_end: dev=1 */
/*744*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00007ec0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.249381: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249382: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249382: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249383: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249384: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249384: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249385: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249385: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.249386: v3d_mmu_flush_end: dev=1 */
/*745*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000004a0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.249423: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249423: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249424: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249424: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249425: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249425: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249426: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249427: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.249427: v3d_mmu_flush_end: dev=1 */
/*746*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000280/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.249465: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249466: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249467: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249467: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249468: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249468: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249469: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249469: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.249470: v3d_mmu_flush_end: dev=1 */
/*747*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000480/*page*/, 0x00000002/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.249507: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249508: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249508: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249509: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249509: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249510: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249510: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249511: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.249511: v3d_mmu_flush_end: dev=1 */
/*748*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000002a0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.249554: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249554: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249555: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249556: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249556: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249557: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249557: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249558: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.249559: v3d_mmu_flush_end: dev=1 */
/*749*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000002c0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.249594: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249595: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249595: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249596: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249596: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249597: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249597: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249598: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.249599: v3d_mmu_flush_end: dev=1 */
/*750*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000005e0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.249633: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249633: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249634: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249634: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249635: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249635: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249636: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249637: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.249637: v3d_mmu_flush_end: dev=1 */
/*751*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00007f00/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.249675: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249676: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249676: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249677: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249677: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249678: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249678: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249679: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.249679: v3d_mmu_flush_end: dev=1 */
/*752*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00009320/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.249714: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249715: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249716: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249716: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249717: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249717: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249718: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249719: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.249719: v3d_mmu_flush_end: dev=1 */
/*753*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000001c0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.249756: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249756: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249757: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249757: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249758: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249758: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249759: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249760: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.249760: v3d_mmu_flush_end: dev=1 */
/*754*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000001a0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.249798: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249799: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249799: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249800: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249800: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249801: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249801: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249802: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.249802: v3d_mmu_flush_end: dev=1 */
/*755*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000360/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.249839: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249840: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249841: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249841: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249842: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249842: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249843: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249843: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.249844: v3d_mmu_flush_end: dev=1 */
/*756*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000004c0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10678   [003] .... 88747.249879: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249879: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249880: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249880: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249881: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249882: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249882: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10678   [003] .... 88747.249883: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10678   [003] .... 88747.249883: v3d_mmu_flush_end: dev=1 */

		{.type = type_eof /* last one */ }
};

// trace time range [ 88742.688597 -- 88747.249883 ] elapsed 4.561286
// #badlines = 35; total_long_delay 3.42 idle 2.50 (0.73)
// total_irq_delay 1.05	max_mem 35623 pages 139.15 MBs
// #jobs: 40 b/r/c/t 5/5/30/0 #irqs:40

				struct v3d_recording recording_alexnet = {
					.name = "alexnet", 
					.records = v3d_records_alexnet,
					.path = "/data/rpi4-workspace/trace-test/alexnet"				
			};
			
