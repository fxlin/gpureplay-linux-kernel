// auto generated. do not edit
// input trace:  /data/rpi4-workspace/trace-test/headless/ftrace.txt
 
struct record_entry __maybe_unused v3d_records_headless [] = { 
/*1*/{type_access_reg, .entry_access_reg = { "core", 'r', 0x00000000/*offset*/, 0x04443356/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_IDENT0" },
/*2*/{type_access_reg, .entry_access_reg = { "core", 'r', 0x00000004/*offset*/, 0x81001422/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_IDENT1" },
/*3*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000020/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*  computeheadless-10502   [000] .... 88206.979353: v3d_mmu_flush_begin: dev=1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.979355: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.979356: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.979357: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.979358: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.979359: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.979360: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.979361: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*  computeheadless-10502   [000] .... 88206.979362: v3d_mmu_flush_end: dev=1 */
/*4*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000040/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*  computeheadless-10502   [000] .... 88206.979496: v3d_mmu_flush_begin: dev=1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.979496: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.979497: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.979498: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.979498: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.979499: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.979499: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.979500: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*  computeheadless-10502   [000] .... 88206.979501: v3d_mmu_flush_end: dev=1 */
/*5*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000060/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*  computeheadless-10502   [000] .... 88206.979542: v3d_mmu_flush_begin: dev=1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.979543: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.979544: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.979544: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.979545: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.979545: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.979546: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.979547: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*  computeheadless-10502   [000] .... 88206.979547: v3d_mmu_flush_end: dev=1 */
/*6*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000080/*page*/, 0x00000083/*num_pages*/, 1/*is_map*/ } },
/*  computeheadless-10502   [000] .... 88206.980462: v3d_mmu_flush_begin: dev=1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.980464: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.980465: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.980465: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.980466: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.980467: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.980468: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.980468: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*  computeheadless-10502   [000] .... 88206.980469: v3d_mmu_flush_end: dev=1 */
/*7*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000120/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*  computeheadless-10502   [000] .... 88206.980625: v3d_mmu_flush_begin: dev=1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.980626: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.980626: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.980627: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.980628: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.980628: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.980629: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.980630: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*  computeheadless-10502   [000] .... 88206.980630: v3d_mmu_flush_end: dev=1 */
/*8*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000140/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*  computeheadless-10502   [000] .... 88206.980681: v3d_mmu_flush_begin: dev=1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.980681: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.980682: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.980682: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.980683: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.980683: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.980684: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.980685: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*  computeheadless-10502   [000] .... 88206.980685: v3d_mmu_flush_end: dev=1 */
/*9*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000160/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*  computeheadless-10502   [000] .... 88206.980744: v3d_mmu_flush_begin: dev=1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.980745: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.980746: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.980746: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.980747: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.980747: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.980748: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.980748: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*  computeheadless-10502   [000] .... 88206.980749: v3d_mmu_flush_end: dev=1 */
/*  computeheadless-10502   [000] .... 88206.980796: v3d_submit_cl_ioctl: dev=1, RCL 0x00140000..0x0014005f */
/*10*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000030c/*offset*/, 0x00000000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_PTB_BPOS" },
/*11*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*12*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*          v3d_bin-10483   [003] .... 88206.980884: v3d_submit_cl: dev=1, BCL, seqno=1, 0x00060000..0x0006000e */
/*13*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "bcl_0001"/*tag*/ } },
/*14*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000170/*offset*/, 0x00080000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CLE_CT0QMA" },
/*15*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000174/*offset*/, 0x00083000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CLE_CT0QMS" },
/*16*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000015c/*offset*/, 0x00120002/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CLE_CT0QTS" },
/*17*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000160/*offset*/, 0x00060000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CLE_CT0QBA" },
/*18*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000168/*offset*/, 0x0006000e/*val*/, 0/*core*/ }, -1/*irq_bcl*/, "V3D_CLE_CT0QEA" },
/* (skipped)  computeheadless-10502   [000] d.h1 88206.981202: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000002 core=0 */
/* (skipped)  computeheadless-10502   [000] d.h1 88206.981204: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000002 core=0 */
/*  computeheadless-10502   [000] d.h1 88206.981205: v3d_bcl_irq: dev=1, seqno=1 irq_delay:0.32 ms*/
/*19*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*20*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*       v3d_render-10484   [000] .... 88206.981230: v3d_submit_cl: dev=1, RCL, seqno=1, 0x00140000..0x0014005f */
/*21*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "rcl_0001"/*tag*/ } },
/*22*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000164/*offset*/, 0x00140000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CLE_CT1QBA" },
/*23*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000016c/*offset*/, 0x0014005f/*val*/, 0/*core*/ }, -2/*irq_rcl*/, "V3D_CLE_CT1QEA" },
/* (skipped)       v3d_render-10484   [000] d.h1 88206.981618: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000001 core=0 */
/* (skipped)       v3d_render-10484   [000] d.h1 88206.981618: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000001 core=0 */
/*       v3d_render-10484   [000] d.h1 88206.981620: v3d_rcl_irq: dev=1, seqno=1 irq_delay:0.39 ms*/
/*24*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000180/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*  computeheadless-10502   [000] .... 88206.988844: v3d_mmu_flush_begin: dev=1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.988846: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.988847: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.988848: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.988849: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.988849: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.988850: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.988851: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*  computeheadless-10502   [000] .... 88206.988852: v3d_mmu_flush_end: dev=1 */
/*25*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000001a0/*page*/, 0x00000001/*num_pages*/, 1/*is_map*/ } },
/*  computeheadless-10502   [000] .... 88206.988930: v3d_mmu_flush_begin: dev=1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.988931: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.988932: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.988932: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.988933: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.988933: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.988934: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.988934: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*  computeheadless-10502   [000] .... 88206.988935: v3d_mmu_flush_end: dev=1 */
/*  computeheadless-10502   [000] .... 88206.988987: v3d_submit_csd_ioctl: dev=1, CFG5 0x00060005, CFG6 0x00140000 */
/*  computeheadless-10502   [000] .... 88206.989032: v3d_submit_cl_ioctl: dev=1, RCL 0x00180000..0x0018005f */
/*26*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*27*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*28*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000030c/*offset*/, 0x00000000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_PTB_BPOS" },
/*29*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*30*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*          v3d_bin-10483   [000] .... 88206.989107: v3d_submit_cl: dev=1, BCL, seqno=2, 0x00160000..0x0016000e */
/*31*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0001"/*tag*/ } },
/*          v3d_csd-10486   [003] .... 88206.989356: v3d_submit_csd: dev=1, seqno=1 */
/*32*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*33*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*34*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x00000101/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*35*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x0000001f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*36*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00060005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*37*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x00140000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*38*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00200000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)          v3d_bin-10483   [000] d.h1 88206.989483: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)          v3d_bin-10483   [000] d.h1 88206.989485: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*          v3d_bin-10483   [000] d.h1 88206.989486: v3d_csd_irq: dev=1, seqno=1 irq_delay:0.13 ms*/
/*  v3d_cache_clean-10487   [001] .... 88206.989509: v3d_cache_clean_begin: dev=1 */
/*39*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*40*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10487   [001] .... 88206.989513: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*41*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*42*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-10487   [001] .... 88206.989515: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-10487   [001] .... 88206.989545: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-10487   [001] .... 88206.989547: v3d_cache_clean_end: dev=1 */
/*43*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "bcl_0002"/*tag*/ } },
/*44*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000170/*offset*/, 0x00080000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CLE_CT0QMA" },
/*45*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000174/*offset*/, 0x00083000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CLE_CT0QMS" },
/*46*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000015c/*offset*/, 0x00120002/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CLE_CT0QTS" },
/*47*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000160/*offset*/, 0x00160000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CLE_CT0QBA" },
/*48*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000168/*offset*/, 0x0016000e/*val*/, 0/*core*/ }, -1/*irq_bcl*/, "V3D_CLE_CT0QEA" },
/* (skipped)          v3d_bin-10483   [000] d.h1 88206.989657: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000002 core=0 */
/* (skipped)          v3d_bin-10483   [000] d.h1 88206.989658: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000002 core=0 */
/*          v3d_bin-10483   [000] d.h1 88206.989659: v3d_bcl_irq: dev=1, seqno=2 irq_delay:0.55 ms*/
/*49*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*50*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*       v3d_render-10484   [000] .... 88206.989705: v3d_submit_cl: dev=1, RCL, seqno=2, 0x00180000..0x0018005f */
/*51*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "rcl_0002"/*tag*/ } },
/*52*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000164/*offset*/, 0x00180000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CLE_CT1QBA" },
/*53*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000016c/*offset*/, 0x0018005f/*val*/, 0/*core*/ }, -2/*irq_rcl*/, "V3D_CLE_CT1QEA" },
/* (skipped)       v3d_render-10484   [000] d.h1 88206.989993: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000001 core=0 */
/* (skipped)       v3d_render-10484   [000] d.h1 88206.989994: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000001 core=0 */
/*       v3d_render-10484   [000] d.h1 88206.989995: v3d_rcl_irq: dev=1, seqno=2 irq_delay:0.29 ms*/
/*54*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000040/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*  computeheadless-10502   [000] .... 88206.990500: v3d_mmu_flush_begin: dev=1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.990501: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.990502: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.990503: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.990503: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.990504: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.990507: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.990508: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*  computeheadless-10502   [000] .... 88206.990509: v3d_mmu_flush_end: dev=1 */
/*55*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000020/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*  computeheadless-10502   [000] .... 88206.990581: v3d_mmu_flush_begin: dev=1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.990582: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.990583: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.990583: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.990584: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.990584: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.990585: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88206.990585: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*  computeheadless-10502   [000] .... 88206.990586: v3d_mmu_flush_end: dev=1 */
/* idle long delay = 0.07387399999424815 */
/*56*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000140/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*  computeheadless-10502   [000] .... 88207.064464: v3d_mmu_flush_begin: dev=1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.064467: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.064468: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.064469: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.064470: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.064471: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.064471: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.064472: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*  computeheadless-10502   [000] .... 88207.064474: v3d_mmu_flush_end: dev=1 */
/*57*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000160/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*  computeheadless-10502   [000] .... 88207.064566: v3d_mmu_flush_begin: dev=1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.064566: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.064567: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.064568: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.064568: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.064569: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.064569: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.064570: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*  computeheadless-10502   [000] .... 88207.064570: v3d_mmu_flush_end: dev=1 */
/*58*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000180/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*  computeheadless-10502   [000] .... 88207.064602: v3d_mmu_flush_begin: dev=1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.064603: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.064604: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.064604: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.064605: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.064605: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.064606: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.064607: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*  computeheadless-10502   [000] .... 88207.064607: v3d_mmu_flush_end: dev=1 */
/*59*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x000001a0/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*  computeheadless-10502   [000] .... 88207.064638: v3d_mmu_flush_begin: dev=1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.064639: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.064639: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.064640: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.064640: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.064641: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.064642: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.064642: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*  computeheadless-10502   [000] .... 88207.064643: v3d_mmu_flush_end: dev=1 */
/*60*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000080/*page*/, 0x00000083/*num_pages*/, 0/*is_map*/ } },
/*  computeheadless-10502   [000] .... 88207.064667: v3d_mmu_flush_begin: dev=1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.064668: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.064668: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.064669: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.064669: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.064670: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.064670: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.064671: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*  computeheadless-10502   [000] .... 88207.064672: v3d_mmu_flush_end: dev=1 */
/*61*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000120/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*  computeheadless-10502   [000] .... 88207.065018: v3d_mmu_flush_begin: dev=1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.065019: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.065020: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.065020: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.065021: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.065021: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.065022: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.065022: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*  computeheadless-10502   [000] .... 88207.065023: v3d_mmu_flush_end: dev=1 */
/*62*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000060/*page*/, 0x00000001/*num_pages*/, 0/*is_map*/ } },
/*  computeheadless-10502   [000] .... 88207.065054: v3d_mmu_flush_begin: dev=1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.065054: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.065055: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.065055: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.065056: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.065056: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.065057: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)  computeheadless-10502   [000] .... 88207.065058: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*  computeheadless-10502   [000] .... 88207.065058: v3d_mmu_flush_end: dev=1 */

		{.type = type_eof /* last one */ }
};

// trace time range [ 88206.978093 -- 88207.065058 ] elapsed 0.086965
// #badlines = 3; total_long_delay 0.07 idle 0.07 (1.00)
// total_irq_delay 0.00	max_mem 139 pages 0.54 MBs
// #jobs: 5 b/r/c/t 2/2/1/0 #irqs:5

				struct v3d_recording recording_headless = {
					.name = "headless", 
					.records = v3d_records_headless,
					.path = "/data/rpi4-workspace/trace-test/headless"				
			};
			
