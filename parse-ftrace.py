#!/usr/bin/env python3

""" 
cheatsheet:
https://www.debuggex.com/cheatsheet/regex/python
test:
http://pythex.org/


Usage:
{prog} out.html start_time end_time
	end_time is exclusive.
	note: the time windowing does not deal with clock rollback
"""

import errno, optparse, os, select, subprocess, sys, time, zlib
import operator
import re
import argparse
import json # for spitting json file. https://zserge.com/jsmn/

keyword="v3d"
total = 0
all_procs = {}
out_c_header = 1 # 0-json (WIP), 1-c header

BO_DUMP_NAME="_tmp_bo_%s_0x%08x_bin"
# BO_DUMP_LEN_NAME="_tmp_bo_%s_0x%08x_bin_len"

'''
1. process (inc. PID; may contain spaces)	
2. ts
'''
lineregex_common=r'''\s*(\S.*-\d+)\s+\[\d+\]\s*\S{4}\s*(\d+\.\d+):'''


'''
computeheadless-714     [002] ....   195.117006: v3d_access_reg: group=core rw=r offset=0x00000000 val=0x04443356 core=0
1. process (inc. PID. may contain spaces)
2. ts
3:group-hub|core
4:r|w
5:offset
6:val
7:core (==0)
'''

#lineregex_access_reg=r'''\s*(\S+)\s+\[\d+\]\s*\S{4}\s*(\d+\.\d+):\s*v3d_access_reg:\s*group=(\S+)\s*rw=(\w)\s*offset=(\S+)[\s|,]+val=(\S+)[\s|,]+core=(\S+)'''
lineregex_access_reg=r'''\s*(\S+)\s+\[\d+\]\s*\S{4}\s*(\d+\.\d+):\s*v3d_access_reg:\s*group=(\S+)\s*rw=(\w)\s*offset=(\S+)[\s|,]+val=(\S+)[\s|,]+core=(\S+)'''

'''
 v3d_cache_clean-4882    [002] .... 71961.556796: v3d_wait_for_reg: group=core offset=0x00000030 mask=0x00000001 expected=0x00000000 core=0
 
 1. process
 2. ts
 3. group hub|core
 4. offset
 5. mask
 6. expected
 7. core
 '''
lineregex_wait_for_reg=r'''\s*(\S+)\s+\[\d+\]\s*\S{4}\s*(\d+\.\d+):\s*v3d_wait_for_reg:\s*group=(\S+)\s*offset=(\S+)\s+mask=(\S+)\s+expected=(\S+)\s+core=(\S+)'''

'''
computeheadless-847		 [003] 	....  3523.820209: v3d_map_gpu_region: start_page=0x00000040, num_pages=0x00000001, is_map=1
'''
#lineregex_map_gpu_region=r'''\s*(\S+)\s+\[\d+\]\s*\S{4}\s*(\d+\.\d+):\s*v3d_map_gpu_region:\s*start_page=(\S+)[\s|,]*num_pages=(\S+)[\s|,]*is_map=(\d)\s*'''
lineregex_map_gpu_region=r'''\s*(\S.*-\d+)\s+\[\d+\]\s*\S{4}\s*(\d+\.\d+):\s*v3d_map_gpu_region:\s*start_page=(\S+)[\s|,]*num_pages=(\S+)[\s|,]*is_map=(\d)\s*'''

'''
         v3d_bin-681     [003] ....  3523.827294: v3d_submit_cl: dev=0, BCL, seqno=3, 0x00060000..0x0006000e
1. process name
2. ts
3. dev no
4. BCL/RCL
5 seqno
6. start addr
7 end addr
'''
#lineregex_submit_cl=r'''\s*(\S+)\s+\[\d+\]\s*\S{4}\s*(\d+\.\d+):\s*v3d_submit_cl:\s*dev=(\d+)[\s|,]*(\w+)[\s|,]+seqno=(\d+)*[\s|,]+(\S+)\.{2}(\S+)'''
lineregex_submit_cl=r'''\s*(\S.*-\d+)\s+\[\d+\]\s*\S{4}\s*(\d+\.\d+):\s*v3d_submit_cl:\s*dev=(\d+)[\s|,]*(\w+)[\s|,]+seqno=(\d+)*[\s|,]+(\S+)\.{2}(\S+)'''

