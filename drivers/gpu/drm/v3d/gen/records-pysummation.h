// auto generated. do not edit
// input trace:  /data/rpi4-workspace/trace/py-videocore6-summation-mininput/ftrace.txt
 
struct record_entry __maybe_unused v3d_records_pysummation [] = { 
/*1*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000020/*page*/, 0x00000105/*num_pages*/, 1/*is_map*/ } },
/*          python3-767     [000] ....   299.257719: v3d_mmu_flush_begin: dev=0 */
/* (skipped)          python3-767     [000] ....   299.257722: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)          python3-767     [000] ....   299.257723: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)          python3-767     [000] ....   299.257723: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)          python3-767     [000] ....   299.257724: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)          python3-767     [000] ....   299.257725: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)          python3-767     [000] ....   299.257726: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)          python3-767     [000] ....   299.257727: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*          python3-767     [000] ....   299.257728: v3d_mmu_flush_end: dev=0 */
/* idle long delay = 0.14619600000003175 */
/*          python3-767     [000] ....   299.403924: v3d_submit_csd_ioctl: dev=0, CFG5 0x00020000, CFG6 0x00124040 */
/*2*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000001/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,FLUSH" },
/*3*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000024/*offset*/, 0x0f0f0f0f/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_SLCACTL" },
/*4*/{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = { 0x00000000/*page*/, 0x0000ffff/*num_pages*/, "csd_0002"/*tag*/ } },
/*          v3d_csd-700     [000] ....   299.410850: v3d_submit_csd: dev=0, seqno=2 */
/*5*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000908/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG1" },
/*6*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000090c/*offset*/, 0x00010000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG2" },
/*7*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000910/*offset*/, 0x0000f010/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG3" },
/*8*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000914/*offset*/, 0x00000000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG4" },
/*9*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000918/*offset*/, 0x00020000/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG5" },
/*10*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x0000091c/*offset*/, 0x00124040/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CSD_QUEUED_CFG6" },
/*11*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000904/*offset*/, 0x00100000/*val*/, 0/*core*/ }, -3/*irq_csd*/, "V3D_CSD_QUEUED_CFG0" },
/* (skipped)          python3-767     [000] d.h2   299.410887: v3d_access_reg: group=~core rw=r offset=0x00000050 val=0x00000080 core=0 */
/* (skipped)          python3-767     [000] d.h2   299.410888: v3d_access_reg: group=~core rw=w offset=0x00000058 val=0x00000080 core=0 */
/*          python3-767     [000] d.h2   299.410890: v3d_csd_irq: dev=0, seqno=2 irq_delay:0.04 ms*/
/*  v3d_cache_clean-701     [001] ....   299.410950: v3d_cache_clean_begin: dev=0 */
/*12*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000100/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,L1FLU" },
/*13*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-701     [001] ....   299.410955: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000000 core=0 */
/*14*/{type_access_reg, .entry_access_reg = { "core", 'w', 0x00000030/*offset*/, 0x00000005/*val*/, 0/*core*/ }, 0/*none*/, "V3D_CTL_L2TCACTL,CLN" },
/*15*/{type_wait_for_reg,.entry_wait_for_reg = { "core",0x00000030/*offset*/,0x00000001/*mask*/,0x00000000/*expected*/,0/*core*/,}, 0/*delay*/, "V3D_CTL_L2TCACTL,!BUSY" },
/* (skipped)  v3d_cache_clean-701     [001] ....   299.410958: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000005 core=0 */
/* (skipped)  v3d_cache_clean-701     [001] ....   299.410991: v3d_access_reg: group=~core rw=r offset=0x00000030 val=0x00000004 core=0 */
/*  v3d_cache_clean-701     [001] ....   299.410992: v3d_cache_clean_end: dev=0 */
/*16*/{type_map_gpu_mem, .entry_map_gpu_mem = { 0x00000020/*page*/, 0x00000105/*num_pages*/, 0/*is_map*/ } },
/*          python3-767     [000] ....   299.411794: v3d_mmu_flush_begin: dev=0 */
/* (skipped)          python3-767     [000] ....   299.411796: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)          python3-767     [000] ....   299.411797: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)          python3-767     [000] ....   299.411798: v3d_access_reg: group=~hub rw=w offset=0x00001200 val=0x060d0c05 core=-1 */
/* (skipped)          python3-767     [000] ....   299.411799: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)          python3-767     [000] ....   299.411799: v3d_access_reg: group=~hub rw=w offset=0x00001000 val=0x00000003 core=-1 */
/* (skipped)          python3-767     [000] ....   299.411800: v3d_access_reg: group=~hub rw=r offset=0x00001200 val=0x060d0c01 core=-1 */
/* (skipped)          python3-767     [000] ....   299.411801: v3d_access_reg: group=~hub rw=r offset=0x00001000 val=0x00000001 core=-1 */
/*          python3-767     [000] ....   299.411802: v3d_mmu_flush_end: dev=0 */

		{.type = type_eof /* last one */ }
};

// trace time range [ 299.257705 -- 299.411802 ] elapsed 0.154097
// #badlines = 1; total_long_delay 0.15 idle 0.15 (1.00)
// total_irq_delay 0.00	max_mem 261 pages 1.02 MBs
// #jobs: 1 b/r/c/t 0/0/1/0 #irqs:1

				struct v3d_recording recording_pysummation = {
					.name = "pysummation", 
					.records = v3d_records_pysummation,
					.path = "/data/rpi4-workspace/trace/py-videocore6-summation-mininput"				
			};
			
