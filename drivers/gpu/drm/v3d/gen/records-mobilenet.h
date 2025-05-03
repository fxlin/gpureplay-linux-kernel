// auto generated. do not edit
// input trace:  /data/rpi4-workspace/trace-test/mobilenet/ftrace.txt
 
struct record_entry __maybe_unused v3d_records_mobilenet [] = { 
/*1*/{type_access_reg, .entry_access_reg = { "core", 'r', 0x00000000/*offset*/, 0x04443356/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_IDENT0" },
/*2*/{type_access_reg, .entry_access_reg = { "core", 'r', 0x00000004/*offset*/, 0x81001422/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_IDENT1" },
/*3*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000020/*page*/, 0x00000004/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89179.778033: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.778036: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.778037: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.778038: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.778039: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.778040: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.778042: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.778043: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89179.778045: v3d_mmu_flush_end: dev=1 */
/*4*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000040/*page*/, 0x00000004/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89179.778221: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.778222: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.778223: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.778224: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.778225: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.778225: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.778226: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.778227: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89179.778228: v3d_mmu_flush_end: dev=1 */
/*5*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000060/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89179.778361: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.778362: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.778363: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.778364: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.778365: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.778366: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.778367: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.778368: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89179.778369: v3d_mmu_flush_end: dev=1 */
/*6*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000080/*page*/, 0x00000083/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89179.779772: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.779774: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.779775: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.779776: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.779777: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.779778: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.779780: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.779781: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89179.779782: v3d_mmu_flush_end: dev=1 */
/*7*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000120/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89179.780102: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.780103: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.780104: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.780105: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.780106: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.780107: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.780108: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.780109: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89179.780110: v3d_mmu_flush_end: dev=1 */
/*8*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000140/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89179.780187: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.780189: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.780190: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.780190: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.780191: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.780192: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.780193: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.780194: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89179.780195: v3d_mmu_flush_end: dev=1 */
/*9*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000160/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89179.780288: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.780290: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.780291: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.780291: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.780292: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.780293: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.780294: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89179.780295: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89179.780296: v3d_mmu_flush_end: dev=1 */
/*        benchncnn-10764   [001] .... 89179.780579: v3d_submit_cl_ioctl: dev=1, RCL 0x00140000..0x00140038 */
/*10*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000030c/*offset*/, 0x00000000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_PTB_BPOS" },
/*11*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*12*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*          v3d_bin-10702   [000] .... 89179.783382: v3d_submit_cl: dev=1, BCL, seqno=1, 0x00060000..0x0006000e */
/*13*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "bcl_0001"/*tag*/ } },
/*14*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000170/*offset*/, 0x00080000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CLE_CT0QMA" },
/*15*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000174/*offset*/, 0x00083000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CLE_CT0QMS" },
/*16*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000015c/*offset*/, 0x00120002/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CLE_CT0QTS" },
/*17*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000160/*offset*/, 0x00060000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CLE_CT0QBA" },
/*18*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000168/*offset*/, 0x0006000e/*val*/, 0/*core*/ }, -1/*irq_bcl*/, "V3D_CLE_CT0QEA" },
/* (skipped)          v3d_bin-10702   [000] d.h1 89179.783938: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000002 core=0 */
/* (skipped)          v3d_bin-10702   [000] d.h1 89179.783939: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000002 core=0 */
/*          v3d_bin-10702   [000] d.h1 89179.783942: v3d_bcl_irq: dev=1, seqno=1 irq_delay:0.56 ms*/
/*19*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*20*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*       v3d_render-10703   [001] .... 89179.783983: v3d_submit_cl: dev=1, RCL, seqno=1, 0x00140000..0x00140038 */
/*21*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "rcl_0001"/*tag*/ } },
/*22*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000164/*offset*/, 0x00140000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CLE_CT1QBA" },
/*23*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000016c/*offset*/, 0x00140038/*val*/, 0/*core*/ }, -2/*irq_rcl*/, "V3D_CLE_CT1QEA" },
/* (skipped)  systemd-journal-120     [000] d.h. 89179.784557: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000001 core=0 */
/* (skipped)  systemd-journal-120     [000] d.h. 89179.784559: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000001 core=0 */
/*  systemd-journal-120     [000] d.h. 89179.784561: v3d_rcl_irq: dev=1, seqno=1 irq_delay:0.58 ms*/
/* idle long delay = 0.35013900000194553 */
/*24*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000180/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89180.134706: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.134709: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.134710: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.134711: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.134712: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.134712: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.134713: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.134714: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89180.134715: v3d_mmu_flush_end: dev=1 */
/*25*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000001a0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89180.151366: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.151368: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.151370: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.151370: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.151371: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.151372: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.151373: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.151374: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89180.151375: v3d_mmu_flush_end: dev=1 */
/*26*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000001c0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89180.185838: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.185840: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.185841: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.185842: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.185843: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.185844: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.185845: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.185846: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89180.185847: v3d_mmu_flush_end: dev=1 */
/*27*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000001e0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89180.202962: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.202964: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.202965: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.202966: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.202966: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.202967: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.202968: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.202969: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89180.202970: v3d_mmu_flush_end: dev=1 */
/* idle long delay = 0.11244900000747293 */
/*28*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000200/*page*/, 0x00000002/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89180.315425: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.315428: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.315429: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.315430: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.315431: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.315432: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.315432: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.315433: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89180.315434: v3d_mmu_flush_end: dev=1 */
/*29*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000220/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89180.332246: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.332249: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.332250: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.332251: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.332252: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.332252: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.332253: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.332254: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89180.332255: v3d_mmu_flush_end: dev=1 */
/*30*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000240/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89180.366640: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.366642: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.366643: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.366644: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.366647: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.366648: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.366649: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.366650: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89180.366651: v3d_mmu_flush_end: dev=1 */
/*31*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000260/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89180.403863: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.403865: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.403866: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.403867: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.403868: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.403868: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.403870: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89180.403870: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89180.403872: v3d_mmu_flush_end: dev=1 */
/*32*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000280/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89180.438360: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.438362: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.438364: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.438364: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.438365: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.438366: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.438367: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.438368: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89180.438369: v3d_mmu_flush_end: dev=1 */
/*33*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000002a0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89180.455502: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.455504: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.455505: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.455506: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.455507: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.455507: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.455508: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.455509: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89180.455510: v3d_mmu_flush_end: dev=1 */
/* idle long delay = 0.11266699999396224 */
/*34*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000002c0/*page*/, 0x00000002/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89180.568184: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.568186: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.568187: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.568189: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.568189: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.568190: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.568191: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.568192: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89180.568193: v3d_mmu_flush_end: dev=1 */
/*35*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000002e0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89180.584544: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.584547: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.584548: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.584549: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.584550: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.584550: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.584551: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.584552: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89180.584554: v3d_mmu_flush_end: dev=1 */
/*36*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000300/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89180.619311: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.619314: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.619315: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.619316: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.619317: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.619318: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.619319: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.619319: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89180.619321: v3d_mmu_flush_end: dev=1 */
/*37*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000320/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89180.658032: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.658034: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.658035: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.658036: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.658037: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.658037: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.658038: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.658039: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89180.658040: v3d_mmu_flush_end: dev=1 */
/*38*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000340/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89180.696078: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.696080: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.696082: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.696082: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.696083: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.696084: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.696085: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.696086: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89180.696086: v3d_mmu_flush_end: dev=1 */
/*39*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000360/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89180.714027: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.714029: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.714031: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.714032: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.714032: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.714033: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.714034: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.714035: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89180.714036: v3d_mmu_flush_end: dev=1 */
/* idle long delay = 0.11570699998992495 */
/*40*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000380/*page*/, 0x00000002/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89180.829749: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.829752: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.829753: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.829754: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.829755: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.829756: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.829757: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.829758: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89180.829759: v3d_mmu_flush_end: dev=1 */
/*41*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000003a0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89180.846076: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.846078: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.846079: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.846080: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.846081: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.846082: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.846083: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.846084: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89180.846085: v3d_mmu_flush_end: dev=1 */
/*42*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000003c0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89180.883830: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.883832: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.883834: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.883835: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.883835: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.883836: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.883837: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.883838: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89180.883839: v3d_mmu_flush_end: dev=1 */
/*43*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000003e0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89180.924116: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.924119: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.924120: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.924121: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.924121: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.924122: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.924123: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.924124: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89180.924125: v3d_mmu_flush_end: dev=1 */
/*44*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000400/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89180.942684: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.942686: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.942687: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.942688: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.942689: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.942690: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.942691: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89180.942692: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89180.942693: v3d_mmu_flush_end: dev=1 */
/* idle long delay = 0.1155949999956647 */
/*45*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000420/*page*/, 0x00000002/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89181.058295: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.058297: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.058298: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.058299: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.058300: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.058301: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.058302: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.058303: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89181.058304: v3d_mmu_flush_end: dev=1 */
/*46*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000440/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89181.074599: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.074601: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.074602: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.074603: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.074606: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.074607: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.074608: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.074609: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89181.074610: v3d_mmu_flush_end: dev=1 */
/*47*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000460/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89181.112275: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.112278: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.112279: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.112280: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.112280: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.112281: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.112282: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.112283: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89181.112284: v3d_mmu_flush_end: dev=1 */
/*48*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000480/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89181.152696: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.152698: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.152699: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.152700: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.152701: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.152702: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.152703: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.152703: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89181.152705: v3d_mmu_flush_end: dev=1 */
/*49*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000004a0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89181.192407: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.192409: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.192411: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.192412: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.192412: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.192413: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.192414: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.192415: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89181.192416: v3d_mmu_flush_end: dev=1 */
/*50*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000004c0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89181.210394: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.210397: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.210398: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.210399: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.210400: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.210400: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.210401: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.210402: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89181.210403: v3d_mmu_flush_end: dev=1 */
/* idle long delay = 0.11662999998952728 */
/*51*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000004e0/*page*/, 0x00000002/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89181.327038: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.327041: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.327042: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.327043: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.327044: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.327044: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.327045: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.327046: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89181.327047: v3d_mmu_flush_end: dev=1 */
/*52*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000500/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89181.343591: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.343594: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.343595: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.343596: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.343596: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.343597: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.343598: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.343599: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89181.343600: v3d_mmu_flush_end: dev=1 */
/*53*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000520/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89181.382513: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.382516: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.382517: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.382517: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.382518: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.382519: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.382520: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.382521: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89181.382522: v3d_mmu_flush_end: dev=1 */
/*54*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000540/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89181.422943: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.422945: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.422947: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.422947: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.422948: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.422949: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.422950: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.422950: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89181.422952: v3d_mmu_flush_end: dev=1 */
/*55*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000560/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89181.441565: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.441568: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.441569: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.441570: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.441570: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.441571: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.441572: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.441573: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89181.441574: v3d_mmu_flush_end: dev=1 */
/* idle long delay = 0.1154170000081649 */
/*56*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000580/*page*/, 0x00000002/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89181.556997: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.556999: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.557001: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.557002: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.557002: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.557003: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.557004: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.557005: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89181.557006: v3d_mmu_flush_end: dev=1 */
/*57*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000005a0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89181.573445: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.573447: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.573448: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.573449: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.573449: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.573450: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.573451: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.573452: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89181.573453: v3d_mmu_flush_end: dev=1 */
/*58*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000005c0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89181.611756: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.611758: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.611759: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.611760: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.611761: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.611762: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.611763: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.611763: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89181.611765: v3d_mmu_flush_end: dev=1 */
/*59*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000005e0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89181.651865: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.651868: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.651869: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.651870: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.651870: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.651871: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.651872: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.651873: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89181.651874: v3d_mmu_flush_end: dev=1 */
/*60*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000600/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89181.691418: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.691421: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.691422: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.691423: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.691424: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.691424: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.691425: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.691426: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89181.691428: v3d_mmu_flush_end: dev=1 */
/*61*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000620/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89181.709497: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.709499: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.709501: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.709501: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.709502: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.709503: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.709504: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.709505: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89181.709506: v3d_mmu_flush_end: dev=1 */
/* idle long delay = 0.1165259999979753 */
/*62*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000640/*page*/, 0x00000002/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89181.826038: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.826040: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.826042: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.826042: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.826043: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.826044: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.826045: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.826045: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89181.826047: v3d_mmu_flush_end: dev=1 */
/*63*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000660/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89181.864079: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.864081: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.864082: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.864083: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.864084: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.864085: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.864086: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.864086: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89181.864088: v3d_mmu_flush_end: dev=1 */
/*64*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000680/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89181.904535: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.904537: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.904538: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.904539: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.904540: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.904541: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.904542: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.904542: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89181.904544: v3d_mmu_flush_end: dev=1 */
/*65*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000006a0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89181.934565: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.934567: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.934569: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.934569: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.934570: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.934571: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.934571: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89181.934572: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89181.934573: v3d_mmu_flush_end: dev=1 */
/* idle long delay = 0.1192319999972824 */
/*66*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000006c0/*page*/, 0x00000002/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89182.053811: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.053814: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.053815: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.053816: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.053816: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.053817: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.053818: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.053819: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89182.053820: v3d_mmu_flush_end: dev=1 */
/*67*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000006e0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89182.070207: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.070209: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.070210: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.070211: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.070212: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.070212: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.070213: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.070214: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89182.070215: v3d_mmu_flush_end: dev=1 */
/*68*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000700/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89182.108650: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.108652: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.108654: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.108654: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.108655: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.108656: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.108657: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.108658: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89182.108659: v3d_mmu_flush_end: dev=1 */
/*69*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000720/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89182.148878: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.148880: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.148882: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.148882: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.148883: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.148884: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.148884: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.148885: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89182.148886: v3d_mmu_flush_end: dev=1 */
/*70*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000740/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89182.188922: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.188924: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.188926: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.188926: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.188927: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.188928: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.188929: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.188930: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89182.188931: v3d_mmu_flush_end: dev=1 */
/*71*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000760/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89182.207015: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.207017: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.207018: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.207019: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.207019: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.207020: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.207021: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.207022: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89182.207023: v3d_mmu_flush_end: dev=1 */
/* idle long delay = 0.12288599999737926 */
/*72*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000780/*page*/, 0x00000002/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89182.329915: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.329917: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.329919: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.329920: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.329920: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.329921: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.329923: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.329924: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89182.329925: v3d_mmu_flush_end: dev=1 */
/*73*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000007a0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89182.367875: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.367878: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.367879: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.367880: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.367881: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.367881: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.367882: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.367883: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89182.367885: v3d_mmu_flush_end: dev=1 */
/*74*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000007c0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89182.408562: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.408565: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.408566: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.408567: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.408568: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.408569: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.408569: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.408570: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89182.408571: v3d_mmu_flush_end: dev=1 */
/*75*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000007e0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89182.420078: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.420080: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.420081: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.420082: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.420085: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.420086: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.420087: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.420088: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89182.420089: v3d_mmu_flush_end: dev=1 */
/*76*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000800/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89182.438821: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.438823: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.438824: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.438825: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.438826: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.438827: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.438828: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.438829: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89182.438830: v3d_mmu_flush_end: dev=1 */
/*77*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000820/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89182.456199: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.456202: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.456203: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.456204: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.456204: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.456205: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.456206: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.456207: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89182.456208: v3d_mmu_flush_end: dev=1 */
/*78*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000840/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89182.475190: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.475193: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.475194: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.475195: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.475195: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.475196: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.475197: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.475198: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89182.475199: v3d_mmu_flush_end: dev=1 */
/*79*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000860/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89182.493788: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.493791: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.493792: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.493793: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.493793: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.493794: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.493795: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.493796: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89182.493797: v3d_mmu_flush_end: dev=1 */
/*80*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000880/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89182.517525: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.517528: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.517529: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.517530: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.517531: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.517532: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.517533: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.517533: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89182.517535: v3d_mmu_flush_end: dev=1 */
/*81*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000008a0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89182.540951: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.540953: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.540954: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.540955: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.540956: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.540956: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.540957: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.540958: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89182.540959: v3d_mmu_flush_end: dev=1 */
/*82*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000008c0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89182.553202: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.553205: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.553206: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.553207: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.553208: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.553208: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.553209: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.553210: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89182.553211: v3d_mmu_flush_end: dev=1 */
/*83*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000008e0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89182.564997: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.565000: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.565001: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.565002: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.565003: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.565003: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.565004: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.565005: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89182.565006: v3d_mmu_flush_end: dev=1 */
/*84*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000900/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89182.580353: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.580355: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.580357: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.580357: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.580358: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.580359: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.580360: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.580361: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89182.580362: v3d_mmu_flush_end: dev=1 */
/*85*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000920/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89182.595510: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.595513: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.595514: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.595515: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.595515: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.595517: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.595518: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.595519: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89182.595520: v3d_mmu_flush_end: dev=1 */
/*86*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000940/*page*/, 0x00000800/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89182.608521: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.608524: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.608525: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.608525: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.608526: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.608527: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.608528: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.608528: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89182.608529: v3d_mmu_flush_end: dev=1 */
/*87*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00001140/*page*/, 0x00000800/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89182.623363: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.623366: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.623367: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.623368: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.623368: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.623369: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.623370: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.623371: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89182.623372: v3d_mmu_flush_end: dev=1 */
/*88*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00001940/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89182.623468: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.623469: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.623470: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.623470: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.623471: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.623471: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.623472: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.623472: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89182.623473: v3d_mmu_flush_end: dev=1 */
/*89*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00001960/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89182.632504: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.632506: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.632507: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.632508: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.632509: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.632510: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.632511: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.632511: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89182.632512: v3d_mmu_flush_end: dev=1 */
/*90*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00001980/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89182.639604: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.639606: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.639607: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.639608: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.639608: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.639609: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.639610: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.639610: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89182.639611: v3d_mmu_flush_end: dev=1 */
/*91*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000019a0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89182.646352: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.646354: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.646355: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.646356: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.646357: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.646357: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.646358: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.646359: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89182.646360: v3d_mmu_flush_end: dev=1 */
/*92*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000019c0/*page*/, 0x00000002/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [003] .... 89182.653952: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.653955: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.653956: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.653957: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.653957: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.653958: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.653959: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [003] .... 89182.653960: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [003] .... 89182.653961: v3d_mmu_flush_end: dev=1 */
/*93*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000019e0/*page*/, 0x00000002/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.657126: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.657129: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.657130: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.657131: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.657131: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.657132: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.657133: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.657133: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.657135: v3d_mmu_flush_end: dev=1 */
/*94*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00001a00/*page*/, 0x00000003/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.663383: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.663386: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.663387: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.663387: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.663388: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.663389: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.663390: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.663391: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.663392: v3d_mmu_flush_end: dev=1 */
/*95*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00001a20/*page*/, 0x00000003/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.674628: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.674630: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.674631: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.674632: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.674633: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.674634: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.674635: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.674635: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.674636: v3d_mmu_flush_end: dev=1 */
/*96*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00001a40/*page*/, 0x00000003/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.686128: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.686130: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.686131: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.686132: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.686133: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.686133: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.686134: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.686135: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.686136: v3d_mmu_flush_end: dev=1 */
/*97*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00001a60/*page*/, 0x00000003/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.695016: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.695019: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.695020: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.695020: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.695021: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.695022: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.695023: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.695024: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.695025: v3d_mmu_flush_end: dev=1 */
/*98*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00001a80/*page*/, 0x00000003/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.702652: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.702655: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.702656: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.702657: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.702658: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.702659: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.702660: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.702661: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.702662: v3d_mmu_flush_end: dev=1 */
/*99*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00001aa0/*page*/, 0x00000003/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.710341: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.710343: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.710344: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.710345: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.710346: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.710347: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.710347: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.710348: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.710349: v3d_mmu_flush_end: dev=1 */
/*100*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00001ac0/*page*/, 0x00000800/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.734538: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.734541: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.734542: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.734543: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.734544: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.734545: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.734546: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.734546: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.734547: v3d_mmu_flush_end: dev=1 */
/*101*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000022c0/*page*/, 0x00000005/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.737294: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.737297: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.737298: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.737299: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.737299: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.737300: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.737301: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.737302: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.737303: v3d_mmu_flush_end: dev=1 */
/*        benchncnn-10764   [001] .... 89182.777691: v3d_submit_tfu_ioctl: dev=1, IIA 0x01940000 */
/*        benchncnn-10764   [001] .... 89182.779243: v3d_submit_tfu_ioctl: dev=1, IIA 0x01960000 */
/*        benchncnn-10764   [001] .... 89182.779255: v3d_submit_tfu_ioctl: dev=1, IIA 0x01980000 */
/*        benchncnn-10764   [001] .... 89182.779263: v3d_submit_tfu_ioctl: dev=1, IIA 0x019a0000 */
/*        benchncnn-10764   [001] .... 89182.779271: v3d_submit_tfu_ioctl: dev=1, IIA 0x019c0000 */
/*        benchncnn-10764   [001] .... 89182.779281: v3d_submit_tfu_ioctl: dev=1, IIA 0x019e0000 */
/*        benchncnn-10764   [001] .... 89182.779289: v3d_submit_tfu_ioctl: dev=1, IIA 0x01a00000 */
/*        benchncnn-10764   [001] .... 89182.779301: v3d_submit_tfu_ioctl: dev=1, IIA 0x01a20000 */
/*        benchncnn-10764   [001] .... 89182.779309: v3d_submit_tfu_ioctl: dev=1, IIA 0x01a40000 */
/*        benchncnn-10764   [001] .... 89182.779325: v3d_submit_tfu_ioctl: dev=1, IIA 0x01a60000 */
/*        benchncnn-10764   [001] .... 89182.779332: v3d_submit_tfu_ioctl: dev=1, IIA 0x01a80000 */
/*        benchncnn-10764   [001] .... 89182.779340: v3d_submit_tfu_ioctl: dev=1, IIA 0x01aa0000 */
/*        benchncnn-10764   [001] .... 89182.779347: v3d_submit_tfu_ioctl: dev=1, IIA 0x022c0000 */
/*102*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "tfu_0001"/*tag*/ } },
/*          v3d_tfu-10704   [000] .... 89182.779581: v3d_submit_tfu: dev=1, seqno=1 */
/*103*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x0000040c/*offset*/, 0x01940000/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IIA" },
/*104*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000414/*offset*/, 0x00000009/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IIS" },
/*105*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000410/*offset*/, 0x00000000/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_ICA" },
/*106*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000418/*offset*/, 0x00000000/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IUA" },
/*107*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x0000041c/*offset*/, 0x01140028/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IOA" },
/*108*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000420/*offset*/, 0x00080009/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IOS" },
/*109*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000424/*offset*/, 0x00000000/*val*/, -1/*core*/ }, 0/*none*/, "reg(??)" },
/*110*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000408/*offset*/, 0x00002401/*val*/, -1/*core*/ }, 0/*none*/, "reg(??)" },
/* (skipped)          v3d_tfu-10704   [000] d.h1 89182.779593: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000000 core=0 */
/* (skipped)          v3d_tfu-10704   [000] d.h1 89182.779594: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000000 core=0 */
/* (skipped)          v3d_tfu-10704   [000] d.h1 89182.779595: v3d_access_reg: group=~hub rw=r offset=0x00000050 val=0x00000002 core=-1 */
/* (skipped)          v3d_tfu-10704   [000] d.h1 89182.779596: v3d_access_reg: group=~hub rw=w offset=0x00000058 val=0x00000002 core=-1 */
/*          v3d_tfu-10704   [000] d.h1 89182.779598: v3d_tfu_irq: dev=1, seqno=1 irq_delay:0.02 ms*/
/*111*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "tfu_0002"/*tag*/ } },
/*          v3d_tfu-10704   [000] .... 89182.779736: v3d_submit_tfu: dev=1, seqno=2 */
/*112*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x0000040c/*offset*/, 0x01960000/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IIA" },
/*113*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000414/*offset*/, 0x00000009/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IIS" },
/*114*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000410/*offset*/, 0x00000000/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_ICA" },
/*115*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000418/*offset*/, 0x00000000/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IUA" },
/*116*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x0000041c/*offset*/, 0x01141028/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IOA" },
/*117*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000420/*offset*/, 0x00100009/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IOS" },
/*118*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000424/*offset*/, 0x00000000/*val*/, -1/*core*/ }, 0/*none*/, "reg(??)" },
/*119*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000408/*offset*/, 0x00002401/*val*/, -1/*core*/ }, 0/*none*/, "reg(??)" },
/* (skipped)          v3d_tfu-10704   [000] d.h1 89182.779743: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000000 core=0 */
/* (skipped)          v3d_tfu-10704   [000] d.h1 89182.779744: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000000 core=0 */
/* (skipped)          v3d_tfu-10704   [000] d.h1 89182.779744: v3d_access_reg: group=~hub rw=r offset=0x00000050 val=0x00000002 core=-1 */
/* (skipped)          v3d_tfu-10704   [000] d.h1 89182.779745: v3d_access_reg: group=~hub rw=w offset=0x00000058 val=0x00000002 core=-1 */
/*          v3d_tfu-10704   [000] d.h1 89182.779746: v3d_tfu_irq: dev=1, seqno=2 irq_delay:0.01 ms*/
/*120*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "tfu_0003"/*tag*/ } },
/*          v3d_tfu-10704   [000] .... 89182.779871: v3d_submit_tfu: dev=1, seqno=3 */
/*121*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x0000040c/*offset*/, 0x01980000/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IIA" },
/*122*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000414/*offset*/, 0x00000009/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IIS" },
/*123*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000410/*offset*/, 0x00000000/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_ICA" },
/*124*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000418/*offset*/, 0x00000000/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IUA" },
/*125*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x0000041c/*offset*/, 0x01142028/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IOA" },
/*126*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000420/*offset*/, 0x00200009/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IOS" },
/*127*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000424/*offset*/, 0x00000000/*val*/, -1/*core*/ }, 0/*none*/, "reg(??)" },
/*128*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000408/*offset*/, 0x00002401/*val*/, -1/*core*/ }, 0/*none*/, "reg(??)" },
/* (skipped)          v3d_tfu-10704   [000] d.h1 89182.779879: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000000 core=0 */
/* (skipped)          v3d_tfu-10704   [000] d.h1 89182.779879: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000000 core=0 */
/* (skipped)          v3d_tfu-10704   [000] d.h1 89182.779880: v3d_access_reg: group=~hub rw=r offset=0x00000050 val=0x00000002 core=-1 */
/* (skipped)          v3d_tfu-10704   [000] d.h1 89182.779881: v3d_access_reg: group=~hub rw=w offset=0x00000058 val=0x00000002 core=-1 */
/*          v3d_tfu-10704   [000] d.h1 89182.779881: v3d_tfu_irq: dev=1, seqno=3 irq_delay:0.01 ms*/
/*129*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "tfu_0004"/*tag*/ } },
/*          v3d_tfu-10704   [000] .... 89182.780003: v3d_submit_tfu: dev=1, seqno=4 */
/*130*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x0000040c/*offset*/, 0x019a0000/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IIA" },
/*131*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000414/*offset*/, 0x00000009/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IIS" },
/*132*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000410/*offset*/, 0x00000000/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_ICA" },
/*133*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000418/*offset*/, 0x00000000/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IUA" },
/*134*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x0000041c/*offset*/, 0x01143028/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IOA" },
/*135*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000420/*offset*/, 0x00200009/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IOS" },
/*136*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000424/*offset*/, 0x00000000/*val*/, -1/*core*/ }, 0/*none*/, "reg(??)" },
/*137*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000408/*offset*/, 0x00002401/*val*/, -1/*core*/ }, 0/*none*/, "reg(??)" },
/* (skipped)          v3d_tfu-10704   [000] d.h1 89182.780011: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000000 core=0 */
/* (skipped)          v3d_tfu-10704   [000] d.h1 89182.780011: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000000 core=0 */
/* (skipped)          v3d_tfu-10704   [000] d.h1 89182.780012: v3d_access_reg: group=~hub rw=r offset=0x00000050 val=0x00000002 core=-1 */
/* (skipped)          v3d_tfu-10704   [000] d.h1 89182.780012: v3d_access_reg: group=~hub rw=w offset=0x00000058 val=0x00000002 core=-1 */
/*          v3d_tfu-10704   [000] d.h1 89182.780013: v3d_tfu_irq: dev=1, seqno=4 irq_delay:0.01 ms*/
/*138*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "tfu_0005"/*tag*/ } },
/*          v3d_tfu-10704   [000] .... 89182.780135: v3d_submit_tfu: dev=1, seqno=5 */
/*139*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x0000040c/*offset*/, 0x019c0000/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IIA" },
/*140*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000414/*offset*/, 0x00000009/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IIS" },
/*141*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000410/*offset*/, 0x00000000/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_ICA" },
/*142*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000418/*offset*/, 0x00000000/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IUA" },
/*143*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x0000041c/*offset*/, 0x01144028/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IOA" },
/*144*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000420/*offset*/, 0x00400009/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IOS" },
/*145*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000424/*offset*/, 0x00000000/*val*/, -1/*core*/ }, 0/*none*/, "reg(??)" },
/*146*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000408/*offset*/, 0x00002401/*val*/, -1/*core*/ }, 0/*none*/, "reg(??)" },
/* (skipped)          v3d_tfu-10704   [000] d.h. 89182.780145: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000000 core=0 */
/* (skipped)          v3d_tfu-10704   [000] d.h. 89182.780146: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000000 core=0 */
/* (skipped)          v3d_tfu-10704   [000] d.h. 89182.780146: v3d_access_reg: group=~hub rw=r offset=0x00000050 val=0x00000002 core=-1 */
/* (skipped)          v3d_tfu-10704   [000] d.h. 89182.780147: v3d_access_reg: group=~hub rw=w offset=0x00000058 val=0x00000002 core=-1 */
/*          v3d_tfu-10704   [000] d.h. 89182.780147: v3d_tfu_irq: dev=1, seqno=5 irq_delay:0.01 ms*/
/*147*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "tfu_0006"/*tag*/ } },
/*          v3d_tfu-10704   [000] .... 89182.780266: v3d_submit_tfu: dev=1, seqno=6 */
/*148*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x0000040c/*offset*/, 0x019e0000/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IIA" },
/*149*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000414/*offset*/, 0x00000009/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IIS" },
/*150*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000410/*offset*/, 0x00000000/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_ICA" },
/*151*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000418/*offset*/, 0x00000000/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IUA" },
/*152*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x0000041c/*offset*/, 0x01146028/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IOA" },
/*153*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000420/*offset*/, 0x00400009/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IOS" },
/*154*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000424/*offset*/, 0x00000000/*val*/, -1/*core*/ }, 0/*none*/, "reg(??)" },
/*155*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000408/*offset*/, 0x00002401/*val*/, -1/*core*/ }, 0/*none*/, "reg(??)" },
/* (skipped)          v3d_tfu-10704   [000] d.h. 89182.780276: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000000 core=0 */
/* (skipped)          v3d_tfu-10704   [000] d.h. 89182.780276: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000000 core=0 */
/* (skipped)          v3d_tfu-10704   [000] d.h. 89182.780277: v3d_access_reg: group=~hub rw=r offset=0x00000050 val=0x00000002 core=-1 */
/* (skipped)          v3d_tfu-10704   [000] d.h. 89182.780277: v3d_access_reg: group=~hub rw=w offset=0x00000058 val=0x00000002 core=-1 */
/*          v3d_tfu-10704   [000] d.h. 89182.780278: v3d_tfu_irq: dev=1, seqno=6 irq_delay:0.01 ms*/
/*156*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "tfu_0007"/*tag*/ } },
/*          v3d_tfu-10704   [000] .... 89182.780397: v3d_submit_tfu: dev=1, seqno=7 */
/*157*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x0000040c/*offset*/, 0x01a00000/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IIA" },
/*158*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000414/*offset*/, 0x00000009/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IIS" },
/*159*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000410/*offset*/, 0x00000000/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_ICA" },
/*160*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000418/*offset*/, 0x00000000/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IUA" },
/*161*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x0000041c/*offset*/, 0x01148028/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IOA" },
/*162*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000420/*offset*/, 0x00800009/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IOS" },
/*163*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000424/*offset*/, 0x00000000/*val*/, -1/*core*/ }, 0/*none*/, "reg(??)" },
/*164*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000408/*offset*/, 0x00002401/*val*/, -1/*core*/ }, 0/*none*/, "reg(??)" },
/* (skipped)          v3d_tfu-10704   [000] d.h. 89182.780411: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000000 core=0 */
/* (skipped)          v3d_tfu-10704   [000] d.h. 89182.780411: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000000 core=0 */
/* (skipped)          v3d_tfu-10704   [000] d.h. 89182.780412: v3d_access_reg: group=~hub rw=r offset=0x00000050 val=0x00000002 core=-1 */
/* (skipped)          v3d_tfu-10704   [000] d.h. 89182.780412: v3d_access_reg: group=~hub rw=w offset=0x00000058 val=0x00000002 core=-1 */
/*          v3d_tfu-10704   [000] d.h. 89182.780413: v3d_tfu_irq: dev=1, seqno=7 irq_delay:0.02 ms*/
/*165*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "tfu_0008"/*tag*/ } },
/*          v3d_tfu-10704   [000] .... 89182.780536: v3d_submit_tfu: dev=1, seqno=8 */
/*166*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x0000040c/*offset*/, 0x01a20000/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IIA" },
/*167*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000414/*offset*/, 0x00000009/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IIS" },
/*168*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000410/*offset*/, 0x00000000/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_ICA" },
/*169*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000418/*offset*/, 0x00000000/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IUA" },
/*170*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x0000041c/*offset*/, 0x0114c028/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IOA" },
/*171*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000420/*offset*/, 0x00800009/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IOS" },
/*172*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000424/*offset*/, 0x00000000/*val*/, -1/*core*/ }, 0/*none*/, "reg(??)" },
/*173*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000408/*offset*/, 0x00002401/*val*/, -1/*core*/ }, 0/*none*/, "reg(??)" },
/* (skipped)          v3d_tfu-10704   [000] d.h1 89182.780551: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000000 core=0 */
/* (skipped)          v3d_tfu-10704   [000] d.h1 89182.780552: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000000 core=0 */
/* (skipped)          v3d_tfu-10704   [000] d.h1 89182.780552: v3d_access_reg: group=~hub rw=r offset=0x00000050 val=0x00000002 core=-1 */
/* (skipped)          v3d_tfu-10704   [000] d.h1 89182.780553: v3d_access_reg: group=~hub rw=w offset=0x00000058 val=0x00000002 core=-1 */
/*          v3d_tfu-10704   [000] d.h1 89182.780553: v3d_tfu_irq: dev=1, seqno=8 irq_delay:0.02 ms*/
/*174*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "tfu_0009"/*tag*/ } },
/*          v3d_tfu-10704   [000] .... 89182.780672: v3d_submit_tfu: dev=1, seqno=9 */
/*175*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x0000040c/*offset*/, 0x01a40000/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IIA" },
/*176*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000414/*offset*/, 0x00000009/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IIS" },
/*177*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000410/*offset*/, 0x00000000/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_ICA" },
/*178*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000418/*offset*/, 0x00000000/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IUA" },
/*179*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x0000041c/*offset*/, 0x01150028/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IOA" },
/*180*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000420/*offset*/, 0x00800009/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IOS" },
/*181*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000424/*offset*/, 0x00000000/*val*/, -1/*core*/ }, 0/*none*/, "reg(??)" },
/*182*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000408/*offset*/, 0x00002401/*val*/, -1/*core*/ }, 0/*none*/, "reg(??)" },
/* (skipped)          v3d_tfu-10704   [000] d.h. 89182.780684: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000000 core=0 */
/* (skipped)          v3d_tfu-10704   [000] d.h. 89182.780685: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000000 core=0 */
/* (skipped)          v3d_tfu-10704   [000] d.h. 89182.780686: v3d_access_reg: group=~hub rw=r offset=0x00000050 val=0x00000002 core=-1 */
/* (skipped)          v3d_tfu-10704   [000] d.h. 89182.780686: v3d_access_reg: group=~hub rw=w offset=0x00000058 val=0x00000002 core=-1 */
/*          v3d_tfu-10704   [000] d.h. 89182.780687: v3d_tfu_irq: dev=1, seqno=9 irq_delay:0.02 ms*/
/*183*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "tfu_0010"/*tag*/ } },
/*          v3d_tfu-10704   [000] .... 89182.780809: v3d_submit_tfu: dev=1, seqno=10 */
/*184*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x0000040c/*offset*/, 0x01a60000/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IIA" },
/*185*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000414/*offset*/, 0x00000009/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IIS" },
/*186*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000410/*offset*/, 0x00000000/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_ICA" },
/*187*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000418/*offset*/, 0x00000000/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IUA" },
/*188*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x0000041c/*offset*/, 0x01154028/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IOA" },
/*189*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000420/*offset*/, 0x00800009/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IOS" },
/*190*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000424/*offset*/, 0x00000000/*val*/, -1/*core*/ }, 0/*none*/, "reg(??)" },
/*191*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000408/*offset*/, 0x00002401/*val*/, -1/*core*/ }, 0/*none*/, "reg(??)" },
/* (skipped)          v3d_tfu-10704   [000] d.h1 89182.780821: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000000 core=0 */
/* (skipped)          v3d_tfu-10704   [000] d.h1 89182.780822: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000000 core=0 */
/* (skipped)          v3d_tfu-10704   [000] d.h1 89182.780822: v3d_access_reg: group=~hub rw=r offset=0x00000050 val=0x00000002 core=-1 */
/* (skipped)          v3d_tfu-10704   [000] d.h1 89182.780823: v3d_access_reg: group=~hub rw=w offset=0x00000058 val=0x00000002 core=-1 */
/*          v3d_tfu-10704   [000] d.h1 89182.780823: v3d_tfu_irq: dev=1, seqno=10 irq_delay:0.01 ms*/
/*192*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "tfu_0011"/*tag*/ } },
/*          v3d_tfu-10704   [000] .... 89182.780944: v3d_submit_tfu: dev=1, seqno=11 */
/*193*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x0000040c/*offset*/, 0x01a80000/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IIA" },
/*194*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000414/*offset*/, 0x00000009/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IIS" },
/*195*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000410/*offset*/, 0x00000000/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_ICA" },
/*196*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000418/*offset*/, 0x00000000/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IUA" },
/*197*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x0000041c/*offset*/, 0x01158028/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IOA" },
/*198*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000420/*offset*/, 0x00800009/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IOS" },
/*199*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000424/*offset*/, 0x00000000/*val*/, -1/*core*/ }, 0/*none*/, "reg(??)" },
/*200*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000408/*offset*/, 0x00002401/*val*/, -1/*core*/ }, 0/*none*/, "reg(??)" },
/* (skipped)          v3d_tfu-10704   [000] d.h. 89182.780957: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000000 core=0 */
/* (skipped)          v3d_tfu-10704   [000] d.h. 89182.780957: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000000 core=0 */
/* (skipped)          v3d_tfu-10704   [000] d.h. 89182.780958: v3d_access_reg: group=~hub rw=r offset=0x00000050 val=0x00000002 core=-1 */
/* (skipped)          v3d_tfu-10704   [000] d.h. 89182.780958: v3d_access_reg: group=~hub rw=w offset=0x00000058 val=0x00000002 core=-1 */
/*          v3d_tfu-10704   [000] d.h. 89182.780959: v3d_tfu_irq: dev=1, seqno=11 irq_delay:0.01 ms*/
/*201*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "tfu_0012"/*tag*/ } },
/*          v3d_tfu-10704   [000] .... 89182.781074: v3d_submit_tfu: dev=1, seqno=12 */
/*202*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x0000040c/*offset*/, 0x01aa0000/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IIA" },
/*203*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000414/*offset*/, 0x00000009/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IIS" },
/*204*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000410/*offset*/, 0x00000000/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_ICA" },
/*205*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000418/*offset*/, 0x00000000/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IUA" },
/*206*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x0000041c/*offset*/, 0x0115c028/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IOA" },
/*207*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000420/*offset*/, 0x00800009/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IOS" },
/*208*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000424/*offset*/, 0x00000000/*val*/, -1/*core*/ }, 0/*none*/, "reg(??)" },
/*209*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000408/*offset*/, 0x00002401/*val*/, -1/*core*/ }, 0/*none*/, "reg(??)" },
/* (skipped)          v3d_tfu-10704   [000] d.h1 89182.781086: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000000 core=0 */
/* (skipped)          v3d_tfu-10704   [000] d.h1 89182.781086: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000000 core=0 */
/* (skipped)          v3d_tfu-10704   [000] d.h1 89182.781087: v3d_access_reg: group=~hub rw=r offset=0x00000050 val=0x00000002 core=-1 */
/* (skipped)          v3d_tfu-10704   [000] d.h1 89182.781088: v3d_access_reg: group=~hub rw=w offset=0x00000058 val=0x00000002 core=-1 */
/*          v3d_tfu-10704   [000] d.h1 89182.781088: v3d_tfu_irq: dev=1, seqno=12 irq_delay:0.01 ms*/
/*210*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "tfu_0013"/*tag*/ } },
/*          v3d_tfu-10704   [000] .... 89182.781207: v3d_submit_tfu: dev=1, seqno=13 */
/*211*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x0000040c/*offset*/, 0x022c0000/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IIA" },
/*212*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000414/*offset*/, 0x00000009/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IIS" },
/*213*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000410/*offset*/, 0x00000000/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_ICA" },
/*214*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000418/*offset*/, 0x00000000/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IUA" },
/*215*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x0000041c/*offset*/, 0x01160028/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IOA" },
/*216*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000420/*offset*/, 0x01000009/*val*/, -1/*core*/ }, 0/*none*/, "V3D_TFU_IOS" },
/*217*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000424/*offset*/, 0x00000000/*val*/, -1/*core*/ }, 0/*none*/, "reg(??)" },
/*218*/{type_access_reg, .entry_access_reg = { "hub", 'w', 0x00000408/*offset*/, 0x00002401/*val*/, -1/*core*/ }, 0/*none*/, "reg(??)" },
/* (skipped)           <idle>-0       [000] d.h2 89182.781234: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000000 core=0 */
/* (skipped)           <idle>-0       [000] d.h2 89182.781235: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000000 core=0 */
/* (skipped)           <idle>-0       [000] d.h2 89182.781235: v3d_access_reg: group=~hub rw=r offset=0x00000050 val=0x00000002 core=-1 */
/* (skipped)           <idle>-0       [000] d.h2 89182.781236: v3d_access_reg: group=~hub rw=w offset=0x00000058 val=0x00000002 core=-1 */
/*           <idle>-0       [000] d.h2 89182.781236: v3d_tfu_irq: dev=1, seqno=13 irq_delay:0.03 ms*/
/*219*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00001940/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.781334: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781335: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781336: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781337: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781337: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781338: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781339: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781340: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.781341: v3d_mmu_flush_end: dev=1 */
/*220*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00001960/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.781408: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781409: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781410: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781410: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781411: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781411: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781412: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781412: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.781413: v3d_mmu_flush_end: dev=1 */
/*221*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00001980/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.781450: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781451: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781451: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781452: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781452: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781453: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781453: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781454: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.781455: v3d_mmu_flush_end: dev=1 */
/*222*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000019a0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.781492: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781493: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781493: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781494: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781495: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781495: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781496: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781497: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.781497: v3d_mmu_flush_end: dev=1 */
/*223*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000019c0/*page*/, 0x00000002/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.781534: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781534: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781535: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781535: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781536: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781536: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781537: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781538: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.781538: v3d_mmu_flush_end: dev=1 */
/*224*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000019e0/*page*/, 0x00000002/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.781580: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781580: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781581: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781581: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781582: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781582: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781583: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781584: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.781584: v3d_mmu_flush_end: dev=1 */
/*225*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00001a00/*page*/, 0x00000003/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.781627: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781628: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781629: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781629: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781629: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781630: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781631: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781631: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.781632: v3d_mmu_flush_end: dev=1 */
/*226*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00001a20/*page*/, 0x00000003/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.781673: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781674: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781675: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781675: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781676: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781676: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781677: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781678: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.781678: v3d_mmu_flush_end: dev=1 */
/*227*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00001a40/*page*/, 0x00000003/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.781722: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781723: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781724: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781724: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781725: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781725: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781726: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781726: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.781727: v3d_mmu_flush_end: dev=1 */
/*228*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00001a60/*page*/, 0x00000003/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.781768: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781769: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781770: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781770: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781771: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781771: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781772: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781772: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.781773: v3d_mmu_flush_end: dev=1 */
/*229*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00001a80/*page*/, 0x00000003/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.781815: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781815: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781816: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781816: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781817: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781817: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781818: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781819: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.781819: v3d_mmu_flush_end: dev=1 */
/*230*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00001aa0/*page*/, 0x00000003/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.781861: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781862: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781863: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781863: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781864: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781865: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781865: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781866: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.781866: v3d_mmu_flush_end: dev=1 */
/*231*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000022c0/*page*/, 0x00000005/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.781910: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781911: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781911: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781912: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781912: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781913: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781913: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.781914: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.781914: v3d_mmu_flush_end: dev=1 */
/*232*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00001940/*page*/, 0x00000093/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.782839: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.782840: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.782841: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.782842: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.782842: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.782843: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.782844: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.782844: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.782845: v3d_mmu_flush_end: dev=1 */
/*233*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000019e0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.795918: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.795920: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.795921: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.795922: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.795923: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.795923: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.795924: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.795925: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.795926: v3d_mmu_flush_end: dev=1 */
/*234*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00001a00/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.812050: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.812052: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.812053: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.812054: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.812055: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.812056: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.812057: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.812057: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.812059: v3d_mmu_flush_end: dev=1 */
/*235*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00001a20/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.833648: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.833651: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.833652: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.833653: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.833653: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.833654: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.833655: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.833656: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.833657: v3d_mmu_flush_end: dev=1 */
/*236*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000022c0/*page*/, 0x00001000/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.857492: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.857495: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.857496: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.857497: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.857498: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.857501: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.857502: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.857502: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.857504: v3d_mmu_flush_end: dev=1 */
/*237*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00001a40/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.857707: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.857707: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.857708: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.857709: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.857709: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.857710: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.857710: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.857711: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.857711: v3d_mmu_flush_end: dev=1 */
/*238*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00001a60/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.857798: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.857799: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.857799: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.857800: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.857801: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.857801: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.857802: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.857802: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.857803: v3d_mmu_flush_end: dev=1 */
/*239*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00001a80/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.857867: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.857868: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.857869: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.857869: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.857870: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.857870: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.857871: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.857872: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.857872: v3d_mmu_flush_end: dev=1 */
/*240*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00001aa0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.857940: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.857941: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.857942: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.857942: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.857943: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.857943: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.857944: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.857944: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.857945: v3d_mmu_flush_end: dev=1 */
/*241*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000032c0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.858009: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858009: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858010: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858010: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858011: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858011: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858012: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858013: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.858013: v3d_mmu_flush_end: dev=1 */
/*242*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000032e0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.858083: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858084: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858084: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858085: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858085: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858086: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858087: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858087: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.858088: v3d_mmu_flush_end: dev=1 */
/*243*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003300/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.858155: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858156: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858157: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858157: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858158: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858158: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858159: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858159: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.858160: v3d_mmu_flush_end: dev=1 */
/*244*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003320/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.858219: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858219: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858220: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858221: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858221: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858221: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858222: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858223: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.858223: v3d_mmu_flush_end: dev=1 */
/*245*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003340/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.858285: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858286: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858287: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858287: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858288: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858288: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858289: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858290: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.858290: v3d_mmu_flush_end: dev=1 */
/*246*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003360/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.858351: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858352: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858352: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858353: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858354: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858354: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858355: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858355: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.858356: v3d_mmu_flush_end: dev=1 */
/*247*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003380/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.858424: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858425: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858425: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858426: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858426: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858427: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858427: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858428: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.858428: v3d_mmu_flush_end: dev=1 */
/*248*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000033a0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.858498: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858499: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858499: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858500: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858500: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858501: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858502: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858502: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.858503: v3d_mmu_flush_end: dev=1 */
/*249*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000033c0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.858570: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858571: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858572: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858572: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858573: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858573: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858574: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858575: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.858575: v3d_mmu_flush_end: dev=1 */
/*250*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000033e0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.858635: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858636: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858636: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858637: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858638: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858638: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858639: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858640: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.858640: v3d_mmu_flush_end: dev=1 */
/*251*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003400/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.858704: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858706: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858707: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858707: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858708: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858708: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858709: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858709: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.858710: v3d_mmu_flush_end: dev=1 */
/*252*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003420/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.858771: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858771: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858772: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858772: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858773: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858773: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858774: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858775: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.858775: v3d_mmu_flush_end: dev=1 */
/*253*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003440/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.858834: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858835: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858835: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858836: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858836: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858837: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858838: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858838: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.858839: v3d_mmu_flush_end: dev=1 */
/*254*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003460/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.858903: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858904: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858904: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858905: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858905: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858906: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858906: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858907: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.858907: v3d_mmu_flush_end: dev=1 */
/*255*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003480/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.858971: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858971: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858972: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858972: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858973: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858973: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858974: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.858975: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.858975: v3d_mmu_flush_end: dev=1 */
/*256*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000034a0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.859042: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859043: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859044: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859044: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859045: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859045: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859046: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859047: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.859047: v3d_mmu_flush_end: dev=1 */
/*257*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000034c0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.859116: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859117: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859117: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859118: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859118: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859119: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859120: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859120: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.859121: v3d_mmu_flush_end: dev=1 */
/*258*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000034e0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.859235: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859236: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859237: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859237: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859238: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859239: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859239: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859240: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.859241: v3d_mmu_flush_end: dev=1 */
/*259*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003500/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.859310: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859310: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859311: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859311: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859312: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859312: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859313: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859314: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.859314: v3d_mmu_flush_end: dev=1 */
/*260*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003520/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.859382: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859383: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859384: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859384: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859385: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859385: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859386: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859386: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.859387: v3d_mmu_flush_end: dev=1 */
/*261*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003540/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.859454: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859454: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859455: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859456: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859456: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859457: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859458: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859458: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.859459: v3d_mmu_flush_end: dev=1 */
/*262*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003560/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.859532: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859533: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859534: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859534: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859535: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859535: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859536: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859536: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.859537: v3d_mmu_flush_end: dev=1 */
/*263*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003580/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.859600: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859601: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859602: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859602: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859603: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859603: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859604: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859604: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.859605: v3d_mmu_flush_end: dev=1 */
/*264*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000035a0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.859678: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859679: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859679: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859680: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859680: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859681: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859681: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859682: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.859683: v3d_mmu_flush_end: dev=1 */
/*265*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000035c0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.859744: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859745: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859746: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859746: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859747: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859747: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859749: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859750: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.859751: v3d_mmu_flush_end: dev=1 */
/*266*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000035e0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.859816: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859817: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859817: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859818: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859818: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859819: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859819: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859820: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.859820: v3d_mmu_flush_end: dev=1 */
/*267*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003600/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.859884: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859885: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859885: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859886: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859886: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859887: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859888: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859889: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.859889: v3d_mmu_flush_end: dev=1 */
/*268*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003620/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.859949: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859950: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859951: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859951: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859952: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859952: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859953: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.859953: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.859954: v3d_mmu_flush_end: dev=1 */
/*269*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003640/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.860015: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860016: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860016: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860017: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860017: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860018: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860018: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860019: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.860019: v3d_mmu_flush_end: dev=1 */
/*270*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003660/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.860089: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860089: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860090: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860090: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860091: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860091: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860092: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860093: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.860093: v3d_mmu_flush_end: dev=1 */
/*271*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003680/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.860153: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860154: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860155: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860155: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860156: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860156: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860157: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860158: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.860158: v3d_mmu_flush_end: dev=1 */
/*272*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000036a0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.860225: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860226: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860226: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860227: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860227: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860228: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860228: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860229: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.860229: v3d_mmu_flush_end: dev=1 */
/*273*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000036c0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.860293: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860294: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860295: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860295: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860296: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860296: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860297: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860298: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.860298: v3d_mmu_flush_end: dev=1 */
/*274*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000036e0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.860361: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860361: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860362: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860362: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860363: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860363: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860364: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860365: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.860365: v3d_mmu_flush_end: dev=1 */
/*275*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003700/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.860428: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860429: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860429: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860430: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860431: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860431: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860432: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860433: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.860433: v3d_mmu_flush_end: dev=1 */
/*276*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003720/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.860496: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860497: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860498: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860498: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860499: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860499: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860500: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860501: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.860501: v3d_mmu_flush_end: dev=1 */
/*277*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003740/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.860576: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860577: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860578: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860578: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860579: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860579: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860580: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860580: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.860581: v3d_mmu_flush_end: dev=1 */
/*278*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003760/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.860645: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860646: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860646: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860647: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860647: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860648: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860648: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860649: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.860649: v3d_mmu_flush_end: dev=1 */
/*279*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003780/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.860718: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860719: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860720: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860720: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860721: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860721: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860722: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860723: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.860723: v3d_mmu_flush_end: dev=1 */
/*280*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000037a0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.860798: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860799: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860801: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860801: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860802: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860802: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860803: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860803: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.860804: v3d_mmu_flush_end: dev=1 */
/*281*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000037c0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.860874: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860875: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860876: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860876: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860877: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860877: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860878: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860878: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.860879: v3d_mmu_flush_end: dev=1 */
/*282*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000037e0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.860946: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860946: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860947: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860948: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860948: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860949: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860949: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.860950: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.860950: v3d_mmu_flush_end: dev=1 */
/*283*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003800/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.861019: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.861020: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.861021: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.861021: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.861022: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.861022: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.861023: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.861023: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.861024: v3d_mmu_flush_end: dev=1 */
/*284*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003820/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.861086: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.861086: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.861087: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.861087: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.861088: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.861088: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.861089: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.861090: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.861090: v3d_mmu_flush_end: dev=1 */
/*285*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003840/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.874724: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.874726: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.874727: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.874728: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.874729: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.874729: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.874731: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.874731: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.874732: v3d_mmu_flush_end: dev=1 */
/*286*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003860/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.890474: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.890477: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.890478: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.890479: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.890479: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.890480: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.890481: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.890482: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.890483: v3d_mmu_flush_end: dev=1 */
/*287*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003880/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.907637: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.907639: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.907641: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.907641: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.907642: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.907643: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.907644: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.907645: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.907646: v3d_mmu_flush_end: dev=1 */
/*288*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000038a0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.907834: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.907835: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.907835: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.907836: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.907836: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.907837: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.907837: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.907838: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.907839: v3d_mmu_flush_end: dev=1 */
/*289*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000038c0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.907970: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.907971: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.907972: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.907972: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.907973: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.907973: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.907974: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.907975: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.907975: v3d_mmu_flush_end: dev=1 */
/*290*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000038e0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.908039: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908040: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908041: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908041: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908042: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908042: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908043: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908044: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.908044: v3d_mmu_flush_end: dev=1 */
/*291*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003900/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.908102: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908103: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908104: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908104: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908105: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908105: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908106: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908106: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.908107: v3d_mmu_flush_end: dev=1 */
/*292*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003920/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.908165: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908166: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908167: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908167: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908168: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908168: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908169: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908169: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.908170: v3d_mmu_flush_end: dev=1 */
/*293*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003940/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.908227: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908228: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908228: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908229: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908229: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908230: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908230: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908231: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.908231: v3d_mmu_flush_end: dev=1 */
/*294*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003960/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.908301: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908302: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908303: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908303: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908304: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908304: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908305: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908308: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.908309: v3d_mmu_flush_end: dev=1 */
/*295*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003980/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.908373: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908374: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908374: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908375: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908375: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908376: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908376: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908377: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.908377: v3d_mmu_flush_end: dev=1 */
/*296*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000039a0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.908438: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908439: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908439: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908440: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908441: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908441: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908442: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908442: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.908443: v3d_mmu_flush_end: dev=1 */
/*297*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000039c0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.908502: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908502: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908503: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908503: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908504: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908504: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908505: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908506: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.908506: v3d_mmu_flush_end: dev=1 */
/*298*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000039e0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.908569: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908570: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908570: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908571: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908571: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908572: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908572: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908573: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.908573: v3d_mmu_flush_end: dev=1 */
/*299*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003a00/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.908632: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908632: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908633: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908633: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908634: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908634: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908635: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908636: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.908636: v3d_mmu_flush_end: dev=1 */
/*300*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003a20/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.908694: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908695: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908695: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908696: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908696: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908697: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908698: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908698: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.908699: v3d_mmu_flush_end: dev=1 */
/*301*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003a40/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.908758: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908759: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908760: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908761: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908761: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908762: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908762: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908763: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.908763: v3d_mmu_flush_end: dev=1 */
/*302*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003a60/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.908832: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908833: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908833: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908834: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908834: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908835: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908836: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908836: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.908837: v3d_mmu_flush_end: dev=1 */
/*303*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003a80/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.908898: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908899: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908899: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908900: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908900: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908901: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908901: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908902: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.908902: v3d_mmu_flush_end: dev=1 */
/*304*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003aa0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.908970: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908970: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908971: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908972: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908972: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908973: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908974: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.908974: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.908975: v3d_mmu_flush_end: dev=1 */
/*305*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003ac0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.909032: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909033: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909034: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909034: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909035: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909035: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909036: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909036: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.909037: v3d_mmu_flush_end: dev=1 */
/*306*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003ae0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.909095: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909095: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909096: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909096: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909097: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909097: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909098: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909099: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.909099: v3d_mmu_flush_end: dev=1 */
/*307*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003b00/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.909160: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909161: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909161: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909162: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909162: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909163: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909163: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909164: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.909164: v3d_mmu_flush_end: dev=1 */
/*308*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003b20/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.909222: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909223: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909223: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909224: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909224: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909225: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909226: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909226: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.909227: v3d_mmu_flush_end: dev=1 */
/*309*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003b40/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.909295: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909296: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909296: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909298: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909298: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909299: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909299: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909300: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.909301: v3d_mmu_flush_end: dev=1 */
/*310*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003b60/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.909363: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909364: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909365: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909365: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909366: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909366: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909367: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909367: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.909368: v3d_mmu_flush_end: dev=1 */
/*311*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003b80/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.909427: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909428: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909429: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909429: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909430: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909430: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909431: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909431: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.909432: v3d_mmu_flush_end: dev=1 */
/*312*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003ba0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.909496: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909496: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909497: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909497: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909498: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909498: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909499: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909500: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.909500: v3d_mmu_flush_end: dev=1 */
/*313*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003bc0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.909560: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909561: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909562: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909562: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909563: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909563: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909564: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909565: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.909565: v3d_mmu_flush_end: dev=1 */
/*314*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003be0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.909622: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909622: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909623: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909623: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909624: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909624: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909625: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909626: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.909626: v3d_mmu_flush_end: dev=1 */
/*315*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003c00/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.909683: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909683: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909684: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909685: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909685: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909686: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909686: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909687: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.909687: v3d_mmu_flush_end: dev=1 */
/*316*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003c20/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.909745: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909746: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909747: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909747: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909748: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909748: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909749: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909749: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.909750: v3d_mmu_flush_end: dev=1 */
/*317*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003c40/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.909805: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909806: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909807: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909807: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909808: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909808: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909809: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909809: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.909810: v3d_mmu_flush_end: dev=1 */
/*318*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003c60/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.909867: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909867: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909868: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909868: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909869: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909869: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909870: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909871: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.909871: v3d_mmu_flush_end: dev=1 */
/*319*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003c80/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.909929: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909930: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909931: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909931: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909932: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909932: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909933: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909934: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.909934: v3d_mmu_flush_end: dev=1 */
/*320*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003ca0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.909995: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909996: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909996: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909997: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909997: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909998: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909999: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.909999: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.910000: v3d_mmu_flush_end: dev=1 */
/*321*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003cc0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.910057: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910058: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910058: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910059: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910060: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910060: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910061: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910061: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.910062: v3d_mmu_flush_end: dev=1 */
/*322*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003ce0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.910121: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910122: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910122: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910123: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910123: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910124: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910124: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910125: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.910125: v3d_mmu_flush_end: dev=1 */
/*323*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003d00/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.910184: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910185: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910185: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910186: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910186: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910187: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910188: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910188: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.910190: v3d_mmu_flush_end: dev=1 */
/*324*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003d20/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.910251: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910252: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910253: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910253: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910253: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910254: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910255: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910255: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.910256: v3d_mmu_flush_end: dev=1 */
/*325*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003d40/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.910317: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910318: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910318: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910319: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910320: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910320: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910321: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910322: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.910322: v3d_mmu_flush_end: dev=1 */
/*326*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003d60/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.910380: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910381: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910382: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910382: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910383: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910383: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910384: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910385: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.910385: v3d_mmu_flush_end: dev=1 */
/*327*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003d80/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.910443: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910444: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910445: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910445: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910446: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910446: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910447: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910447: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.910448: v3d_mmu_flush_end: dev=1 */
/*328*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003da0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.910511: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910512: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910513: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910513: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910514: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910514: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910515: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910516: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.910516: v3d_mmu_flush_end: dev=1 */
/*329*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003dc0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.910573: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910574: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910575: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910575: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910576: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910576: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910577: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910578: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.910579: v3d_mmu_flush_end: dev=1 */
/*330*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003de0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.910637: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910638: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910639: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910639: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910640: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910640: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910641: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910642: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.910642: v3d_mmu_flush_end: dev=1 */
/*331*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003e00/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.910703: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910704: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910705: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910705: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910706: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910706: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910707: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910707: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.910708: v3d_mmu_flush_end: dev=1 */
/*332*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003e20/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.910766: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910767: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910767: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910768: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910768: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910769: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910769: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910770: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.910770: v3d_mmu_flush_end: dev=1 */
/*333*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003e40/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.910835: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910836: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910836: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910837: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910838: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910838: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910839: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.910840: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.910840: v3d_mmu_flush_end: dev=1 */
/*334*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003e60/*page*/, 0x00000083/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.911717: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.911719: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.911719: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.911720: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.911721: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.911721: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.911722: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.911723: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.911723: v3d_mmu_flush_end: dev=1 */
/*335*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003f00/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.911789: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.911790: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.911791: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.911791: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.911792: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.911792: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.911793: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.911793: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.911794: v3d_mmu_flush_end: dev=1 */
/*336*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003f20/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.911848: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.911849: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.911850: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.911850: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.911851: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.911851: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.911852: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.911853: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.911853: v3d_mmu_flush_end: dev=1 */
/*337*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003f40/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.911916: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.911917: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.911917: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.911918: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.911919: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.911919: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.911920: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.911921: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.911921: v3d_mmu_flush_end: dev=1 */
/*338*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003f60/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.911989: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.911990: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.911990: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.911991: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.911994: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.911994: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.911995: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.911995: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.911996: v3d_mmu_flush_end: dev=1 */
/*339*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003f80/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.912059: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.912060: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.912060: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.912061: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.912061: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.912062: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.912063: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.912063: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.912064: v3d_mmu_flush_end: dev=1 */
/*340*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003fa0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.912126: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.912127: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.912127: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.912128: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.912128: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.912129: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.912130: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.912130: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.912131: v3d_mmu_flush_end: dev=1 */
/*341*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003fc0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.912193: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.912194: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.912194: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.912195: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.912195: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.912196: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.912196: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.912197: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.912198: v3d_mmu_flush_end: dev=1 */
/*342*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003fe0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89182.912257: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.912258: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.912258: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.912259: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.912259: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.912260: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.912260: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89182.912261: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89182.912262: v3d_mmu_flush_end: dev=1 */
/*        benchncnn-10764   [001] .... 89182.912300: v3d_submit_csd_ioctl: dev=1, CFG5 0x019e0005, CFG6 0x038c0000 */
/*        benchncnn-10764   [001] .... 89182.913831: v3d_submit_csd_ioctl: dev=1, CFG5 0x00180005, CFG6 0x038e0000 */
/*343*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*344*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*        benchncnn-10764   [001] .... 89182.913875: v3d_submit_csd_ioctl: dev=1, CFG5 0x001a0005, CFG6 0x03900000 */
/*        benchncnn-10764   [001] .... 89182.913889: v3d_submit_csd_ioctl: dev=1, CFG5 0x001c0005, CFG6 0x03920000 */
/*        benchncnn-10764   [001] .... 89182.913902: v3d_submit_csd_ioctl: dev=1, CFG5 0x001e0005, CFG6 0x03940000 */
/*        benchncnn-10764   [001] .... 89182.913922: v3d_submit_csd_ioctl: dev=1, CFG5 0x00260004, CFG6 0x03960000 */
/*        benchncnn-10764   [001] .... 89182.913936: v3d_submit_csd_ioctl: dev=1, CFG5 0x00280005, CFG6 0x03980000 */
/*        benchncnn-10764   [001] .... 89182.913949: v3d_submit_csd_ioctl: dev=1, CFG5 0x002a0005, CFG6 0x039a0000 */
/*        benchncnn-10764   [001] .... 89182.913963: v3d_submit_csd_ioctl: dev=1, CFG5 0x00320004, CFG6 0x039c0000 */
/*        benchncnn-10764   [001] .... 89182.913977: v3d_submit_csd_ioctl: dev=1, CFG5 0x00340005, CFG6 0x039e0000 */
/*        benchncnn-10764   [001] .... 89182.913991: v3d_submit_csd_ioctl: dev=1, CFG5 0x00360005, CFG6 0x03a00000 */
/*        benchncnn-10764   [001] .... 89182.914006: v3d_submit_csd_ioctl: dev=1, CFG5 0x003e0004, CFG6 0x03a20000 */
/*        benchncnn-10764   [001] .... 89182.914022: v3d_submit_csd_ioctl: dev=1, CFG5 0x00340005, CFG6 0x03a40000 */
/*        benchncnn-10764   [001] .... 89182.914034: v3d_submit_csd_ioctl: dev=1, CFG5 0x00400005, CFG6 0x03a60000 */
/*        benchncnn-10764   [001] .... 89182.914048: v3d_submit_csd_ioctl: dev=1, CFG5 0x00480004, CFG6 0x03a80000 */
/*        benchncnn-10764   [001] .... 89182.914061: v3d_submit_csd_ioctl: dev=1, CFG5 0x004a0005, CFG6 0x03aa0000 */
/*        benchncnn-10764   [001] .... 89182.914073: v3d_submit_csd_ioctl: dev=1, CFG5 0x004c0005, CFG6 0x03ac0000 */
/*        benchncnn-10764   [001] .... 89182.914086: v3d_submit_csd_ioctl: dev=1, CFG5 0x00540004, CFG6 0x03ae0000 */
/*        benchncnn-10764   [001] .... 89182.914099: v3d_submit_csd_ioctl: dev=1, CFG5 0x004a0005, CFG6 0x03b00000 */
/*        benchncnn-10764   [001] .... 89182.914110: v3d_submit_csd_ioctl: dev=1, CFG5 0x00560005, CFG6 0x03b20000 */
/*345*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0001"/*tag*/ } },
/*        benchncnn-10764   [001] .... 89182.914127: v3d_submit_csd_ioctl: dev=1, CFG5 0x005e0004, CFG6 0x03b40000 */
/*          v3d_csd-10705   [000] .... 89182.914135: v3d_submit_csd: dev=1, seqno=1 */
/*346*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00380000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*347*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*348*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*349*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x000030ff/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*350*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x019e0005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*351*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x038c0000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*352*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00380000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/*        benchncnn-10764   [001] .... 89182.914140: v3d_submit_csd_ioctl: dev=1, CFG5 0x00600005, CFG6 0x03b60000 */
/*        benchncnn-10764   [001] .... 89182.914153: v3d_submit_csd_ioctl: dev=1, CFG5 0x00620005, CFG6 0x03b80000 */
/*        benchncnn-10764   [001] .... 89182.914165: v3d_submit_csd_ioctl: dev=1, CFG5 0x00680004, CFG6 0x03ba0000 */
/*        benchncnn-10764   [001] .... 89182.914177: v3d_submit_csd_ioctl: dev=1, CFG5 0x00600005, CFG6 0x03bc0000 */
/*        benchncnn-10764   [001] .... 89182.914189: v3d_submit_csd_ioctl: dev=1, CFG5 0x00620005, CFG6 0x03be0000 */
/*        benchncnn-10764   [001] .... 89182.914204: v3d_submit_csd_ioctl: dev=1, CFG5 0x00680004, CFG6 0x03c00000 */
/*        benchncnn-10764   [001] .... 89182.914217: v3d_submit_csd_ioctl: dev=1, CFG5 0x00600005, CFG6 0x03c20000 */
/*        benchncnn-10764   [001] .... 89182.914230: v3d_submit_csd_ioctl: dev=1, CFG5 0x00620005, CFG6 0x03c40000 */
/*        benchncnn-10764   [001] .... 89182.914244: v3d_submit_csd_ioctl: dev=1, CFG5 0x00680004, CFG6 0x03c60000 */
/*        benchncnn-10764   [001] .... 89182.914258: v3d_submit_csd_ioctl: dev=1, CFG5 0x00600005, CFG6 0x03c80000 */
/*        benchncnn-10764   [001] .... 89182.914271: v3d_submit_csd_ioctl: dev=1, CFG5 0x00620005, CFG6 0x03ca0000 */
/*        benchncnn-10764   [001] .... 89182.914285: v3d_submit_csd_ioctl: dev=1, CFG5 0x00680004, CFG6 0x03cc0000 */
/*        benchncnn-10764   [001] .... 89182.914299: v3d_submit_csd_ioctl: dev=1, CFG5 0x00600005, CFG6 0x03ce0000 */
/*        benchncnn-10764   [001] .... 89182.914311: v3d_submit_csd_ioctl: dev=1, CFG5 0x00620005, CFG6 0x03d00000 */
/*        benchncnn-10764   [001] .... 89182.914324: v3d_submit_csd_ioctl: dev=1, CFG5 0x00680004, CFG6 0x03d20000 */
/*        benchncnn-10764   [001] .... 89182.914338: v3d_submit_csd_ioctl: dev=1, CFG5 0x00600005, CFG6 0x03d40000 */
/*        benchncnn-10764   [001] .... 89182.914353: v3d_submit_csd_ioctl: dev=1, CFG5 0x006a0005, CFG6 0x03d60000 */
/*        benchncnn-10764   [001] .... 89182.914366: v3d_submit_csd_ioctl: dev=1, CFG5 0x00720004, CFG6 0x03d80000 */
/*        benchncnn-10764   [001] .... 89182.914380: v3d_submit_csd_ioctl: dev=1, CFG5 0x00740005, CFG6 0x03da0000 */
/*        benchncnn-10764   [001] .... 89182.914394: v3d_submit_csd_ioctl: dev=1, CFG5 0x00760005, CFG6 0x03dc0000 */
/*        benchncnn-10764   [001] .... 89182.914408: v3d_submit_csd_ioctl: dev=1, CFG5 0x007c0004, CFG6 0x03de0000 */
/*        benchncnn-10764   [001] .... 89182.914420: v3d_submit_csd_ioctl: dev=1, CFG5 0x007e0005, CFG6 0x03e00000 */
/*        benchncnn-10764   [001] .... 89182.914432: v3d_submit_csd_ioctl: dev=1, CFG5 0x00820005, CFG6 0x03e20000 */
/*        benchncnn-10764   [001] .... 89182.914447: v3d_submit_cl_ioctl: dev=1, RCL 0x03f20000..0x03f2005f */
/*353*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000030c/*offset*/, 0x00000000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_PTB_BPOS" },
/*354*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*355*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*          v3d_bin-10702   [000] .... 89182.914487: v3d_submit_cl: dev=1, BCL, seqno=2, 0x03e40000..0x03e4000e */
/*        benchncnn-10764   [001] .... 89182.914493: v3d_submit_csd_ioctl: dev=1, CFG5 0x00880005, CFG6 0x03f60000 */
/*        benchncnn-10764   [001] .... 89182.914508: v3d_submit_csd_ioctl: dev=1, CFG5 0x00900005, CFG6 0x03f80000 */
/*        benchncnn-10764   [001] .... 89182.914521: v3d_submit_csd_ioctl: dev=1, CFG5 0x008a0005, CFG6 0x03fa0000 */
/*        benchncnn-10764   [001] .... 89182.914532: v3d_submit_csd_ioctl: dev=1, CFG5 0x00920005, CFG6 0x03fc0000 */
/*        benchncnn-10764   [001] .... 89182.914543: v3d_submit_csd_ioctl: dev=1, CFG5 0x03840004, CFG6 0x03fe0000 */
/* (skipped)          v3d_bin-10702   [000] d.h. 89182.918537: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)          v3d_bin-10702   [000] d.h. 89182.918539: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*          v3d_bin-10702   [000] d.h. 89182.918541: v3d_csd_irq: dev=1, seqno=1 irq_delay:4.41 ms*/
/*  v3d_cache_clean-10706   [001] .... 89182.918579: v3d_cache_clean_begin: dev=1 */
/*356*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*357*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89182.918583: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*358*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*359*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89182.918586: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89182.918618: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89182.918620: v3d_cache_clean_end: dev=1 */
/*360*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*361*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*362*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "bcl_0002"/*tag*/ } },
/*363*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000170/*offset*/, 0x03e60000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CLE_CT0QMA" },
/*364*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000174/*offset*/, 0x00083000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CLE_CT0QMS" },
/*365*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000015c/*offset*/, 0x03f00002/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CLE_CT0QTS" },
/*366*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000160/*offset*/, 0x03e40000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CLE_CT0QBA" },
/*367*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000168/*offset*/, 0x03e4000e/*val*/, 0/*core*/ }, -1/*irq_bcl*/, "V3D_CLE_CT0QEA" },
/* (skipped)          v3d_bin-10702   [000] d.h1 89182.920206: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000002 core=0 */
/* (skipped)          v3d_bin-10702   [000] d.h1 89182.920207: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000002 core=0 */
/*          v3d_bin-10702   [000] d.h1 89182.920209: v3d_bcl_irq: dev=1, seqno=2 irq_delay:5.72 ms*/
/*368*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0002"/*tag*/ } },
/*          v3d_csd-10705   [002] .... 89182.920393: v3d_submit_csd: dev=1, seqno=2 */
/*369*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00390000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*370*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*371*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00002130/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*372*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x00002612/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*373*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00180005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*374*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x038e0000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*375*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00390000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)  systemd-journal-120     [000] d.h. 89182.925189: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)  systemd-journal-120     [000] d.h. 89182.925191: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*  systemd-journal-120     [000] d.h. 89182.925193: v3d_csd_irq: dev=1, seqno=2 irq_delay:4.80 ms*/
/*  v3d_cache_clean-10706   [001] .... 89182.925217: v3d_cache_clean_begin: dev=1 */
/*376*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*377*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89182.925221: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*378*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*379*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89182.925223: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89182.925252: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89182.925301: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89182.925302: v3d_cache_clean_end: dev=1 */
/*380*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*381*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*382*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0003"/*tag*/ } },
/*          v3d_csd-10705   [002] .... 89182.925629: v3d_submit_csd: dev=1, seqno=3 */
/*383*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x000e0000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*384*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00020000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*385*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x0000f100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*386*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x0000187f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*387*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x001a0005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*388*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x03900000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*389*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x000e0000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)  systemd-journal-120     [000] d.h. 89182.940478: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)  systemd-journal-120     [000] d.h. 89182.940480: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*  systemd-journal-120     [000] d.h. 89182.940483: v3d_csd_irq: dev=1, seqno=3 irq_delay:14.85 ms*/
/*  v3d_cache_clean-10706   [001] .... 89182.940507: v3d_cache_clean_begin: dev=1 */
/*390*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*391*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89182.940511: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*392*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*393*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89182.940513: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89182.940544: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89182.940546: v3d_cache_clean_end: dev=1 */
/*394*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*395*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*396*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0004"/*tag*/ } },
/*          v3d_csd-10705   [002] .... 89182.940872: v3d_submit_csd: dev=1, seqno=4 */
/*397*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x001d0000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*398*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00020000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*399*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*400*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x00001a47/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*401*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x001c0005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*402*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x03920000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*403*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x001d0000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)  systemd-journal-120     [000] d.h. 89182.943661: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)  systemd-journal-120     [000] d.h. 89182.943663: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*  systemd-journal-120     [000] d.h. 89182.943664: v3d_csd_irq: dev=1, seqno=4 irq_delay:2.79 ms*/
/*  v3d_cache_clean-10706   [001] .... 89182.943685: v3d_cache_clean_begin: dev=1 */
/*404*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*405*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89182.943688: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*406*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*407*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89182.943690: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89182.943720: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89182.943721: v3d_cache_clean_end: dev=1 */
/*408*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*409*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*410*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0005"/*tag*/ } },
/*          v3d_csd-10705   [002] .... 89182.944096: v3d_submit_csd: dev=1, seqno=5 */
/*411*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x000e0000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*412*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00020000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*413*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x0000f100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*414*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x0000187f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*415*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x001e0005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*416*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x03940000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*417*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x000e0000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 89182.949387: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 89182.949390: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 89182.949391: v3d_csd_irq: dev=1, seqno=5 irq_delay:5.29 ms*/
/*  v3d_cache_clean-10706   [001] .... 89182.949410: v3d_cache_clean_begin: dev=1 */
/*418*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*419*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89182.949414: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*420*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*421*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89182.949416: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89182.949447: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89182.949448: v3d_cache_clean_end: dev=1 */
/*422*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*423*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*424*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0006"/*tag*/ } },
/*          v3d_csd-10705   [002] .... 89182.949679: v3d_submit_csd: dev=1, seqno=6 */
/*425*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*426*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00020000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*427*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*428*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x00000c3f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*429*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00260004/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*430*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x03960000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*431*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x01880000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 89182.966227: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 89182.966229: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 89182.966230: v3d_csd_irq: dev=1, seqno=6 irq_delay:16.55 ms*/
/*  v3d_cache_clean-10706   [001] .... 89182.966251: v3d_cache_clean_begin: dev=1 */
/*432*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*433*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89182.966254: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*434*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*435*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89182.966256: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89182.966285: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89182.966286: v3d_cache_clean_end: dev=1 */
/*436*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*437*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*438*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0007"/*tag*/ } },
/*          v3d_csd-10705   [002] .... 89182.966514: v3d_submit_csd: dev=1, seqno=7 */
/*439*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x001d0000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*440*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00040000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*441*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*442*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x0000348f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*443*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00280005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*444*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x03980000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*445*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x001d0000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 89182.971990: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 89182.971992: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 89182.971993: v3d_csd_irq: dev=1, seqno=7 irq_delay:5.48 ms*/
/*  v3d_cache_clean-10706   [001] .... 89182.972018: v3d_cache_clean_begin: dev=1 */
/*446*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*447*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89182.972021: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*448*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*449*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89182.972023: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89182.972054: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89182.972055: v3d_cache_clean_end: dev=1 */
/*450*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*451*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*452*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0008"/*tag*/ } },
/*          v3d_csd-10705   [002] .... 89182.972283: v3d_submit_csd: dev=1, seqno=8 */
/*453*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00070000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*454*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00040000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*455*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x0000f100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*456*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x00000c3f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*457*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x002a0005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*458*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x039a0000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*459*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00070000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 89182.974960: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 89182.974961: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 89182.974961: v3d_csd_irq: dev=1, seqno=8 irq_delay:2.68 ms*/
/*  v3d_cache_clean-10706   [001] .... 89182.974976: v3d_cache_clean_begin: dev=1 */
/*460*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*461*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89182.974978: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*462*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*463*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89182.974980: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89182.975008: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89182.975009: v3d_cache_clean_end: dev=1 */
/*464*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*465*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*466*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0009"/*tag*/ } },
/*          v3d_csd-10705   [002] .... 89182.975218: v3d_submit_csd: dev=1, seqno=9 */
/*467*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*468*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00040000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*469*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*470*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x0000061f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*471*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00320004/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*472*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x039c0000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*473*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00620000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 89182.990195: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 89182.990198: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 89182.990199: v3d_csd_irq: dev=1, seqno=9 irq_delay:14.98 ms*/
/*  v3d_cache_clean-10706   [001] .... 89182.990220: v3d_cache_clean_begin: dev=1 */
/*474*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*475*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89182.990223: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*476*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*477*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89182.990226: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89182.990254: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89182.990255: v3d_cache_clean_end: dev=1 */
/*478*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*479*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*480*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0010"/*tag*/ } },
/*          v3d_csd-10705   [002] .... 89182.990491: v3d_submit_csd: dev=1, seqno=10 */
/*481*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x000f0000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*482*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00080000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*483*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*484*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x00001c1f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*485*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00340005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*486*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x039e0000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*487*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x000f0000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 89182.993456: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 89182.993458: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 89182.993460: v3d_csd_irq: dev=1, seqno=10 irq_delay:2.97 ms*/
/*  v3d_cache_clean-10706   [001] .... 89182.993480: v3d_cache_clean_begin: dev=1 */
/*488*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*489*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89182.993483: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*490*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*491*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89182.993485: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89182.993516: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89182.993517: v3d_cache_clean_end: dev=1 */
/*492*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*493*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*494*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0011"/*tag*/ } },
/*          v3d_csd-10705   [002] .... 89182.993747: v3d_submit_csd: dev=1, seqno=11 */
/*495*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00070000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*496*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00080000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*497*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x0000f100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*498*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x0000187f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*499*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00360005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*500*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x03a00000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*501*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00070000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 89182.999012: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 89182.999014: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 89182.999015: v3d_csd_irq: dev=1, seqno=11 irq_delay:5.27 ms*/
/*  v3d_cache_clean-10706   [001] .... 89182.999035: v3d_cache_clean_begin: dev=1 */
/*502*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*503*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89182.999038: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*504*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*505*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89182.999040: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89182.999070: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89182.999071: v3d_cache_clean_end: dev=1 */
/*506*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*507*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*508*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0012"/*tag*/ } },
/*          v3d_csd-10705   [002] .... 89182.999320: v3d_submit_csd: dev=1, seqno=12 */
/*509*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*510*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00040000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*511*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*512*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x0000061f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*513*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x003e0004/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*514*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x03a20000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*515*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00620000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 89183.027224: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 89183.027227: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 89183.027228: v3d_csd_irq: dev=1, seqno=12 irq_delay:27.91 ms*/
/*  v3d_cache_clean-10706   [001] .... 89183.027248: v3d_cache_clean_begin: dev=1 */
/*516*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*517*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.027251: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*518*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*519*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.027253: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.027282: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89183.027283: v3d_cache_clean_end: dev=1 */
/*520*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*521*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*522*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0013"/*tag*/ } },
/*          v3d_csd-10705   [002] .... 89183.027523: v3d_submit_csd: dev=1, seqno=13 */
/*523*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x000f0000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*524*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00080000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*525*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*526*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x00001c1f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*527*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00340005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*528*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x03a40000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*529*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x000f0000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 89183.030489: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 89183.030490: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 89183.030491: v3d_csd_irq: dev=1, seqno=13 irq_delay:2.97 ms*/
/*  v3d_cache_clean-10706   [001] .... 89183.030506: v3d_cache_clean_begin: dev=1 */
/*530*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*531*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.030509: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*532*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*533*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.030510: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.030542: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89183.030542: v3d_cache_clean_end: dev=1 */
/*534*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*535*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*536*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0014"/*tag*/ } },
/*          v3d_csd-10705   [002] .... 89183.030717: v3d_submit_csd: dev=1, seqno=14 */
/*537*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00040000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*538*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00080000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*539*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x0000f100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*540*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x000007ff/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*541*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00400005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*542*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x03a60000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*543*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00040000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)  systemd-journal-120     [000] d.h. 89183.032470: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)  systemd-journal-120     [000] d.h. 89183.032472: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*  systemd-journal-120     [000] d.h. 89183.032473: v3d_csd_irq: dev=1, seqno=14 irq_delay:1.76 ms*/
/*  v3d_cache_clean-10706   [001] .... 89183.032495: v3d_cache_clean_begin: dev=1 */
/*544*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*545*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.032497: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*546*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*547*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.032499: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.032529: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89183.032530: v3d_cache_clean_end: dev=1 */
/*548*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*549*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*550*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0015"/*tag*/ } },
/*          v3d_csd-10705   [002] .... 89183.032886: v3d_submit_csd: dev=1, seqno=15 */
/*551*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*552*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00080000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*553*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*554*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x0000031f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*555*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00480004/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*556*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x03a80000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*557*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00190000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 89183.046183: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 89183.046185: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 89183.046186: v3d_csd_irq: dev=1, seqno=15 irq_delay:13.30 ms*/
/*  v3d_cache_clean-10706   [001] .... 89183.046206: v3d_cache_clean_begin: dev=1 */
/*558*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*559*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.046210: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*560*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*561*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.046212: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.046241: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89183.046242: v3d_cache_clean_end: dev=1 */
/*562*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*563*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*564*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0016"/*tag*/ } },
/*          v3d_csd-10705   [002] .... 89183.046476: v3d_submit_csd: dev=1, seqno=16 */
/*565*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00080000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*566*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00100000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*567*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*568*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x00000fff/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*569*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x004a0005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*570*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x03aa0000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*571*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00080000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 89183.048208: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 89183.048210: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 89183.048211: v3d_csd_irq: dev=1, seqno=16 irq_delay:1.73 ms*/
/*  v3d_cache_clean-10706   [001] .... 89183.048231: v3d_cache_clean_begin: dev=1 */
/*572*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*573*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.048234: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*574*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*575*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.048236: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.048268: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89183.048269: v3d_cache_clean_end: dev=1 */
/*576*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*577*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*578*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0017"/*tag*/ } },
/*          v3d_csd-10705   [002] .... 89183.048487: v3d_submit_csd: dev=1, seqno=17 */
/*579*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00040000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*580*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00100000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*581*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x0000f100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*582*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x00000fff/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*583*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x004c0005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*584*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x03ac0000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*585*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00040000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)  systemd-journal-120     [000] d.h. 89183.052048: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)  systemd-journal-120     [000] d.h. 89183.052050: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*  systemd-journal-120     [000] d.h. 89183.052050: v3d_csd_irq: dev=1, seqno=17 irq_delay:3.56 ms*/
/*  v3d_cache_clean-10706   [001] .... 89183.052070: v3d_cache_clean_begin: dev=1 */
/*586*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*587*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.052073: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*588*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*589*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.052075: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.052106: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89183.052107: v3d_cache_clean_end: dev=1 */
/*590*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*591*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*592*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0018"/*tag*/ } },
/*          v3d_csd-10705   [002] .... 89183.052327: v3d_submit_csd: dev=1, seqno=18 */
/*593*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*594*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00080000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*595*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*596*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x0000031f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*597*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00540004/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*598*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x03ae0000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*599*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00190000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 89183.080265: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 89183.080266: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 89183.080267: v3d_csd_irq: dev=1, seqno=18 irq_delay:27.94 ms*/
/*  v3d_cache_clean-10706   [001] .... 89183.080287: v3d_cache_clean_begin: dev=1 */
/*600*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*601*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.080290: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*602*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*603*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.080292: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.080321: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89183.080322: v3d_cache_clean_end: dev=1 */
/*604*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*605*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*606*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0019"/*tag*/ } },
/*          v3d_csd-10705   [002] .... 89183.080561: v3d_submit_csd: dev=1, seqno=19 */
/*607*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00080000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*608*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00100000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*609*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*610*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x00000fff/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*611*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x004a0005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*612*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x03b00000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*613*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00080000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 89183.082289: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 89183.082290: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 89183.082291: v3d_csd_irq: dev=1, seqno=19 irq_delay:1.73 ms*/
/*  v3d_cache_clean-10706   [001] .... 89183.082306: v3d_cache_clean_begin: dev=1 */
/*614*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*615*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.082308: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*616*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*617*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.082310: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.082338: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89183.082339: v3d_cache_clean_end: dev=1 */
/*618*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*619*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*620*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0020"/*tag*/ } },
/*          v3d_csd-10705   [002] .... 89183.082524: v3d_submit_csd: dev=1, seqno=20 */
/*621*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00020000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*622*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00100000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*623*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x0000f100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*624*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x000003ff/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*625*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00560005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*626*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x03b20000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*627*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00020000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)  systemd-journal-120     [000] d.h. 89183.083527: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)  systemd-journal-120     [000] d.h. 89183.083528: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*  systemd-journal-120     [000] d.h. 89183.083529: v3d_csd_irq: dev=1, seqno=20 irq_delay:1.00 ms*/
/*  v3d_cache_clean-10706   [001] .... 89183.083547: v3d_cache_clean_begin: dev=1 */
/*628*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*629*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.083549: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*630*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*631*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.083552: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.083581: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89183.083582: v3d_cache_clean_end: dev=1 */
/*632*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*633*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*634*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0021"/*tag*/ } },
/*          v3d_csd-10705   [002] .... 89183.083984: v3d_submit_csd: dev=1, seqno=21 */
/*635*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*636*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00100000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*637*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*638*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x000001bf/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*639*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x005e0004/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*640*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x03b40000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*641*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00070000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 89183.098114: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 89183.098116: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 89183.098117: v3d_csd_irq: dev=1, seqno=21 irq_delay:14.13 ms*/
/*  v3d_cache_clean-10706   [001] .... 89183.098136: v3d_cache_clean_begin: dev=1 */
/*642*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*643*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.098139: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*644*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*645*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.098141: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.098170: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89183.098171: v3d_cache_clean_end: dev=1 */
/*646*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*647*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*648*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0022"/*tag*/ } },
/*          v3d_csd-10705   [002] .... 89183.098386: v3d_submit_csd: dev=1, seqno=22 */
/*649*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00040000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*650*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00200000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*651*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*652*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x000007ff/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*653*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00600005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*654*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x03b60000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*655*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00040000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)  systemd-journal-120     [000] d.h. 89183.099465: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)  systemd-journal-120     [000] d.h. 89183.099467: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*  systemd-journal-120     [000] d.h. 89183.099467: v3d_csd_irq: dev=1, seqno=22 irq_delay:1.08 ms*/
/*  v3d_cache_clean-10706   [001] .... 89183.099485: v3d_cache_clean_begin: dev=1 */
/*656*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*657*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.099488: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*658*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*659*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.099492: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.099521: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.099569: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89183.099570: v3d_cache_clean_end: dev=1 */
/*660*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*661*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*662*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0023"/*tag*/ } },
/*          v3d_csd-10705   [002] .... 89183.099914: v3d_submit_csd: dev=1, seqno=23 */
/*663*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00020000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*664*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00200000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*665*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x0000f100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*666*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x000007ff/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*667*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00620005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*668*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x03b80000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*669*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00020000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 89183.101664: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 89183.101665: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 89183.101666: v3d_csd_irq: dev=1, seqno=23 irq_delay:1.75 ms*/
/*  v3d_cache_clean-10706   [001] .... 89183.101684: v3d_cache_clean_begin: dev=1 */
/*670*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*671*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.101686: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*672*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*673*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.101688: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.101717: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89183.101718: v3d_cache_clean_end: dev=1 */
/*674*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*675*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*676*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0024"/*tag*/ } },
/*          v3d_csd-10705   [002] .... 89183.101911: v3d_submit_csd: dev=1, seqno=24 */
/*677*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*678*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00100000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*679*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*680*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x000001bf/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*681*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00680004/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*682*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x03ba0000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*683*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00070000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 89183.130126: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 89183.130128: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 89183.130129: v3d_csd_irq: dev=1, seqno=24 irq_delay:28.22 ms*/
/*  v3d_cache_clean-10706   [001] .... 89183.130150: v3d_cache_clean_begin: dev=1 */
/*684*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*685*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.130153: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*686*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*687*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.130155: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.130184: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89183.130185: v3d_cache_clean_end: dev=1 */
/*688*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*689*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*690*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0025"/*tag*/ } },
/*          v3d_csd-10705   [002] .... 89183.130427: v3d_submit_csd: dev=1, seqno=25 */
/*691*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00040000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*692*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00200000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*693*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*694*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x000007ff/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*695*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00600005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*696*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x03bc0000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*697*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00040000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)  systemd-journal-120     [000] d.h. 89183.131507: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)  systemd-journal-120     [000] d.h. 89183.131508: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*  systemd-journal-120     [000] d.h. 89183.131508: v3d_csd_irq: dev=1, seqno=25 irq_delay:1.08 ms*/
/*  v3d_cache_clean-10706   [001] .... 89183.131526: v3d_cache_clean_begin: dev=1 */
/*698*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*699*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.131529: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*700*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*701*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.131531: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.131560: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.131608: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89183.131609: v3d_cache_clean_end: dev=1 */
/*702*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*703*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*704*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0026"/*tag*/ } },
/*          v3d_csd-10705   [002] .... 89183.131953: v3d_submit_csd: dev=1, seqno=26 */
/*705*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00020000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*706*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00200000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*707*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x0000f100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*708*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x000007ff/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*709*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00620005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*710*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x03be0000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*711*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00020000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 89183.133704: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 89183.133705: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 89183.133706: v3d_csd_irq: dev=1, seqno=26 irq_delay:1.75 ms*/
/*  v3d_cache_clean-10706   [001] .... 89183.133724: v3d_cache_clean_begin: dev=1 */
/*712*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*713*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.133727: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*714*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*715*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.133728: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.133757: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89183.133758: v3d_cache_clean_end: dev=1 */
/*716*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*717*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*718*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0027"/*tag*/ } },
/*          v3d_csd-10705   [002] .... 89183.133947: v3d_submit_csd: dev=1, seqno=27 */
/*719*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*720*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00100000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*721*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*722*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x000001bf/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*723*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00680004/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*724*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x03c00000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*725*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00070000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 89183.162000: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 89183.162002: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 89183.162003: v3d_csd_irq: dev=1, seqno=27 irq_delay:28.06 ms*/
/*  v3d_cache_clean-10706   [001] .... 89183.162024: v3d_cache_clean_begin: dev=1 */
/*726*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*727*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.162027: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*728*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*729*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.162028: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.162057: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89183.162058: v3d_cache_clean_end: dev=1 */
/*730*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*731*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*732*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0028"/*tag*/ } },
/*          v3d_csd-10705   [002] .... 89183.162283: v3d_submit_csd: dev=1, seqno=28 */
/*733*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00040000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*734*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00200000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*735*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*736*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x000007ff/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*737*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00600005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*738*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x03c20000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*739*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00040000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)        in:imklog-423     [000] d.h. 89183.163191: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)        in:imklog-423     [000] d.h. 89183.163192: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*        in:imklog-423     [000] d.h. 89183.163193: v3d_csd_irq: dev=1, seqno=28 irq_delay:0.91 ms*/
/*  v3d_cache_clean-10706   [001] .... 89183.163208: v3d_cache_clean_begin: dev=1 */
/*740*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*741*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.163211: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*742*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*743*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.163213: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.163241: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.163290: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89183.163291: v3d_cache_clean_end: dev=1 */
/*744*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*745*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*746*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0029"/*tag*/ } },
/*          v3d_csd-10705   [002] .... 89183.163681: v3d_submit_csd: dev=1, seqno=29 */
/*747*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00020000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*748*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00200000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*749*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x0000f100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*750*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x000007ff/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*751*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00620005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*752*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x03c40000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*753*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00020000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 89183.165430: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 89183.165432: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 89183.165433: v3d_csd_irq: dev=1, seqno=29 irq_delay:1.75 ms*/
/*  v3d_cache_clean-10706   [001] .... 89183.165451: v3d_cache_clean_begin: dev=1 */
/*754*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*755*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.165454: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*756*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*757*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.165456: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.165485: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89183.165486: v3d_cache_clean_end: dev=1 */
/*758*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*759*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*760*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0030"/*tag*/ } },
/*          v3d_csd-10705   [002] .... 89183.165681: v3d_submit_csd: dev=1, seqno=30 */
/*761*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*762*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00100000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*763*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*764*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x000001bf/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*765*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00680004/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*766*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x03c60000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*767*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00070000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 89183.193942: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 89183.193944: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 89183.193944: v3d_csd_irq: dev=1, seqno=30 irq_delay:28.26 ms*/
/*  v3d_cache_clean-10706   [001] .... 89183.193965: v3d_cache_clean_begin: dev=1 */
/*768*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*769*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.193969: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*770*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*771*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.193971: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.193999: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89183.194000: v3d_cache_clean_end: dev=1 */
/*772*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*773*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*774*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0031"/*tag*/ } },
/*          v3d_csd-10705   [002] .... 89183.194236: v3d_submit_csd: dev=1, seqno=31 */
/*775*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00040000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*776*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00200000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*777*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*778*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x000007ff/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*779*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00600005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*780*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x03c80000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*781*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00040000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 89183.195143: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 89183.195144: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 89183.195144: v3d_csd_irq: dev=1, seqno=31 irq_delay:0.91 ms*/
/*  v3d_cache_clean-10706   [001] .... 89183.195167: v3d_cache_clean_begin: dev=1 */
/*782*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*783*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.195169: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*784*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*785*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.195170: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.195200: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.195248: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89183.195249: v3d_cache_clean_end: dev=1 */
/*786*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*787*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*788*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0032"/*tag*/ } },
/*          v3d_csd-10705   [002] .... 89183.195525: v3d_submit_csd: dev=1, seqno=32 */
/*789*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00020000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*790*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00200000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*791*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x0000f100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*792*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x000007ff/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*793*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00620005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*794*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x03ca0000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*795*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00020000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 89183.197276: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 89183.197277: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 89183.197278: v3d_csd_irq: dev=1, seqno=32 irq_delay:1.75 ms*/
/*  v3d_cache_clean-10706   [001] .... 89183.197297: v3d_cache_clean_begin: dev=1 */
/*796*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*797*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.197300: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*798*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*799*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.197302: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.197331: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89183.197332: v3d_cache_clean_end: dev=1 */
/*800*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*801*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*802*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0033"/*tag*/ } },
/*          v3d_csd-10705   [002] .... 89183.197534: v3d_submit_csd: dev=1, seqno=33 */
/*803*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*804*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00100000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*805*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*806*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x000001bf/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*807*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00680004/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*808*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x03cc0000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*809*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00070000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 89183.225626: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 89183.225628: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 89183.225629: v3d_csd_irq: dev=1, seqno=33 irq_delay:28.09 ms*/
/*  v3d_cache_clean-10706   [001] .... 89183.225650: v3d_cache_clean_begin: dev=1 */
/*810*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*811*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.225653: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*812*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*813*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.225655: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.225683: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89183.225684: v3d_cache_clean_end: dev=1 */
/*814*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*815*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*816*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0034"/*tag*/ } },
/*          v3d_csd-10705   [002] .... 89183.225920: v3d_submit_csd: dev=1, seqno=34 */
/*817*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00040000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*818*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00200000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*819*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*820*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x000007ff/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*821*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00600005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*822*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x03ce0000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*823*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00040000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 89183.226828: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 89183.226828: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 89183.226829: v3d_csd_irq: dev=1, seqno=34 irq_delay:0.91 ms*/
/*  v3d_cache_clean-10706   [001] .... 89183.226845: v3d_cache_clean_begin: dev=1 */
/*824*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*825*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.226847: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*826*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*827*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.226849: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.226877: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.226926: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89183.226927: v3d_cache_clean_end: dev=1 */
/*828*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*829*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*830*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0035"/*tag*/ } },
/*          v3d_csd-10705   [002] .... 89183.227098: v3d_submit_csd: dev=1, seqno=35 */
/*831*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00020000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*832*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00200000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*833*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x0000f100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*834*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x000007ff/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*835*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00620005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*836*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x03d00000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*837*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00020000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)  systemd-journal-120     [000] d.h. 89183.228847: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)  systemd-journal-120     [000] d.h. 89183.228849: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*  systemd-journal-120     [000] d.h. 89183.228850: v3d_csd_irq: dev=1, seqno=35 irq_delay:1.75 ms*/
/*  v3d_cache_clean-10706   [001] .... 89183.228872: v3d_cache_clean_begin: dev=1 */
/*838*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*839*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.228875: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*840*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*841*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.228877: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.228907: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89183.228908: v3d_cache_clean_end: dev=1 */
/*842*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*843*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*844*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0036"/*tag*/ } },
/*          v3d_csd-10705   [002] .... 89183.229141: v3d_submit_csd: dev=1, seqno=36 */
/*845*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*846*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00100000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*847*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*848*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x000001bf/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*849*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00680004/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*850*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x03d20000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*851*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00070000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 89183.257322: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 89183.257323: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 89183.257325: v3d_csd_irq: dev=1, seqno=36 irq_delay:28.18 ms*/
/*  v3d_cache_clean-10706   [001] .... 89183.257347: v3d_cache_clean_begin: dev=1 */
/*852*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*853*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.257350: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*854*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*855*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.257353: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.257383: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89183.257384: v3d_cache_clean_end: dev=1 */
/*856*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*857*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*858*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0037"/*tag*/ } },
/*          v3d_csd-10705   [002] .... 89183.257629: v3d_submit_csd: dev=1, seqno=37 */
/*859*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00040000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*860*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00200000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*861*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*862*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x000007ff/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*863*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00600005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*864*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x03d40000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*865*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00040000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 89183.258537: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 89183.258537: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 89183.258538: v3d_csd_irq: dev=1, seqno=37 irq_delay:0.91 ms*/
/*  v3d_cache_clean-10706   [001] .... 89183.258554: v3d_cache_clean_begin: dev=1 */
/*866*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*867*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.258559: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*868*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*869*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.258560: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.258591: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89183.258592: v3d_cache_clean_end: dev=1 */
/*870*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*871*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*872*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0038"/*tag*/ } },
/*          v3d_csd-10705   [002] .... 89183.258763: v3d_submit_csd: dev=1, seqno=38 */
/*873*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*874*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00200000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*875*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x0000c1c4/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*876*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x0000019f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*877*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x006a0005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*878*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x03d60000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*879*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00010000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)        in:imklog-423     [000] d.h2 89183.259212: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)        in:imklog-423     [000] d.h2 89183.259213: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*        in:imklog-423     [000] d.h2 89183.259214: v3d_csd_irq: dev=1, seqno=38 irq_delay:0.45 ms*/
/*  v3d_cache_clean-10706   [001] .... 89183.259230: v3d_cache_clean_begin: dev=1 */
/*880*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*881*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.259233: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*882*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*883*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.259235: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.259264: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89183.259265: v3d_cache_clean_end: dev=1 */
/*884*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*885*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*886*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0039"/*tag*/ } },
/*          v3d_csd-10705   [002] .... 89183.259556: v3d_submit_csd: dev=1, seqno=39 */
/*887*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*888*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00200000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*889*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*890*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x000000ff/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*891*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00720004/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*892*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x03d80000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*893*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00020000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 89183.275018: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 89183.275019: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 89183.275020: v3d_csd_irq: dev=1, seqno=39 irq_delay:15.46 ms*/
/*  v3d_cache_clean-10706   [001] .... 89183.275041: v3d_cache_clean_begin: dev=1 */
/*894*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*895*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.275044: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*896*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*897*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.275047: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.275076: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89183.275077: v3d_cache_clean_end: dev=1 */
/*898*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*899*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*900*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0040"/*tag*/ } },
/*          v3d_csd-10705   [002] .... 89183.275317: v3d_submit_csd: dev=1, seqno=40 */
/*901*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00030000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*902*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00400000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*903*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*904*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x000008ff/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*905*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00740005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*906*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x03da0000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*907*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00030000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 89183.276204: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 89183.276205: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 89183.276206: v3d_csd_irq: dev=1, seqno=40 irq_delay:0.89 ms*/
/*  v3d_cache_clean-10706   [001] .... 89183.276224: v3d_cache_clean_begin: dev=1 */
/*908*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*909*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.276226: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*910*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*911*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.276228: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.276257: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.276306: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89183.276306: v3d_cache_clean_end: dev=1 */
/*912*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*913*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*914*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0041"/*tag*/ } },
/*          v3d_csd-10705   [002] .... 89183.276493: v3d_submit_csd: dev=1, seqno=41 */
/*915*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*916*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00400000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*917*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x0000c1c4/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*918*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x0000033f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*919*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00760005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*920*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x03dc0000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*921*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00010000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 89183.277372: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 89183.277373: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 89183.277373: v3d_csd_irq: dev=1, seqno=41 irq_delay:0.88 ms*/
/*  v3d_cache_clean-10706   [001] .... 89183.277390: v3d_cache_clean_begin: dev=1 */
/*922*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*923*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.277392: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*924*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*925*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.277394: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.277422: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89183.277423: v3d_cache_clean_end: dev=1 */
/*926*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*927*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*928*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0042"/*tag*/ } },
/*          v3d_csd-10705   [002] .... 89183.277602: v3d_submit_csd: dev=1, seqno=42 */
/*929*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*930*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00200000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*931*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*932*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x000000ff/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*933*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x007c0004/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*934*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x03de0000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*935*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00020000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 89183.308118: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 89183.308120: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 89183.308121: v3d_csd_irq: dev=1, seqno=42 irq_delay:30.52 ms*/
/*  v3d_cache_clean-10706   [001] .... 89183.308142: v3d_cache_clean_begin: dev=1 */
/*936*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*937*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.308145: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*938*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*939*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.308147: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.308177: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89183.308178: v3d_cache_clean_end: dev=1 */
/*940*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*941*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*942*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0043"/*tag*/ } },
/*          v3d_csd-10705   [002] .... 89183.308413: v3d_submit_csd: dev=1, seqno=43 */
/*943*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*944*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*945*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*946*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x0000000f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*947*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x007e0005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*948*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x03e00000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*949*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00040000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 89183.308512: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 89183.308512: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 89183.308513: v3d_csd_irq: dev=1, seqno=43 irq_delay:0.10 ms*/
/*  v3d_cache_clean-10706   [001] .... 89183.308529: v3d_cache_clean_begin: dev=1 */
/*950*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*951*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.308531: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*952*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*953*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.308533: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.308561: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89183.308562: v3d_cache_clean_end: dev=1 */
/*954*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*955*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*956*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0044"/*tag*/ } },
/*          v3d_csd-10705   [002] .... 89183.308740: v3d_submit_csd: dev=1, seqno=44 */
/*957*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*958*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*959*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*960*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x0000000f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*961*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00820005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*962*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x03e20000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*963*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00040000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)           <idle>-0       [000] d.h1 89183.316684: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)           <idle>-0       [000] d.h1 89183.316686: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*           <idle>-0       [000] d.h1 89183.316687: v3d_csd_irq: dev=1, seqno=44 irq_delay:7.95 ms*/
/*  v3d_cache_clean-10706   [001] .... 89183.316708: v3d_cache_clean_begin: dev=1 */
/*964*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*965*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.316711: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*966*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*967*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.316713: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.316742: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89183.316744: v3d_cache_clean_end: dev=1 */
/*968*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*969*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*       v3d_render-10703   [000] .... 89183.316774: v3d_submit_cl: dev=1, RCL, seqno=2, 0x03f20000..0x03f2005f */
/*970*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "rcl_0002"/*tag*/ } },
/*971*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000164/*offset*/, 0x03f20000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CLE_CT1QBA" },
/*972*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000016c/*offset*/, 0x03f2005f/*val*/, 0/*core*/ }, -2/*irq_rcl*/, "V3D_CLE_CT1QEA" },
/* (skipped)       v3d_render-10703   [000] d.h1 89183.322355: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000001 core=0 */
/* (skipped)       v3d_render-10703   [000] d.h1 89183.322355: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000001 core=0 */
/*       v3d_render-10703   [000] d.h1 89183.322357: v3d_rcl_irq: dev=1, seqno=2 irq_delay:5.58 ms*/
/*973*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*974*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*975*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0045"/*tag*/ } },
/*          v3d_csd-10705   [002] .... 89183.322604: v3d_submit_csd: dev=1, seqno=45 */
/*976*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*977*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*978*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00000101/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*979*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x00000000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*980*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00880005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*981*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x03f60000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*982*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00010000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)  systemd-journal-120     [000] d.h. 89183.322886: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)  systemd-journal-120     [000] d.h. 89183.322888: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*  systemd-journal-120     [000] d.h. 89183.322889: v3d_csd_irq: dev=1, seqno=45 irq_delay:0.29 ms*/
/*  v3d_cache_clean-10706   [001] .... 89183.322909: v3d_cache_clean_begin: dev=1 */
/*983*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*984*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.322915: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*985*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*986*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.322918: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.322949: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89183.322950: v3d_cache_clean_end: dev=1 */
/*987*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*988*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*989*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0046"/*tag*/ } },
/*          v3d_csd-10705   [002] .... 89183.323293: v3d_submit_csd: dev=1, seqno=46 */
/*990*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*991*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*992*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*993*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x0000000f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*994*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00900005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*995*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x03f80000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*996*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00040000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/*    rs:main Q:Reg-424     [000] d.h. 89183.323307: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/*    rs:main Q:Reg-424     [000] d.h. 89183.323309: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*    rs:main Q:Reg-424     [000] d.h. 89183.323310: v3d_csd_irq: dev=1, seqno=46 irq_delay:0.02 ms*/
/*  v3d_cache_clean-10706   [001] .... 89183.323329: v3d_cache_clean_begin: dev=1 */
/*997*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*998*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.323332: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*999*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*1000*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.323334: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.323363: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89183.323364: v3d_cache_clean_end: dev=1 */
/*1001*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*1002*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*1003*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0047"/*tag*/ } },
/*          v3d_csd-10705   [002] .... 89183.323659: v3d_submit_csd: dev=1, seqno=47 */
/*1004*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*1005*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*1006*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00000101/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*1007*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x00000000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*1008*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x008a0005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*1009*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x03fa0000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*1010*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00010000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)  systemd-journal-120     [000] d.h. 89183.323808: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)  systemd-journal-120     [000] d.h. 89183.323809: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*  systemd-journal-120     [000] d.h. 89183.323810: v3d_csd_irq: dev=1, seqno=47 irq_delay:0.15 ms*/
/*  v3d_cache_clean-10706   [001] .... 89183.323830: v3d_cache_clean_begin: dev=1 */
/*1011*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*1012*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.323833: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*1013*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*1014*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.323835: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.323864: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89183.323865: v3d_cache_clean_end: dev=1 */
/*1015*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*1016*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*1017*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0048"/*tag*/ } },
/*          v3d_csd-10705   [002] .... 89183.324083: v3d_submit_csd: dev=1, seqno=48 */
/*1018*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*1019*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*1020*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*1021*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x0000000f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*1022*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00920005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*1023*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x03fc0000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*1024*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00040000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)  systemd-journal-120     [000] d.h. 89183.324228: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)  systemd-journal-120     [000] d.h. 89183.324229: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*  systemd-journal-120     [000] d.h. 89183.324230: v3d_csd_irq: dev=1, seqno=48 irq_delay:0.15 ms*/
/*  v3d_cache_clean-10706   [001] .... 89183.324247: v3d_cache_clean_begin: dev=1 */
/*1025*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*1026*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.324250: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*1027*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*1028*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.324252: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.324280: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89183.324281: v3d_cache_clean_end: dev=1 */
/*1029*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*1030*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*1031*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0049"/*tag*/ } },
/*          v3d_csd-10705   [002] .... 89183.324489: v3d_submit_csd: dev=1, seqno=49 */
/*1032*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*1033*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*1034*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00003140/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*1035*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x000000fb/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*1036*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x03840004/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*1037*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x03fe0000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*1038*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x003f0000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)  systemd-journal-120     [000] d.h. 89183.324635: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)  systemd-journal-120     [000] d.h. 89183.324636: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*  systemd-journal-120     [000] d.h. 89183.324636: v3d_csd_irq: dev=1, seqno=49 irq_delay:0.15 ms*/
/*  v3d_cache_clean-10706   [001] .... 89183.324654: v3d_cache_clean_begin: dev=1 */
/*1039*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*1040*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.324656: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*1041*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*1042*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.324658: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10706   [001] .... 89183.324687: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10706   [001] .... 89183.324688: v3d_cache_clean_end: dev=1 */
/*1043*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000940/*page*/, 0x00000800/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.340191: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.340194: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.340195: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.340196: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.340196: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.340197: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.340198: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.340199: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.340200: v3d_mmu_flush_end: dev=1 */
/*1044*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00001ac0/*page*/, 0x00000800/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.345624: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.345625: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.345626: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.345627: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.345627: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.345628: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.345629: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.345629: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.345630: v3d_mmu_flush_end: dev=1 */
/*1045*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00001140/*page*/, 0x00000800/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.350390: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.350391: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.350392: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.350394: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.350395: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.350395: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.350396: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.350397: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.350397: v3d_mmu_flush_end: dev=1 */
/* idle long delay = 0.07166800000413787 */
/*1046*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000022c0/*page*/, 0x00001000/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.422080: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.422082: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.422084: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.422085: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.422086: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.422086: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.422088: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.422088: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.422089: v3d_mmu_flush_end: dev=1 */
/*1047*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00001940/*page*/, 0x00000093/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.432094: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.432095: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.432096: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.432096: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.432097: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.432098: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.432098: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.432099: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.432100: v3d_mmu_flush_end: dev=1 */
/*1048*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000020/*page*/, 0x00000004/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.437794: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.437796: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.437797: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.437798: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.437799: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.437799: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.437800: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.437801: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.437802: v3d_mmu_flush_end: dev=1 */
/*1049*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000040/*page*/, 0x00000004/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.437879: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.437880: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.437880: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.437881: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.437881: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.437882: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.437883: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.437883: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.437884: v3d_mmu_flush_end: dev=1 */
/*1050*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00001a40/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.441570: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441572: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441574: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441575: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441575: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441576: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441577: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441578: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.441579: v3d_mmu_flush_end: dev=1 */
/*1051*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00001a60/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.441658: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441659: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441660: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441660: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441661: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441661: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441662: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441663: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.441663: v3d_mmu_flush_end: dev=1 */
/*1052*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00001a80/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.441694: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441695: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441695: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441696: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441696: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441697: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441697: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441698: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.441698: v3d_mmu_flush_end: dev=1 */
/*1053*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00001aa0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.441733: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441734: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441735: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441735: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441736: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441736: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441737: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441737: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.441738: v3d_mmu_flush_end: dev=1 */
/*1054*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000032c0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.441770: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441771: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441771: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441772: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441772: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441773: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441773: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441774: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.441774: v3d_mmu_flush_end: dev=1 */
/*1055*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000032e0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.441806: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441806: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441807: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441808: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441808: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441809: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441809: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441810: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.441811: v3d_mmu_flush_end: dev=1 */
/*1056*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003300/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.441843: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441843: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441844: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441844: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441845: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441845: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441846: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441847: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.441847: v3d_mmu_flush_end: dev=1 */
/*1057*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003320/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.441878: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441879: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441879: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441880: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441880: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441881: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441881: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441882: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.441882: v3d_mmu_flush_end: dev=1 */
/*1058*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003340/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.441913: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441913: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441914: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441914: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441915: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441915: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441916: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441916: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.441917: v3d_mmu_flush_end: dev=1 */
/*1059*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003360/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.441946: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441947: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441948: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441948: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441949: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441949: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441950: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441951: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.441953: v3d_mmu_flush_end: dev=1 */
/*1060*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003380/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.441984: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441985: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441986: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441986: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441987: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441987: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441988: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.441988: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.441989: v3d_mmu_flush_end: dev=1 */
/*1061*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000033a0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.442019: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442019: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442020: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442021: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442021: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442022: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442022: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442023: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.442024: v3d_mmu_flush_end: dev=1 */
/*1062*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000033c0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.442053: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442053: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442054: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442054: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442055: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442055: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442056: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442057: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.442057: v3d_mmu_flush_end: dev=1 */
/*1063*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000033e0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.442088: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442089: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442089: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442090: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442090: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442091: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442091: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442092: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.442092: v3d_mmu_flush_end: dev=1 */
/*1064*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003400/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.442125: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442125: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442126: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442126: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442127: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442127: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442128: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442129: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.442129: v3d_mmu_flush_end: dev=1 */
/*1065*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003420/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.442160: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442161: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442162: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442162: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442163: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442163: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442164: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442165: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.442165: v3d_mmu_flush_end: dev=1 */
/*1066*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003440/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.442195: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442195: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442196: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442196: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442197: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442197: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442198: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442199: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.442199: v3d_mmu_flush_end: dev=1 */
/*1067*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003460/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.442229: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442230: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442230: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442231: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442232: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442232: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442233: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442233: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.442234: v3d_mmu_flush_end: dev=1 */
/*1068*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003480/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.442264: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442264: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442265: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442265: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442266: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442266: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442267: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442268: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.442268: v3d_mmu_flush_end: dev=1 */
/*1069*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000034a0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.442298: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442298: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442299: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442300: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442300: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442301: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442301: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442302: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.442302: v3d_mmu_flush_end: dev=1 */
/*1070*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000034c0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.442335: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442335: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442336: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442336: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442337: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442337: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442338: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442338: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.442339: v3d_mmu_flush_end: dev=1 */
/*1071*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000034e0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.442369: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442370: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442370: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442371: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442371: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442372: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442372: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442373: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.442374: v3d_mmu_flush_end: dev=1 */
/*1072*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003500/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.442404: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442405: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442405: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442406: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442406: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442407: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442407: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442408: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.442408: v3d_mmu_flush_end: dev=1 */
/*1073*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003520/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.442439: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442440: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442441: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442441: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442442: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442442: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442443: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442444: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.442444: v3d_mmu_flush_end: dev=1 */
/*1074*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003540/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.442476: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442476: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442477: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442477: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442479: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442479: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442480: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442480: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.442481: v3d_mmu_flush_end: dev=1 */
/*1075*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003560/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.442512: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442512: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442513: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442513: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442514: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442514: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442515: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442516: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.442516: v3d_mmu_flush_end: dev=1 */
/*1076*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003580/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.442547: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442547: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442548: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442549: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442549: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442550: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442550: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442551: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.442551: v3d_mmu_flush_end: dev=1 */
/*1077*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000035a0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.442581: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442582: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442583: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442583: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442584: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442584: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442585: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442585: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.442586: v3d_mmu_flush_end: dev=1 */
/*1078*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000035c0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.442615: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442616: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442617: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442617: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442618: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442618: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442619: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442620: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.442620: v3d_mmu_flush_end: dev=1 */
/*1079*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000035e0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.442650: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442650: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442651: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442651: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442652: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442652: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442653: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442654: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.442654: v3d_mmu_flush_end: dev=1 */
/*1080*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003600/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.442707: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442707: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442708: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442709: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442709: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442710: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442710: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442711: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.442711: v3d_mmu_flush_end: dev=1 */
/*1081*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003620/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.442740: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442740: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442741: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442742: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442742: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442742: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442743: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442744: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.442744: v3d_mmu_flush_end: dev=1 */
/*1082*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003640/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.442773: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442774: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442775: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442775: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442776: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442776: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442777: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442777: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.442778: v3d_mmu_flush_end: dev=1 */
/*1083*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003660/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.442806: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442807: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442808: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442808: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442809: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442809: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442810: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442810: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.442811: v3d_mmu_flush_end: dev=1 */
/*1084*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003680/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.442841: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442841: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442842: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442843: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442843: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442844: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442844: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442845: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.442845: v3d_mmu_flush_end: dev=1 */
/*1085*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000036a0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.442874: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442875: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442876: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442876: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442877: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442877: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442878: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442878: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.442879: v3d_mmu_flush_end: dev=1 */
/*1086*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000036c0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.442910: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442911: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442912: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442912: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442913: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442913: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442914: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442915: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.442915: v3d_mmu_flush_end: dev=1 */
/*1087*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000036e0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.442945: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442945: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442946: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442946: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442947: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442947: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442948: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442949: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.442949: v3d_mmu_flush_end: dev=1 */
/*1088*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003700/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.442979: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442980: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442980: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442981: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442981: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442982: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442983: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.442983: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.442984: v3d_mmu_flush_end: dev=1 */
/*1089*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003720/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.443014: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443014: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443015: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443016: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443016: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443017: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443017: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443018: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.443018: v3d_mmu_flush_end: dev=1 */
/*1090*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003740/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.443048: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443048: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443049: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443050: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443050: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443051: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443051: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443052: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.443052: v3d_mmu_flush_end: dev=1 */
/*1091*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003760/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.443082: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443082: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443083: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443083: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443084: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443084: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443085: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443086: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.443086: v3d_mmu_flush_end: dev=1 */
/*1092*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003780/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.443116: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443116: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443117: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443117: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443118: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443119: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443119: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443120: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.443120: v3d_mmu_flush_end: dev=1 */
/*1093*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000037a0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.443150: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443150: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443151: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443151: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443245: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443245: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443246: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443246: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.443247: v3d_mmu_flush_end: dev=1 */
/*1094*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000037c0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.443281: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443282: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443283: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443283: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443284: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443284: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443285: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443285: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.443286: v3d_mmu_flush_end: dev=1 */
/*1095*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000037e0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.443317: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443318: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443318: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443319: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443319: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443320: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443320: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443321: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.443321: v3d_mmu_flush_end: dev=1 */
/*1096*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003800/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.443351: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443352: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443352: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443353: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443353: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443354: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443355: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443355: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.443356: v3d_mmu_flush_end: dev=1 */
/*1097*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003820/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.443385: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443385: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443386: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443386: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443387: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443387: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443388: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443389: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.443389: v3d_mmu_flush_end: dev=1 */
/*1098*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000038a0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.443420: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443420: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443421: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443422: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443422: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443422: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443423: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443424: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.443424: v3d_mmu_flush_end: dev=1 */
/*1099*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000038c0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.443460: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443461: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443462: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443462: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443463: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443463: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443464: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443465: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.443465: v3d_mmu_flush_end: dev=1 */
/*1100*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000038e0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.443498: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443499: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443500: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443500: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443501: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443501: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443502: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443503: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.443504: v3d_mmu_flush_end: dev=1 */
/*1101*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003900/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.443536: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443536: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443537: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443537: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443538: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443538: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443539: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443540: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.443540: v3d_mmu_flush_end: dev=1 */
/*1102*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003920/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.443572: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443572: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443573: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443573: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443574: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443574: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443575: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443576: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.443576: v3d_mmu_flush_end: dev=1 */
/*1103*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003940/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.443609: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443609: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443610: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443610: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443612: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443612: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443613: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443613: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.443614: v3d_mmu_flush_end: dev=1 */
/*1104*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003960/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.443646: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443646: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443647: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443647: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443648: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443648: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443649: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443650: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.443650: v3d_mmu_flush_end: dev=1 */
/*1105*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003980/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.443681: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443682: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443683: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443683: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443684: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443684: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443685: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443686: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.443686: v3d_mmu_flush_end: dev=1 */
/*1106*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000039a0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.443717: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443718: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443719: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443719: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443720: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443720: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443721: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443721: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.443722: v3d_mmu_flush_end: dev=1 */
/*1107*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000039c0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.443753: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443754: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443755: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443755: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443755: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443756: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443757: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443757: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.443758: v3d_mmu_flush_end: dev=1 */
/*1108*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000039e0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.443791: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443791: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443792: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443792: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443793: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443794: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443794: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443795: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.443795: v3d_mmu_flush_end: dev=1 */
/*1109*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003a00/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.443830: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443830: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443831: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443832: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443832: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443833: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443834: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443834: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.443835: v3d_mmu_flush_end: dev=1 */
/*1110*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003a20/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.443867: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443867: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443868: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443868: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443869: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443869: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443870: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443871: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.443871: v3d_mmu_flush_end: dev=1 */
/*1111*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003a40/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.443903: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443904: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443904: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443905: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443905: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443906: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443906: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443907: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.443907: v3d_mmu_flush_end: dev=1 */
/*1112*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003a60/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.443939: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443940: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443940: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443941: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443941: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443942: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443942: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443943: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.443943: v3d_mmu_flush_end: dev=1 */
/*1113*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003a80/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.443975: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443976: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443976: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443977: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443977: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443978: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443978: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.443979: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.443980: v3d_mmu_flush_end: dev=1 */
/*1114*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003aa0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.444011: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444011: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444012: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444012: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444013: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444013: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444014: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444015: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.444015: v3d_mmu_flush_end: dev=1 */
/*1115*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003ac0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.444048: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444049: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444050: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444050: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444051: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444051: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444052: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444052: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.444053: v3d_mmu_flush_end: dev=1 */
/*1116*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003ae0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.444087: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444088: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444088: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444089: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444089: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444090: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444090: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444091: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.444091: v3d_mmu_flush_end: dev=1 */
/*1117*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003b00/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.444124: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444124: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444125: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444126: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444126: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444127: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444127: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444128: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.444129: v3d_mmu_flush_end: dev=1 */
/*1118*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003b20/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.444161: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444161: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444162: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444162: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444163: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444163: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444164: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444165: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.444165: v3d_mmu_flush_end: dev=1 */
/*1119*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003b40/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.444197: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444198: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444199: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444199: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444200: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444200: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444201: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444201: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.444202: v3d_mmu_flush_end: dev=1 */
/*1120*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003b60/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.444234: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444234: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444235: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444235: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444236: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444236: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444237: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444238: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.444238: v3d_mmu_flush_end: dev=1 */
/*1121*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003b80/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.444271: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444272: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444273: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444273: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444274: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444274: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444275: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444276: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.444276: v3d_mmu_flush_end: dev=1 */
/*1122*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003ba0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.444309: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444310: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444310: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444311: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444311: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444312: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444312: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444313: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.444313: v3d_mmu_flush_end: dev=1 */
/*1123*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003bc0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.444347: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444348: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444348: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444349: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444349: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444350: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444350: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444351: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.444351: v3d_mmu_flush_end: dev=1 */
/*1124*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003be0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.444385: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444386: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444387: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444387: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444388: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444388: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444389: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444389: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.444390: v3d_mmu_flush_end: dev=1 */
/*1125*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003c00/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.444422: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444423: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444423: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444424: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444424: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444425: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444426: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444426: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.444427: v3d_mmu_flush_end: dev=1 */
/*1126*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003c20/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.444459: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444460: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444461: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444461: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444462: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444462: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444463: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444463: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.444464: v3d_mmu_flush_end: dev=1 */
/*1127*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003c40/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.444497: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444497: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444498: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444498: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444499: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444499: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444500: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444501: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.444501: v3d_mmu_flush_end: dev=1 */
/*1128*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003c60/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.444534: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444535: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444535: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444536: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444536: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444537: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444538: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444538: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.444539: v3d_mmu_flush_end: dev=1 */
/*1129*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003c80/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.444571: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444571: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444572: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444573: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444573: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444574: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444574: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444575: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.444576: v3d_mmu_flush_end: dev=1 */
/*1130*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003ca0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.444608: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444609: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444609: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444610: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444610: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444611: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444611: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444612: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.444612: v3d_mmu_flush_end: dev=1 */
/*1131*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003cc0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.444645: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444646: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444646: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444647: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444647: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444648: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444648: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444649: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.444649: v3d_mmu_flush_end: dev=1 */
/*1132*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003ce0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.444683: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444684: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444684: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444685: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444686: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444686: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444687: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444688: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.444688: v3d_mmu_flush_end: dev=1 */
/*1133*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003d00/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.444720: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444720: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444721: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444722: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444722: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444723: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444723: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444724: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.444724: v3d_mmu_flush_end: dev=1 */
/*1134*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003d20/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.444756: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444757: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444757: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444758: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444758: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444759: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444760: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444760: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.444761: v3d_mmu_flush_end: dev=1 */
/*1135*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003d40/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.444793: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444794: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444795: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444795: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444796: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444796: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444797: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444797: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.444798: v3d_mmu_flush_end: dev=1 */
/*1136*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003d60/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.444830: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444831: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444832: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444832: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444833: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444833: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444834: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444835: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.444835: v3d_mmu_flush_end: dev=1 */
/*1137*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003d80/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.444866: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444867: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444868: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444868: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444869: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444869: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444870: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444870: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.444871: v3d_mmu_flush_end: dev=1 */
/*1138*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003da0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.444903: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444903: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444904: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444905: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444905: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444906: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444906: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444907: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.444908: v3d_mmu_flush_end: dev=1 */
/*1139*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003dc0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.444939: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444939: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444940: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444941: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444941: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444941: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444942: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444943: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.444943: v3d_mmu_flush_end: dev=1 */
/*1140*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003de0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.444975: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444976: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444976: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444977: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444977: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444978: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444978: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.444979: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.444979: v3d_mmu_flush_end: dev=1 */
/*1141*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003e00/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.445011: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445011: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445012: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445013: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445013: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445013: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445014: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445015: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.445015: v3d_mmu_flush_end: dev=1 */
/*1142*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003e20/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.445047: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445048: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445048: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445049: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445049: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445050: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445050: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445051: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.445052: v3d_mmu_flush_end: dev=1 */
/*1143*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003e40/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.445107: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445107: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445108: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445109: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445109: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445110: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445110: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445111: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.445111: v3d_mmu_flush_end: dev=1 */
/*1144*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003f20/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.445144: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445145: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445146: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445146: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445147: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445147: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445148: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445148: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.445149: v3d_mmu_flush_end: dev=1 */
/*1145*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003f40/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.445182: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445182: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445183: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445183: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445184: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445184: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445185: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445186: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.445186: v3d_mmu_flush_end: dev=1 */
/*1146*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003e60/*page*/, 0x00000083/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.445211: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445212: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445212: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445213: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445214: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445214: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445215: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445215: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.445216: v3d_mmu_flush_end: dev=1 */
/*1147*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003f00/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.445567: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445568: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445569: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445569: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445570: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445570: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445571: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445571: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.445572: v3d_mmu_flush_end: dev=1 */
/*1148*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003f60/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.445604: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445605: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445605: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445606: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445606: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445607: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445607: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445608: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.445608: v3d_mmu_flush_end: dev=1 */
/*1149*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003f80/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.445640: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445641: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445641: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445642: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445642: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445643: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445643: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445644: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.445644: v3d_mmu_flush_end: dev=1 */
/*1150*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003fa0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.445676: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445677: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445677: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445678: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445678: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445679: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445680: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445680: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.445681: v3d_mmu_flush_end: dev=1 */
/*1151*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003fc0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.445713: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445713: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445714: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445714: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445715: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445715: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445716: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445717: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.445717: v3d_mmu_flush_end: dev=1 */
/*1152*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003fe0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.445749: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445749: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445750: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445750: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445751: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445751: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445752: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445753: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.445753: v3d_mmu_flush_end: dev=1 */
/*1153*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000060/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.445789: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445790: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445790: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445791: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445791: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445792: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445792: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445793: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.445793: v3d_mmu_flush_end: dev=1 */
/*1154*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000140/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.445829: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445829: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445830: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445831: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445831: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445832: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445832: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445833: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.445833: v3d_mmu_flush_end: dev=1 */
/*1155*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000160/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.445866: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445867: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445868: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445868: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445869: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445869: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445870: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445870: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.445871: v3d_mmu_flush_end: dev=1 */
/*1156*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000080/*page*/, 0x00000083/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.445897: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445898: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445899: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445899: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445900: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445900: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445901: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.445901: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.445902: v3d_mmu_flush_end: dev=1 */
/*1157*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000120/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.446284: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446285: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446286: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446286: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446287: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446287: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446288: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446288: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.446289: v3d_mmu_flush_end: dev=1 */
/*1158*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000200/*page*/, 0x00000002/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.446333: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446333: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446334: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446335: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446335: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446336: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446336: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446337: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.446338: v3d_mmu_flush_end: dev=1 */
/*1159*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000860/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.446377: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446378: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446379: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446379: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446380: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446380: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446381: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446381: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.446382: v3d_mmu_flush_end: dev=1 */
/*1160*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000720/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.446430: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446431: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446431: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446432: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446432: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446433: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446433: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446434: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.446434: v3d_mmu_flush_end: dev=1 */
/*1161*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000300/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.446471: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446472: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446472: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446473: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446474: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446475: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446475: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446476: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.446476: v3d_mmu_flush_end: dev=1 */
/*1162*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000760/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.446511: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446512: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446513: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446513: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446514: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446514: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446515: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446515: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.446516: v3d_mmu_flush_end: dev=1 */
/*1163*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000001e0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.446548: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446549: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446550: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446550: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446551: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446551: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446552: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446553: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.446553: v3d_mmu_flush_end: dev=1 */
/*1164*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000580/*page*/, 0x00000002/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.446588: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446589: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446590: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446590: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446591: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446591: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446592: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446592: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.446593: v3d_mmu_flush_end: dev=1 */
/*1165*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000260/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.446632: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446634: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446634: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446635: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446635: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446636: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446636: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446637: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.446637: v3d_mmu_flush_end: dev=1 */
/*1166*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000700/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.446671: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446671: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446672: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446673: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446673: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446673: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446674: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446675: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.446675: v3d_mmu_flush_end: dev=1 */
/*1167*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003880/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.446707: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446708: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446708: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446709: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446710: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446710: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446711: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446711: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.446712: v3d_mmu_flush_end: dev=1 */
/*1168*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000460/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.446745: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446746: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446746: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446747: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446747: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446748: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446748: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446749: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.446749: v3d_mmu_flush_end: dev=1 */
/*1169*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000480/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.446783: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446783: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446784: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446784: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446785: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446785: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446786: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446787: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.446787: v3d_mmu_flush_end: dev=1 */
/*1170*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000001c0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.446821: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446821: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446822: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446822: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446823: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446823: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446824: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446825: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.446825: v3d_mmu_flush_end: dev=1 */
/*1171*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000006e0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.446858: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446858: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446859: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446860: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446860: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446861: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446861: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446862: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.446862: v3d_mmu_flush_end: dev=1 */
/*1172*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000380/*page*/, 0x00000002/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.446896: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446897: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446897: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446898: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446898: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446899: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446899: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446900: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.446900: v3d_mmu_flush_end: dev=1 */
/*1173*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000002e0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.446936: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446937: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446938: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446938: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446939: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446939: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446940: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446940: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.446941: v3d_mmu_flush_end: dev=1 */
/*1174*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000500/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.446974: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446975: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446976: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446976: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446977: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446977: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446978: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.446978: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.446979: v3d_mmu_flush_end: dev=1 */
/*1175*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000740/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.447010: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447011: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447012: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447012: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447013: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447013: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447014: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447015: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.447015: v3d_mmu_flush_end: dev=1 */
/*1176*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000004c0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.447049: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447050: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447051: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447051: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447052: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447052: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447053: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447053: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.447054: v3d_mmu_flush_end: dev=1 */
/*1177*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000900/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.447087: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447088: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447089: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447089: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447090: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447090: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447091: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447091: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.447092: v3d_mmu_flush_end: dev=1 */
/*1178*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000008a0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.447126: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447127: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447127: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447128: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447128: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447129: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447130: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447130: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.447131: v3d_mmu_flush_end: dev=1 */
/*1179*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003860/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.447194: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447195: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447195: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447196: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447197: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447197: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447198: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447198: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.447200: v3d_mmu_flush_end: dev=1 */
/*1180*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000008e0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.447234: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447235: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447236: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447236: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447237: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447237: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447238: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447238: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.447239: v3d_mmu_flush_end: dev=1 */
/*1181*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000840/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.447272: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447272: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447273: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447273: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447274: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447274: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447275: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447276: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.447276: v3d_mmu_flush_end: dev=1 */
/*1182*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000320/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.447324: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447324: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447325: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447325: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447326: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447326: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447327: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447328: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.447328: v3d_mmu_flush_end: dev=1 */
/*1183*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000800/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.447362: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447363: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447363: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447364: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447365: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447365: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447366: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447366: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.447367: v3d_mmu_flush_end: dev=1 */
/*1184*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000780/*page*/, 0x00000002/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.447400: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447400: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447401: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447401: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447402: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447402: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447403: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447404: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.447404: v3d_mmu_flush_end: dev=1 */
/*1185*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00003840/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.447448: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447449: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447450: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447450: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447451: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447451: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447452: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447452: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.447453: v3d_mmu_flush_end: dev=1 */
/*1186*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000540/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.447487: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447488: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447489: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447489: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447490: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447490: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447491: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447491: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.447492: v3d_mmu_flush_end: dev=1 */
/*1187*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000280/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.447526: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447527: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447527: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447528: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447528: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447529: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447530: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447530: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.447531: v3d_mmu_flush_end: dev=1 */
/*1188*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000820/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.447563: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447564: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447565: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447565: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447566: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447566: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447567: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447567: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.447568: v3d_mmu_flush_end: dev=1 */
/*1189*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000180/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.447601: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447602: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447603: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447603: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447604: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447604: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447605: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447605: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.447606: v3d_mmu_flush_end: dev=1 */
/*1190*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000360/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.447638: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447638: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447639: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447639: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447641: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447641: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447642: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447642: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.447643: v3d_mmu_flush_end: dev=1 */
/*1191*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000620/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.447676: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447677: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447677: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447678: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447678: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447679: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447679: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447680: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.447680: v3d_mmu_flush_end: dev=1 */
/*1192*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000007a0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.447714: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447715: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447716: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447716: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447717: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447717: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447718: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447719: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.447719: v3d_mmu_flush_end: dev=1 */
/*1193*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000880/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.447751: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447752: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447752: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447753: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447754: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447754: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447755: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447755: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.447756: v3d_mmu_flush_end: dev=1 */
/*1194*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000660/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.447788: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447789: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447790: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447790: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447791: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447791: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447792: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447793: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.447793: v3d_mmu_flush_end: dev=1 */
/*1195*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000920/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.447826: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447827: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447828: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447828: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447829: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447829: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447830: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447830: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.447831: v3d_mmu_flush_end: dev=1 */
/*1196*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000240/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.447863: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447864: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447865: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447865: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447866: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447866: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447867: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447868: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.447868: v3d_mmu_flush_end: dev=1 */
/*1197*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000004e0/*page*/, 0x00000002/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.447901: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447902: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447902: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447903: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447903: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447904: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447904: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447905: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.447905: v3d_mmu_flush_end: dev=1 */
/*1198*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000008c0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.447941: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447942: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447942: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447943: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447943: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447944: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447944: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447945: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.447945: v3d_mmu_flush_end: dev=1 */
/*1199*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00001a20/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.447977: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447978: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447978: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447979: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447979: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447980: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447980: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.447981: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.447981: v3d_mmu_flush_end: dev=1 */
/*1200*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000560/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.448014: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448015: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448016: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448016: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448017: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448017: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448018: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448019: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.448019: v3d_mmu_flush_end: dev=1 */
/*1201*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000005e0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.448053: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448054: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448055: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448055: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448056: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448056: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448057: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448057: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.448058: v3d_mmu_flush_end: dev=1 */
/*1202*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000600/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.448090: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448091: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448092: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448092: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448093: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448093: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448094: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448094: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.448095: v3d_mmu_flush_end: dev=1 */
/*1203*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000440/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.448127: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448128: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448128: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448129: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448129: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448130: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448130: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448131: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.448131: v3d_mmu_flush_end: dev=1 */
/*1204*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000005a0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.448163: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448164: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448165: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448165: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448166: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448166: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448167: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448167: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.448168: v3d_mmu_flush_end: dev=1 */
/*1205*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000002a0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.448200: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448200: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448201: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448201: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448202: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448202: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448203: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448204: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.448204: v3d_mmu_flush_end: dev=1 */
/*1206*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000006c0/*page*/, 0x00000002/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.448240: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448241: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448241: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448242: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448242: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448243: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448243: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448244: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.448244: v3d_mmu_flush_end: dev=1 */
/*1207*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000002c0/*page*/, 0x00000002/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.448281: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448281: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448282: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448282: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448283: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448283: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448284: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448285: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.448285: v3d_mmu_flush_end: dev=1 */
/*1208*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000340/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.448319: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448320: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448321: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448321: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448322: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448322: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448323: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448324: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.448324: v3d_mmu_flush_end: dev=1 */
/*1209*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000003c0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.448358: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448359: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448360: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448360: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448361: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448361: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448362: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448362: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.448363: v3d_mmu_flush_end: dev=1 */
/*1210*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000400/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.448395: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448396: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448397: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448397: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448398: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448398: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448399: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448399: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.448400: v3d_mmu_flush_end: dev=1 */
/*1211*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000003a0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.448435: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448436: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448437: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448437: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448438: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448438: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448439: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448439: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.448440: v3d_mmu_flush_end: dev=1 */
/*1212*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00001a00/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.448472: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448473: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448473: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448474: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448474: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448475: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448476: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448476: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.448477: v3d_mmu_flush_end: dev=1 */
/*1213*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000007c0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.448508: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448508: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448509: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448509: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448510: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448510: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448511: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448512: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.448512: v3d_mmu_flush_end: dev=1 */
/*1214*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000680/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.448544: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448545: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448546: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448546: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448547: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448547: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448548: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448549: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.448549: v3d_mmu_flush_end: dev=1 */
/*1215*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000004a0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.448581: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448582: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448583: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448583: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448584: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448584: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448585: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448585: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.448586: v3d_mmu_flush_end: dev=1 */
/*1216*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000005c0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.448617: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448618: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448619: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448619: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448620: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448620: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448621: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448622: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.448622: v3d_mmu_flush_end: dev=1 */
/*1217*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000640/*page*/, 0x00000002/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.448653: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448654: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448654: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448655: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448655: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448656: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448656: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448657: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.448657: v3d_mmu_flush_end: dev=1 */
/*1218*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000001a0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.448694: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448695: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448695: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448696: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448696: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448697: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448698: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448698: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.448699: v3d_mmu_flush_end: dev=1 */
/*1219*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000006a0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.448732: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448733: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448734: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448734: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448736: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448736: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448737: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448737: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.448738: v3d_mmu_flush_end: dev=1 */
/*1220*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000003e0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.448770: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448771: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448771: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448772: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448772: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448773: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448773: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448774: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.448775: v3d_mmu_flush_end: dev=1 */
/*1221*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000220/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.448808: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448809: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448809: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448810: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448810: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448811: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448811: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448812: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.448812: v3d_mmu_flush_end: dev=1 */
/*1222*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000007e0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.448846: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448846: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448847: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448847: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448848: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448848: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448849: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448850: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.448850: v3d_mmu_flush_end: dev=1 */
/*1223*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000019e0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.448884: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448885: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448886: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448886: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448887: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448887: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448888: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448888: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.448889: v3d_mmu_flush_end: dev=1 */
/*1224*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000420/*page*/, 0x00000002/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.448925: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448926: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448926: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448927: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448927: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448928: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448928: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448929: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.448929: v3d_mmu_flush_end: dev=1 */
/*1225*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000520/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*        benchncnn-10764   [001] .... 89183.448964: v3d_mmu_flush_begin: dev=1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448965: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448965: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448966: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448966: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448967: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448967: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)        benchncnn-10764   [001] .... 89183.448968: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*        benchncnn-10764   [001] .... 89183.448968: v3d_mmu_flush_end: dev=1 */

		{.type = type_eof /* last one */ }
};

// trace time range [ 89179.775471 -- 89183.448968 ] elapsed 3.673497
// #badlines = 66; total_long_delay 1.47 idle 1.47 (1.00)
// total_irq_delay 0.40	max_mem 10840 pages 42.34 MBs
// #jobs: 66 b/r/c/t 2/2/49/13 #irqs:66

				struct v3d_recording recording_mobilenet = {
					.name = "mobilenet", 
					.records = v3d_records_mobilenet,
					.path = "/data/rpi4-workspace/trace-test/mobilenet"				
			};
			