'''
         v3d_csd-684     [000] ....  3523.867003: v3d_submit_csd: dev=0, seqno=2
1-process name
2-ts
3-csd/tfu
4-dev num
5-seq no
'''
#lineregex_submit_csd=r'''\s*(\S+)\s+\[\d+\]\s*\S{4}\s*(\d+\.\d+):\s*v3d_submit_csd:\s*dev=(\d+)[\s|,]*seqno=(\d+)*'''
lineregex_submit_csd=r'''\s*(\S.*-\d+)\s+\[\d+\]\s*\S{4}\s*(\d+\.\d+):\s*v3d_submit_(\S\S\S):\s*dev=(\d+)[\s|,]*seqno=(\d+)*'''

'''
         v3d_bin-2765    [001] .... 43929.212543: v3d_dump_gpu_region: start_page=0x00000020 num_pages=0x00000100 tag=bin-0005
1-process name
2-ts
3-start_page
4-num_pages
5-tag
'''
#lineregex_dump_gpu_region=r'''\s*(\S+)\s+\[\d+\]\s*\S{4}\s*(\d+\.\d+):\s*v3d_dump_gpu_region:\s*start_page=(\S+)\s+num_pages=(\S+)\s+tag=(\S+)*'''
lineregex_dump_gpu_region=r'''\s*(\S.*-\d+)\s+\[\d+\]\s*\S{4}\s*(\d+\.\d+):\s*v3d_dump_gpu_region:\s*start_page=(\S+)\s+num_pages=(\S+)\s+tag=(\S+)*'''


'''
1-process name
2-ts
3-start_addr
4-num_bytes
5-tag
'''
#lineregex_dump_gpu_region2=r'''\s*(\S+)\s+\[\d+\]\s*\S{4}\s*(\d+\.\d+):\s*v3d_dump_gpu_region2:\s*start_addr=(\S+)\s+num_bytes=(\S+)\s+tag=(\S+)*'''
lineregex_dump_gpu_region2=r'''\s*(\S.*-\d+)\s+\[\d+\]\s*\S{4}\s*(\d+\.\d+):\s*v3d_dump_gpu_region2:\s*start_addr=(\S+)\s+num_bytes=(\S+)\s+tag=(\S+)*'''


'''
	   benchncnn-1002	[000] d.h.  2898.412305: v3d_bcl_irq: dev=0, seqno=10
1-process name
2-ts	   
3-bcl/rcl/csd
4-dev 
5-seqno
'''
lineregex_irq=r'''\s*(\S.*-\d+)\s+\[\d+\]\s*\S{4}\s*(\d+\.\d+):\s*v3d_(\S\S\S)_irq: dev=(\d+), seqno=(\d+)'''

'''
		  v3d_bin-725	 [002] ....  2898.408372: v3d_submit_cl: dev=0, BCL, seqno=10, 0x00060000..0x0006000e 
1-process name
2-ts	   
3-dev
4-BCL/RCL 
5-seqno	
'''	  
lineregex_submit_cl=r'''\s*(\S.*-\d+)\s+\[\d+\]\s*\S{4}\s*(\d+\.\d+):\s*v3d_submit_cl: dev=(\d+), (\S\S\S), seqno=(\d+)'''


'''
		  v3d_csd-728	 [000] ....  2931.544146: v3d_submit_csd: dev=0, seqno=196 
1-process name
2-ts
3-dev 
4-seqno
'''
#lineregex_submit_csd=r'''\s*(\S.*-\d+)\s+\[\d+\]\s*\S{4}\s*(\d+\.\d+):\s*v3d_submit_csd: dev=(\d+), seqno=(\d+)'''
		  
		  
'''
  v3d_cache_clean-729     [001] ....  2931.548583: v3d_cache_clean_begin: dev=0 
	  
1-process name
2-ts
3-begin/end
4-dev 
'''
lineregex_cache_clean=r'''\s*(\S.*-\d+)\s+\[\d+\]\s*\S{4}\s*(\d+\.\d+):\s*v3d_cache_clean_(\S+): dev=(\d+)'''
  		  
'''		  
	benchncnn-6707    [002] .... 140572.637964: v3d_mmu_flush_begin: dev=0
1-process name
2-ts
3-begin/end
4-dev
'''
lineregex_mmu_flush=r'''\s*(\S.*-\d+)\s+\[\d+\]\s*\S{4}\s*(\d+\.\d+):\s*v3d_mmu_flush_(\S+): dev=(\d+)'''
	
			  		  
c_header=''' 
struct record_entry __maybe_unused {0} [] = {{ \
'''

c_footer='''
		{.type = type_eof /* last one */ }
};
'''

# reg list from kernel v3d_debugfs.c (incomplete). defs from kernel v3d_regs.h
hub_regnames = {
	0:'V3D_HUB_AXICFG',
	0xc:'V3D_HUB_IDENT1',
	0x10:'V3D_HUB_IDENT2',
	0x14:'V3D_HUB_IDENT3',
	0x50:'V3D_HUB_INT_STS',
	0x54:'V3D_HUB_INT_SET',
	0x58:'V3D_HUB_INT_CLR',
	0x5c:'V3D_HUB_INT_MSK_STS',
	0x60:'V3D_HUB_INT_MSK_SET',
	0x64:'V3D_HUB_INT_MSK_CLR',
	0x40c: 'V3D_TFU_IIA',
	0x410: 'V3D_TFU_ICA',
	0x414: 'V3D_TFU_IIS',
	0x418: 'V3D_TFU_IUA',
	0x41c: 'V3D_TFU_IOA',
	0x420: 'V3D_TFU_IOS',
	0x1000:'V3D_MMUC_CONTROL',
	0x1200:'V3D_MMU_CTL',
	0x1234:'V3D_MMU_VIO_ADDR',
	0x122c:'V3D_MMU_VIO_ID',
	0x1238:'V3D_MMU_DEBUG_INFO',
}

# reg list from kernel v3d_debugfs.c (incomplete). defs from kernel v3d_regs.h
core_regnames = {
	0:'V3D_CTL_IDENT0',
	0x4:'V3D_CTL_IDENT1',
	0x8:'V3D_CTL_IDENT2',
	0x18:'V3D_CTL_MISCCFG',
	0x20:'V3D_CTL_L2CACTL',
	0x24:'V3D_CTL_SLCACTL',
	0x30:'V3D_CTL_L2TCACTL',
	0x34:'V3D_CTL_L2TFLSTA',
	0x38:'V3D_CTL_L2TFLEND',
	0x50:'V3D_CTL_INT_STS',
	0x54:'V3D_CTL_INT_SET',
	0x58:'V3D_CTL_INT_CLR',
	0x5c:'V3D_CTL_INT_MSK_STS',
	0x60:'V3D_CTL_INT_MSK_SET',
	0x64:'V3D_CTL_INT_MSK_CLR',
	0x100:'V3D_CLE_CT0CS',
	0x104:'V3D_CLE_CT1CS',
	0x108:'V3D_CLE_CT0EA',
	0x10c:'V3D_CLE_CT1EA',
	0x110:'V3D_CLE_CT0CA',
	0x114:'V3D_CLE_CT1CA',
	0x118:'V3D_CLE_CT0RA',
	0x11c:'V3D_CLE_CT1RA',
	0x15c:'V3D_CLE_CT0QTS',
	0x160:'V3D_CLE_CT0QBA',
	0x164:'V3D_CLE_CT1QBA',
	0x168:'V3D_CLE_CT0QEA',
	0x16c:'V3D_CLE_CT1QEA',
	0x170:'V3D_CLE_CT0QMA',
	0x174:'V3D_CLE_CT0QMS',
	0x178:'V3D_CLE_CT1QCFG',
	0x308:'V3D_PTB_BPOA',
	0x30c:'V3D_PTB_BPOS',
	# CSD 
	0x900:'V3D_CSD_STATUS',
	0x904:'V3D_CSD_QUEUED_CFG0',
	0x908:'V3D_CSD_QUEUED_CFG1',
	0x90c:'V3D_CSD_QUEUED_CFG2',
	0x910:'V3D_CSD_QUEUED_CFG3',
	0x914:'V3D_CSD_QUEUED_CFG4',
	0x918:'V3D_CSD_QUEUED_CFG5',
	0x91c:'V3D_CSD_QUEUED_CFG6',
	0x930:'V3D_CSD_CURRENT_CFG4'
}

# a dict. {gpu_start_page:num_pages}
# keep track of all alive gpu regions. emit gpu mm writes of alive gpu regions prior to CL/CSD submissions
gpu_regions = {}

'''
return None if bad
'''
def get_timestamp(line):
	# first extract the time stamp
	t0=line.split(')')
	if len(t0) < 2:
		return None
		
	
	t1 = t0[1].split(':')
	if len(t1) < 2:
		return None
				
	t2 = t1[0].split(' ')
	if len(t2) < 2:
		return None
	
	timestamp=t2[-1]
	ts = float(timestamp)
	return ts

'''
return (prev_tid, prev_pid, prev_comm, next_comm, next_tid)
'''
def get_tasks(line):
		# we must be careful as comm (process name) may contain spaces
		
		# get prev comm and pid
		tokens=line.split('(')
		if len(tokens) <= 1:
			return None
		 
		 
		tokens=line.split(keyword)
		if len(tokens) <= 1:
			return None

		s = tokens[1]
		tokens = s.split("next_comm=")
		assert tokens > 1
		
		s = tokens[1]
		tokens = s.split("next_comm=")
		assert tokens > 1
				
		s = tokens[1]
		tokens = s.split("next_comm=")
		assert tokens > 1
		
		
		s = tokens[1]
		tokens = s.split("next_comm=")
		assert tokens > 1
		
		s = tokens[1]
		tokens = s.split(" next_pid=")
		assert tokens > 1
		comm = tokens[0]
		
		s = tokens[1]
		tokens = s.split(" next_prio=")
		assert tokens > 1
		pid = tokens[0]

emitcounter = 0

DELAY_WAIT_SHORT = 1
DELAY_WAIT_NORMAL = 2
DELAY_WAIT_LONG = 3
DELAY_NONE = 0
DELAY_WAIT_IRQ_BCL = -1
DELAY_WAIT_IRQ_RCL = -2
DELAY_WAIT_IRQ_CSD = -3
DELAY_WAIT_IRQ_TFU = -4

#DELAY_SLEEP_SHORT = -1
#DELAY_SLEEP_NORMAL = -2
#DELAY_SLEEP_LONG = -3

the_records = []

the_gpu_state = "idle"  # busy/idle
# the_bcl = set()
# the_rcl = set()
# the_csd = set()
the_bcl = {}	# key:seqno, v: submission ts
the_rcl = {}
the_csd = {}
the_tfu = {}

the_cnts = {'bcl':0, 'rcl':0, 'csd':0, 'tfu':0, 'irq':0}

the_cache_flush = 0 # flushing?
the_mmu_flush = 0 

the_max_pages = 0
the_current_pages = 0

def update_gpu_idle():
	global the_gpu_state, the_cache_flush, the_mmu_flush 
	if (len(the_bcl) + len(the_rcl) + len(the_csd) == 0 
		and the_cache_flush == 0 and the_mmu_flush == 0):
	   the_gpu_state = "idle"

# return a string representing gpu state
def print_gpu_state():	
	s = the_gpu_state
	if the_gpu_state == "busy":
		s += f" B/R/C={len(the_bcl)}{len(the_rcl)}{len(the_csd)} $/MMU={the_cache_flush}{the_mmu_flush}"
	return s
	
'''
return match, else None
'''
def parseline(line):
	global emitcounter
	global the_records
	global the_gpu_state 
	global the_cache_flush, the_mmu_flush
	global total_irq_delay
	global the_max_pages, the_current_pages
	
	comment=""
	
	# reg access	
	m = re.match(lineregex_access_reg, line)
	if m: 
		offset_num=int(m.group(5),16)
		rw = m.group(4)
		val_num = int(m.group(6), 16)
		regname = ""
		prefix = ""
		if m.group(3)[0] == "~": # no replay, emit as a comment
			print("/* (skipped)", line.replace('\n',''), "*/")
			return m
						
		if 'hub' == m.group(3): 
			if offset_num in hub_regnames:
				regname = hub_regnames[offset_num]
			else:
				regname = "reg(??)"
			comment += regname
		elif 'core' == m.group(3): 
			if offset_num in core_regnames:
				regname = core_regnames[offset_num]
			else: 
				regname = "reg(??)"
			comment += regname
		else:
			print(f"bug?? group={m.group(3)} {line}")
			exit(-1)
		
		delay_after_us = DELAY_NONE # default
		delay_comment = "none" 
		
		# TODO: special actions here 
		if regname in ["V3D_CTL_INT_STS", "V3D_CTL_INT_CLR"]:
			# these are in irq context. dont emit them. let the irq handler 
			# do so in irq context
			prefix = "//"
		else:
			emitcounter += 1
			prefix = f"/*{emitcounter}*/"
			
		if regname in ['V3D_MMUC_CONTROL', 'V3D_MMU_CTL'] and rw == 'w': # clear cache, tlb, etc. could take some time
			delay_after_us = DELAY_WAIT_SHORT 
			delay_comment = "waitshort"
			if regname == "V3D_MMU_CTL" and val_num & (1<<2):
				comment+=",TLB_CLEAR"
		
		if regname == "V3D_MMU_CTL" and rw in ['r', 'R']:
			if val_num & (1<<7):
				comment+=",TLB_CLEARING"
			else:
				comment+=",!TLB_CLEARING"
		
		if regname == "V3D_CTL_L2TCACTL":
			if rw == "w":
				if val_num & 1:		# V3D_L2TCACTL_L2TFLS
					FLM = (val_num >> 1) & 0x3	# read FLM == bit[2:1] 
					if FLM == 0: 
						comment+=",FLUSH"
					elif FLM == 1:
						comment+=",CLR"
					elif FLM == 2:
						comment+=",CLN"
				if val_num & (1<<8):	# V3D_L2TCACTL_TMUWCF
					comment+=",L1FLU"
			else:	# read (r|R)
				if val_num & 1: # V3D_L2TCACTL_L2TFLS
					comment+=",BUSY"
				else:
					comment+=",!BUSY"
		
		'''		
		if rw == 'w' and regname in ["V3D_CLE_CT0QEA", "V3D_CLE_CT1QEA", "V3D_CSD_QUEUED_CFG0"]:  # write to these regs kick jobs. thus irqs.
			delay_after_us = DELAY_WAIT_IRQ_BCL
			delay_comment = "irq" 
		'''
		
		# reg writes that trigger irqs
		if rw == 'w': 
			if regname == 'V3D_CLE_CT0QEA':
				delay_after_us = DELAY_WAIT_IRQ_BCL
				delay_comment = "irq_bcl"
			elif regname == 'V3D_CLE_CT1QEA':
				delay_after_us = DELAY_WAIT_IRQ_RCL
				delay_comment = "irq_rcl"
			elif regname == 'V3D_CSD_QUEUED_CFG0':
				delay_after_us = DELAY_WAIT_IRQ_CSD
				delay_comment = "irq_csd"
			elif regname == 'V3D_TFU_ICFG':
				delay_after_us = DELAY_WAIT_IRQ_TFU
				delay_comment = "irq_tfu"
		
		if out_c_header: 
			print(f'''{prefix}{{type_access_reg, .entry_access_reg = {{ "{m.group(3)}", '{m.group(4)}', {m.group(5)}/*offset*/, {m.group(6)}/*val*/, {m.group(7)}/*core*/ }}, {delay_after_us}/*{delay_comment}*/, "{comment}" }},''')
		else:
			the_records.append({
				'type':'type_access_reg', 
				'group':m.group(3),
				'rw':m.group(4),
				'offset':m.group(5),
				'val':m.group(6),
				'core':m.group(7),
				'delay_after_us':delay_after_us,
				'delay_comment':delay_comment,
				'comment':comment
				})
		return m

	m = re.match(lineregex_wait_for_reg, line)
	if m: 
		offset_num	=int(m.group(4),16)
		mask_num	=int(m.group(5),16)
		expecte_num =int(m.group(6), 16)
		regname = ""
		prefix = ""
		
		emitcounter += 1
		prefix = f"/*{emitcounter}*/"
					
		if m.group(3)=='hub' and offset_num in hub_regnames:
			regname = hub_regnames[offset_num]
			comment += regname
		elif m.group(3)=='core' and offset_num in core_regnames:
			regname = core_regnames[offset_num]
			comment += regname
		else:
			sys.write(sys.stderr, f"bug? group={m.group(3)}")
			exit(-1)
			
		if regname == "V3D_CTL_L2TCACTL":
			if mask_num == 1 and expecte_num == 0: # V3D_L2TCACTL_L2TFLS
				comment+=",!BUSY"
								
		if out_c_header: 
			print(f"{prefix}{{type_wait_for_reg,"
							f".entry_wait_for_reg = {{ \"{m.group(3)}\"," 
							f"{m.group(4)}/*offset*/,"
							f"{m.group(5)}/*mask*/,"
							f"{m.group(6)}/*expected*/,"
							f"{m.group(7)}/*core*/,"
							f"}}, {DELAY_NONE}/*delay*/, \"{comment}\" }},")
		else:
			print("not implemented")
			exit(-1)
		return m
					
	m = re.match(lineregex_map_gpu_region, line)
	if m:
		page = int(m.group(3),16)
		num_pages = int(m.group(4),16)
		is_map = int(m.group(5))
		
		emitcounter += 1
		prefix = f"/*{emitcounter}*/"
		
		# emit map gpu region
		if out_c_header:
			print(f"{prefix}{{type_map_gpu_mem, .entry_map_gpu_mem = {{ {m.group(3)}/*page*/, {m.group(4)}/*num_pages*/, {m.group(5)}/*is_map*/ }} }},")
		else:
			pass
		
		# book keep the gpu region for replay later
		if is_map:
			assert(not page in gpu_regions)
			gpu_regions[page] = num_pages
			the_current_pages += num_pages
			if the_current_pages > the_max_pages: 
				 the_max_pages = the_current_pages 
		else: 
			assert(page in gpu_regions and gpu_regions[page] == num_pages)
			gpu_regions.pop(page, None)
			the_current_pages -= num_pages
		return m
	
	m = re.match(lineregex_dump_gpu_region, line)
	if m: 
		start_page = int(m.group(3),16)
		num_pages = m.group(4)  # in txt
		tag = m.group(5)
		bo_dump_name = BO_DUMP_NAME %(tag, start_page)
		
		emitcounter += 1
		prefix = f"/*{emitcounter}*/"
		
		if out_c_header:
			# emit gpu write
			#print(f"{prefix}{{type_write_gpu_mem, .entry_write_gpu_mem = {{  {m.group(3)}, sizeof({bo_dump_name}), {bo_dump_name}  }} }},")
			# from file...
			print(f'''{prefix}{{type_write_gpu_mem_fromfile, .entry_write_gpu_mem_fromfile = {{ {m.group(3)}/*page*/, {num_pages}/*num_pages*/, "{tag}"/*tag*/ }} }},''')
		else:
			pass
		
		return m

	m = re.match(lineregex_dump_gpu_region2, line)
	if m: 
		start_addr = m.group(3) # in txt
		num_bytes = m.group(4)  # in txt
		tag = m.group(5)
		bo_dump_name = BO_DUMP_NAME %(tag, start_addr)
		
		emitcounter += 1
		prefix = f"/*{emitcounter}*/"
		
		if out_c_header:		
			# emit gpu write
			#print(f"{prefix}{{type_write_gpu_mem, .entry_write_gpu_mem = {{  {m.group(3)}, sizeof({bo_dump_name}), {bo_dump_name}  }} }},")
			# from file...
			print(f'''{prefix}{{type_write_gpu_mem_fromfile2, .entry_write_gpu_mem_fromfile2 = {{ {m.group(3)}/*start_addr*/, {num_pages}/*num_bytes*/, "{tag}"/*tag*/ }} }},''')
		else:
			pass
		
		return m
	
	m = re.match(lineregex_submit_cl, line)
	if m:
		the_gpu_state = "busy"
		ts = float(m.group(2))
		
		if m.group(4) == "BCL":
			#the_bcl.add(m.group(5), ts)
			the_bcl[m.group(5)] = ts
			the_cnts['bcl'] += 1
		elif m.group(4) == "RCL":
			# the_rcl.add(m.group(5), ts)
			the_rcl[m.group(5)] = ts
			the_cnts['rcl'] += 1
		else:
			print("bug?", line)
			exit(-1)
			
		print("/*", line.replace('\n',''), "*/")
		return m
	
	m = re.match(lineregex_submit_csd, line)
	if m:
		the_gpu_state = "busy"
		ts = float(m.group(2))
		#the_csd.add(m.group(4), ts)
		if m.group(3) == 'csd':
			the_csd[m.group(5)] = ts
		elif m.group(3) == 'tfu':
			the_tfu[m.group(5)] = ts
		else:
			print("bug?",line)
			exit(-1)
		the_cnts[m.group(3)] += 1  # csd or tfu
		
		print("/*", line.replace('\n',''), "*/")
		return m
	
	m = re.match(lineregex_cache_clean, line)
	if m:
		if m.group(3) == "begin":
			the_cache_flush = 1
			the_gpu_state = "busy"
		else: 
			the_cache_flush = 0
			update_gpu_idle()
			#print(f"/* gpu:{the_gpu_state} */")
		
		print("/*", line.replace('\n',''), "*/")
		return m
	
	m = re.match(lineregex_mmu_flush, line)
	if m:
		if m.group(3) == "begin":
			the_mmu_flush = 1
			the_gpu_state = "busy"
		else: 
			the_mmu_flush = 0
			update_gpu_idle()
			#print(f"/* gpu:{the_gpu_state} */")
		
		print("/*", line.replace('\n',''), "*/")
		return m
	
	m = re.match(lineregex_irq, line)
	if m:
		ts = float(m.group(2))
		g = m.group(3)
		seqno = m.group(5)
		elapse = 0.0 # in sec
		if g == "rcl":
			elapse = ts - the_rcl[seqno] 
			#the_rcl.remove(seqno)
			del the_rcl[seqno]
		elif g == "bcl":
			elapse = ts - the_bcl[seqno]
			#the_bcl.remove(seqno)
			del the_bcl[seqno]
		elif g == "csd":
			elapse = ts - the_csd[seqno]
			#the_csd.remove(seqno)
			del the_csd[seqno]
		elif g == "tfu":
			elapse = ts - the_tfu[seqno]
			del the_tfu[seqno]
		the_cnts['irq'] += 1
			
		update_gpu_idle()
		print("/*", line.replace('\n',''), "irq_delay:%.2f ms*/" %(1000 *elapse))
		#print(f"/* gpu:{the_gpu_state} */")
		total_irq_delay += elapse
		return m
		
	return None

once_in_trace = True	 # first entry in the trace; may be out of window
once = True

begin_ts = 0
end_ts = 0
last_ts = 0
last_checked_ts = 0 # although we may skipped this (e.g, out of window)
last_gpu_state = "idle"
last_suspend = 0
last_resume = 0
last_resume_fix = -1	# resume, after clock rollback
total_long_delay = 0.0
total_long_delay_idle = 0.0
total_irq_delay = 0.0	# in sec. we only have at most 1 irq outstanding, so this is meaningful 

'''
load thread list from dmtrace header. 
this looks like:
*threads
618	main
621	Heap thread pool worker thread 0
693	AlarmManager
694	InputDispatcher
695	InputReader
	.
'''
listregex=r'''(\d+)\s+(.+)'''
dmtrace_main_tid = None		# as loaded from the dmtrace

if __name__ == '__main__':
	#global out_c_header
			
	parser = argparse.ArgumentParser()
	parser.add_argument("-j", "--json", 
					help='output json (default: output c header)', 
					action="store_true")	
	parser.add_argument("input", help="input file")
	parser.add_argument("-v", "--varname", help="name for the c array")
	
	args = parser.parse_args()
	if args.json:
		out_c_header = 0	
		
	f=open(args.input)
	lines=f.readlines()
		
	nlines = len(lines)
	
	i = 0
	badlines=0
	
	if out_c_header:
		print("// auto generated. do not edit")
		print("// input trace: ", os.path.realpath(args.input))
				
		if not args.varname: 
			print(c_header.format("v3d_records")) # default name
		else:
			print(c_header.format("v3d_records" + "_" + args.varname))
		
		
	else:
		pass # include a one-liner for json file, to be stripped? 

	emitcounter = 0
	while i < nlines:
		line = lines[i]
		
		# we must be careful as comm (process name) may contain spaces
		# we are parsing the body 
		i += 1
		
		if line.find(keyword) == -1:
			continue
		 		
		long_delay = 0.0
		# process the line's timestamp, before processing the line itself			
		res = re.match(lineregex_common, line)
		if res:
			ts = float(res.group(2))
			
			if once_in_trace:
				begin_ts = ts
				once_in_trace = False
			else:
				if ts - last_checked_ts > 0.05: # 50 ms 
					#print(f"/* {the_gpu_state} long delay = {ts - last_checked_ts} */")
					long_delay = ts - last_checked_ts
					print(f"/* {print_gpu_state()} long delay = {long_delay} */")					
					total_long_delay += long_delay 
			last_checked_ts = ts
		else: # malformed line?
			print(line, "bug?")
			sys.exit(-1)
							
		prev_gpu_state = the_gpu_state
		
		res = parseline(line)
		if res == None: # cannot parse, emit as a comment line
			#print("/* skip: ", end='')
			print("/*", line.replace('\n',''), "*/")
			#print("*/")
			badlines += 1
			
		# now GPU state updated, has GPU been idle in the past long delay gap?
		if prev_gpu_state == "idle" and the_gpu_state == "idle" and long_delay > 0:   		
			total_long_delay_idle += long_delay		
			
	if out_c_header:
		print(c_footer)	
		print("// trace time range [ %.6f -- %.6f ] elapsed %.6f" %(begin_ts, last_checked_ts, last_checked_ts - begin_ts))
		if total_long_delay:
			print("// #badlines = %d; total_long_delay %.2f idle %.2f (%.2f)" %(badlines, total_long_delay, total_long_delay_idle, total_long_delay_idle/total_long_delay))
		else:
			print("// #badlines = %d; total_long_delay %.2f idle %.2f (??)" %(badlines, total_long_delay, total_long_delay_idle))
		print("// total_irq_delay %.2f	max_mem %d pages %.2f MBs" 
			%(total_irq_delay,the_max_pages, the_max_pages*4096/1024/1024))
		print(f"// #jobs: {the_cnts['bcl']+the_cnts['rcl']+the_cnts['csd']+the_cnts['tfu']} b/r/c/t {the_cnts['bcl']}/{the_cnts['rcl']}/{the_cnts['csd']}/{the_cnts['tfu']} #irqs:{the_cnts['irq']}")
		# print recording metadata
		if args.varname:
			print(f'''
				struct v3d_recording recording_{args.varname} = {{
					.name = "{args.varname}", 
					.records = v3d_records_{args.varname},
					.path = "{os.path.dirname(os.path.realpath(args.input))}"				
			}};
			''')
	else:
		# spit the json file
		'''
		If indent is a non-negative integer or string, then JSON array elements and object members 
		will be pretty-printed with that indent level. An indent level of 0, negative, or "" will only insert newlines
		'''	
		#with open('/tmp/records.json', 'w') as outfile:
		print(json.dumps(the_records, indent=1))
		#print(json.dumps(the_records, indent=2))
