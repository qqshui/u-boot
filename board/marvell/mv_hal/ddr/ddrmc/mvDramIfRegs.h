/*******************************************************************************
Copyright (C) Marvell International Ltd. and its affiliates

This software file (the "File") is owned and distributed by Marvell 
International Ltd. and/or its affiliates ("Marvell") under the following
alternative licensing terms.  Once you have made an election to distribute the
File under one of the following license alternatives, please (i) delete this
introductory statement regarding license alternatives, (ii) delete the two
license alternatives that you have not elected to use and (iii) preserve the
Marvell copyright notice above.

********************************************************************************
Marvell Commercial License Option

If you received this File from Marvell and you have entered into a commercial
license agreement (a "Commercial License") with Marvell, the File is licensed
to you under the terms of the applicable Commercial License.

********************************************************************************
Marvell GPL License Option

If you received this File from Marvell, you may opt to use, redistribute and/or 
modify this File in accordance with the terms and conditions of the General 
Public License Version 2, June 1991 (the "GPL License"), a copy of which is 
available along with the File in the license.txt file or by writing to the Free 
Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 or 
on the worldwide web at http://www.gnu.org/licenses/gpl.txt. 

THE FILE IS DISTRIBUTED AS-IS, WITHOUT WARRANTY OF ANY KIND, AND THE IMPLIED 
WARRANTIES OF MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE ARE EXPRESSLY 
DISCLAIMED.  The GPL License provides additional details about this warranty 
disclaimer.
********************************************************************************
Marvell BSD License Option

If you received this File from Marvell, you may opt to use, redistribute and/or 
modify this File under the following licensing terms. 
Redistribution and use in source and binary forms, with or without modification, 
are permitted provided that the following conditions are met:

    *   Redistributions of source code must retain the above copyright notice,
	    this list of conditions and the following disclaimer. 

    *   Redistributions in binary form must reproduce the above copyright
        notice, this list of conditions and the following disclaimer in the
        documentation and/or other materials provided with the distribution. 

    *   Neither the name of Marvell nor the names of its contributors may be 
        used to endorse or promote products derived from this software without 
        specific prior written permission. 
    
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND 
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED 
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE 
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR 
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES 
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; 
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON 
ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS 
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*******************************************************************************/

#ifndef __INCmvDramIfRegsh
#define __INCmvDramIfRegsh


#ifdef __cplusplus
extern "C" {
#endif

#include "mvSysDdrConfig.h"

/* DDR SDRAM Controller Address Decode Registers */
/* SDRAM CSn Base Address and Size Register (MMAPx) */
#define SDRAM_MEM_MAP_REG(csNum)	(MV_DDR_REGS_BASE + 0x100 + (csNum * 0x10))
#define SDRAM_MMAP_BASE_OFFS		23 
#define SDRAM_MMAP_BASE_MASK		(0x1ff << SDRAM_MMAP_BASE_OFFS)
#define SDRAM_MMAP_BASE_ALIGNMENT	(MV_DDR_REGS_BASE + 0x00)

#define SDRAM_MMAP_SIZE_OFFS		16
#define DRAM_MMAP_SIZE_MASK		(0xf << SDRAM_MMAP_SIZE_OFFS)
#define SDRAM_MMAP_WIN_EN		BIT0

/* Control register 1 */
#define SDRAM_CTRL_1_REG   		(MV_DDR_REGS_BASE + 0x80)
#define SDRAM_CTRL1_APS_EN_OFFS		31
#define SDRAM_CTRL1_APS_EN_MASK       	(1 << SDRAM_CTRL1_APS_EN_OFFS)
#define SDRAM_CTRL1_APS_DIS       	(0 << SDRAM_CTRL1_APS_EN_OFFS)
#define SDRAM_CTRL1_APS_EN       	(1 << SDRAM_CTRL1_APS_EN_OFFS)

#define SDRAM_CTRL1_APS_TYP_OFFS	28
#define SDRAM_CTRL1_APS_TYP_MASK       	(7 << SDRAM_CTRL1_APS_TYP_OFFS)
#define SDRAM_CTRL1_APS_TYP_PRE       	(2 << SDRAM_CTRL1_APS_TYP_OFFS)
#define SDRAM_CTRL1_APS_TYP_ACT       	(1 << SDRAM_CTRL1_APS_TYP_OFFS)

#define SDRAM_CTRL1_APS_VAL_OFFS	16
#define SDRAM_CTRL1_APS_VAL_MASK       	(0xFFF << SDRAM_CTRL1_APS_VAL_OFFS)
/* LP-DDR1 only */
#define SDRAM_CTRL1_ACS_VAL_OFFS	12
#define SDRAM_CTRL1_ACS_VAL_MASK       	(0x7 << SDRAM_CTRL1_ACS_VAL_OFFS)
/* LP-DDR1 only */
#define SDRAM_CTRL1_ACS_EN_OFFS		7
#define SDRAM_CTRL1_ACS_EN_MASK       	(1 << SDRAM_CTRL1_ACS_EN_OFFS)
#define SDRAM_CTRL1_ACS_DIS       	(0 << SDRAM_CTRL1_ACS_EN_OFFS)
#define SDRAM_CTRL1_ACS_EN       	(1 << SDRAM_CTRL1_ACS_EN_OFFS)

#define SDRAM_CTRL1_DLL_REST_OFFS	6
#define SDRAM_CTRL1_DLL_REST_MASK       (1 << SDRAM_CTRL1_DLL_REST_OFFS)
#define SDRAM_CTRL1_DLL_REST_DIS       	(0 << SDRAM_CTRL1_DLL_REST_OFFS)
#define SDRAM_CTRL1_DLL_REST_EN       	(1 << SDRAM_CTRL1_DLL_REST_OFFS)

#define SDRAM_CTRL1_OUT_EN_OFFS	3
#define SDRAM_CTRL1_OUT_EN_MASK       	(1 << SDRAM_CTRL1_OUT_EN_OFFS)
#define SDRAM_CTRL1_OUT_DIS       	(1 << SDRAM_CTRL1_OUT_EN_OFFS)
#define SDRAM_CTRL1_OUT_EN       	(0 << SDRAM_CTRL1_OUT_EN_OFFS)

/* Control register 2 */
#define SDRAM_CTRL_2_REG   		(MV_DDR_REGS_BASE + 0x90)
#define SDRAM_CTRL2_REF_POST_EN_OFFS	27
#define SDRAM_CTRL2_REF_POST_EN_MASK	(1 << SDRAM_CTRL2_REF_POST_EN_OFFS)
#define SDRAM_CTRL2_REF_POST_DIS       	(0 << SDRAM_CTRL2_REF_POST_EN_OFFS)
#define SDRAM_CTRL2_REF_POST_EN      	(1 << SDRAM_CTRL2_REF_POST_EN_OFFS)

#define SDRAM_CTRL2_REF_POST_MAX_OFFS	24
#define SDRAM_CTRL2_REF_POST_MAX_MASK	(7 << SDRAM_CTRL2_REF_POST_MAX_OFFS)

#define SDRAM_CTRL2_LINE_BOUNDRAY_OFFS	16
#define SDRAM_CTRL2_LINE_BOUNDRAY_MASK	(0x3F << SDRAM_CTRL2_LINE_BOUNDRAY_OFFS)

#define SDRAM_CTRL2_PD_MODE_OFFS	8
#define SDRAM_CTRL2_PD_MODE_MASK	(1 << SDRAM_CTRL2_PD_MODE_OFFS)
#define SDRAM_CTRL2_DDR2_FAST_EXIT     	(0 << SDRAM_CTRL2_PD_MODE_OFFS)
#define SDRAM_CTRL2_DDR2_SLOW_EXIT     	(1 << SDRAM_CTRL2_PD_MODE_OFFS)
#define SDRAM_CTRL2_DDR3_FAST_EXIT     	(1 << SDRAM_CTRL2_PD_MODE_OFFS)
#define SDRAM_CTRL2_DDR3_SLOW_EXIT     	(0 << SDRAM_CTRL2_PD_MODE_OFFS)

#define SDRAM_CTRL2_RDIMM_OFFS		5
#define SDRAM_CTRL2_RDIMM_MASK		(1 << SDRAM_CTRL2_RDIMM_OFFS)
#define SDRAM_CTRL2_RDIMM_DIS     	(0 << SDRAM_CTRL2_RDIMM_OFFS)
#define SDRAM_CTRL2_RDIMM_EN     	(1 << SDRAM_CTRL2_RDIMM_OFFS)

#define SDRAM_CTRL2_AUTO_PRE_OFFS	4
#define SDRAM_CTRL2_AUTO_PRE_MASK	(1 << SDRAM_CTRL2_AUTO_PRE_OFFS)
#define SDRAM_CTRL2_AUTO_PRE_DIS     	(0 << SDRAM_CTRL2_AUTO_PRE_OFFS)
#define SDRAM_CTRL2_AUTO_PRE_EN     	(1 << SDRAM_CTRL2_AUTO_PRE_OFFS)

#define SDRAM_CTRL2_TESST_MODE_OFFS	0
#define SDRAM_CTRL2_TESST_MODE_MASK	(1 << SDRAM_CTRL2_TESST_MODE_OFFS)
#define SDRAM_CTRL2_TESST_MODE_DIS     	(0 << SDRAM_CTRL2_TESST_MODE_OFFS)
#define SDRAM_CTRL2_TESST_MODE_EN     	(1 << SDRAM_CTRL2_TESST_MODE_OFFS)

/* Control register 3 */
#define SDRAM_CTRL_3_REG   		(MV_DDR_REGS_BASE + 0xF0)
#define SDRAM_CTRL3_FLOP_REQ_EN_OFFS	30
#define SDRAM_CTRL3_FLOP_REQ_EN_MASK	(1 << SDRAM_CTRL3_FLOP_REQ_EN_OFFS)
#define SDRAM_CTRL3_FLOP_REQ_DIS       	(0 << SDRAM_CTRL3_FLOP_REQ_EN_OFFS)
#define SDRAM_CTRL3_FLOP_REQ_EN      	(1 << SDRAM_CTRL3_FLOP_REQ_EN_OFFS)

#define SDRAM_CTRL3_SB_ERWR_VAL_OFFS	9
#define SDRAM_CTRL3_SB_ERWR_VAL_MASK	(7 << SDRAM_CTRL3_SB_ERWR_VAL_OFFS)

#define SDRAM_CTRL3_CPU_ERWR_VAL_OFFS	6
#define SDRAM_CTRL3_CPU_ERWR_VAL_MASK	(7 << SDRAM_CTRL3_CPU_ERWR_VAL_OFFS)

#define SDRAM_CTRL3_SB_ERWR_USR_OFFS	5
#define SDRAM_CTRL3_SB_ERWR_USR_MASK	(1 << SDRAM_CTRL3_SB_ERWR_USR_OFFS)
#define SDRAM_CTRL3_SB_ERWR_USR_DEF    	(0 << SDRAM_CTRL3_SB_ERWR_USR_OFFS)
#define SDRAM_CTRL3_SB_ERWR_USR_VAL    	(1 << SDRAM_CTRL3_SB_ERWR_USR_OFFS)

#define SDRAM_CTRL3_CPU_ERWR_USR_OFFS	4
#define SDRAM_CTRL3_CPU_ERWR_USR_MASK	(1 << SDRAM_CTRL3_CPU_ERWR_USR_OFFS)
#define SDRAM_CTRL3_CPU_ERWR_USR_DEF    (0 << SDRAM_CTRL3_CPU_ERWR_USR_OFFS)
#define SDRAM_CTRL3_CPU_ERWR_USR_VAL    (1 << SDRAM_CTRL3_CPU_ERWR_USR_OFFS)

#define SDRAM_CTRL3_SB_ERWR_EN_OFFS	3
#define SDRAM_CTRL3_SB_ERWR_EN_MASK	(1 << SDRAM_CTRL3_SB_ERWR_EN_OFFS)
#define SDRAM_CTRL3_SB_ERWR_EN    	(1 << SDRAM_CTRL3_SB_ERWR_EN_OFFS)
#define SDRAM_CTRL3_SB_ERWR_DIS    	(0 << SDRAM_CTRL3_SB_ERWR_EN_OFFS)

#define SDRAM_CTRL3_CPU_ERWR_EN_OFFS	2
#define SDRAM_CTRL3_CPU_ERWR_EN_MASK	(1 << SDRAM_CTRL3_CPU_ERWR_EN_OFFS)
#define SDRAM_CTRL3_CPU_ERWR_EN    	(1 << SDRAM_CTRL3_CPU_ERWR_EN_OFFS)
#define SDRAM_CTRL3_CPU_ERWR_DIS    	(0 << SDRAM_CTRL3_CPU_ERWR_EN_OFFS)

#define SDRAM_CTRL3_SB_FSWR_EN_OFFS	1
#define SDRAM_CTRL3_SB_FSWR_EN_MASK	(1 << SDRAM_CTRL3_SB_FSWR_EN_OFFS)
#define SDRAM_CTRL3_SB_FSWR_EN    	(1 << SDRAM_CTRL3_SB_FSWR_EN_OFFS)
#define SDRAM_CTRL3_SB_FSWR_DIS    	(0 << SDRAM_CTRL3_SB_FSWR_EN_OFFS)

#define SDRAM_CTRL3_CPU_FSWR_EN_OFFS	0
#define SDRAM_CTRL3_CPU_FSWR_EN_MASK	(1 << SDRAM_CTRL3_CPU_FSWR_EN_OFFS)
#define SDRAM_CTRL3_CPU_FSWR_EN    	(1 << SDRAM_CTRL3_CPU_FSWR_EN_OFFS)
#define SDRAM_CTRL3_CPU_FSWR_DIS    	(0 << SDRAM_CTRL3_CPU_FSWR_EN_OFFS)

/* Control register 4 */
#define SDRAM_CTRL_4_REG   		(MV_DDR_REGS_BASE + 0x1A0)
#define SDRAM_CTRL4_DWIDTH_OFFS       	0
#define SDRAM_CTRL4_DWIDTH_MASK       	(3 << SDRAM_CTRL4_DWIDTH_OFFS)
#define SDRAM_CTRL4_DWIDTH_16BIT      	(0 << SDRAM_CTRL4_DWIDTH_OFFS)
#define SDRAM_CTRL4_DWIDTH_32BIT      	(1 << SDRAM_CTRL4_DWIDTH_OFFS)

#define SDRAM_CTRL4_DTYPE_OFFS		2
#define SDRAM_CTRL4_DTYPE_MASK       	(7 << SDRAM_CTRL4_DTYPE_OFFS)
#define SDRAM_CTRL4_DTYPE_DDR2      	(1 << SDRAM_CTRL4_DTYPE_OFFS)
#define SDRAM_CTRL4_DTYPE_DDR3      	(2 << SDRAM_CTRL4_DTYPE_OFFS)
#define SDRAM_CTRL4_DTYPE_LPDDR1      	(4 << SDRAM_CTRL4_DTYPE_OFFS)
/* Only for DDR3 */
#define SDRAM_CTRL4_CWL_OFFS		10
#define SDRAM_CTRL4_CWL_MASK       	(7 << SDRAM_CTRL4_CWL_OFFS)

#define SDRAM_CTRL4_CL_OFFS		14
#define SDRAM_CTRL4_CL_MASK       	(0x7 << SDRAM_CTRL4_CL_OFFS)
#define SDRAM_DDR2_CL_3      		(0x3 << SDRAM_CTRL4_CL_OFFS)
#define SDRAM_DDR2_CL_4      		(0x4 << SDRAM_CTRL4_CL_OFFS)
#define SDRAM_DDR2_CL_5    		(0x5 << SDRAM_CTRL4_CL_OFFS)
#define SDRAM_DDR2_CL_6    		(0x6 << SDRAM_CTRL4_CL_OFFS)
#define SDRAM_DDR3_CL_5      		(0x1 << SDRAM_CTRL4_CL_OFFS)
#define SDRAM_DDR3_CL_6      		(0x2 << SDRAM_CTRL4_CL_OFFS)
#define SDRAM_DDR3_CL_7    		(0x3 << SDRAM_CTRL4_CL_OFFS)
#define SDRAM_DDR3_CL_8    		(0x4 << SDRAM_CTRL4_CL_OFFS)
#define SDRAM_DDR3_CL_9    		(0x5 << SDRAM_CTRL4_CL_OFFS)
#define SDRAM_DDR3_CL_10    		(0x6 << SDRAM_CTRL4_CL_OFFS)
#define SDRAM_DDR3_CL_11    		(0x7 << SDRAM_CTRL4_CL_OFFS)

#define SDRAM_CTRL4_BL_OFFS		22
#define SDRAM_CTRL4_BL_MASK       	(7 << SDRAM_CTRL4_BL_OFFS)
#define SDRAM_CTRL4_BL_2       		(1 << SDRAM_CTRL4_BL_OFFS)
#define SDRAM_CTRL4_BL_4       		(2 << SDRAM_CTRL4_BL_OFFS)
#define SDRAM_CTRL4_BL_8       		(3 << SDRAM_CTRL4_BL_OFFS)

#define SDRAM_CTRL4_DQSD_OFFS		30
#define SDRAM_CTRL4_DQSD_MASK       	(1 << SDRAM_CTRL4_DQSD_OFFS)
#define SDRAM_CTRL4_DQSD_DIS       	(1 << SDRAM_CTRL4_DQSD_OFFS)
#define SDRAM_CTRL4_DQSD_EN       	(0 << SDRAM_CTRL4_DQSD_OFFS)

#define SDRAM_CTRL4_DLL_OFFS		31
#define SDRAM_CTRL4_DLL_MASK       	(1 << SDRAM_CTRL4_DLL_OFFS)
#define SDRAM_CTRL4_DLL_DIS       	(1 << SDRAM_CTRL4_DLL_OFFS)
#define SDRAM_CTRL4_DLL_EN       	(0 << SDRAM_CTRL4_DLL_OFFS)

/* Control register 6 */
#define SDRAM_CTRL_6_REG   		(MV_DDR_REGS_BASE + 0x760)
#define SDRAM_CTRL6_ODT1_REN_OFFS       12
#define SDRAM_CTRL6_ODT1_REN_MASK       (0xF << SDRAM_CTRL6_ODT1_REN_OFFS)

#define SDRAM_CTRL6_ODT1_WEN_OFFS       8
#define SDRAM_CTRL6_ODT1_WEN_MASK       (0xF << SDRAM_CTRL6_ODT1_WEN_OFFS)

#define SDRAM_CTRL6_ODT0_REN_OFFS       4
#define SDRAM_CTRL6_ODT0_REN_MASK       (0xF << SDRAM_CTRL6_ODT0_REN_OFFS)

#define SDRAM_CTRL6_ODT0_WEN_OFFS       0
#define SDRAM_CTRL6_ODT0_WEN_MASK       (0xF << SDRAM_CTRL6_ODT0_WEN_OFFS)

/* Control register 7 */
#define SDRAM_CTRL_7_REG   			(MV_DDR_REGS_BASE + 0x770)
#define SDRAM_CTRL7_PAD_TERM_SWMOD_OFFS       	24
#define SDRAM_CTRL7_PAD_TERM_SWMOD_MASK       	(0x3 << SDRAM_CTRL7_PAD_TERM_SWMOD_OFFS)
#define SDRAM_CTRL7_PAD_TERM_SWMOD_DIS		(0x0 << SDRAM_CTRL7_PAD_TERM_SWMOD_OFFS)
#define SDRAM_CTRL7_PAD_TERM_SWMOD_EN		(0x2 << SDRAM_CTRL7_PAD_TERM_SWMOD_OFFS)

#define SDRAM_CTRL7_ODT1_SWMOD_OFFS       	2
#define SDRAM_CTRL7_ODT1_SWMOD_MASK       	(0x3 << SDRAM_CTRL7_ODT1_SWMOD_OFFS)
#define SDRAM_CTRL7_ODT1_SWMOD_DIS		(0x0 << SDRAM_CTRL7_ODT1_SWMOD_OFFS)
#define SDRAM_CTRL7_ODT1_SWMOD_ANY		(0x1 << SDRAM_CTRL7_ODT1_SWMOD_OFFS)
#define SDRAM_CTRL7_ODT1_SWMOD_WREN		(0x2 << SDRAM_CTRL7_ODT1_SWMOD_OFFS)

#define SDRAM_CTRL7_ODT0_SWMOD_OFFS       	0
#define SDRAM_CTRL7_ODT0_SWMOD_MASK       	(0x3 << SDRAM_CTRL7_ODT0_SWMOD_OFFS)
#define SDRAM_CTRL7_ODT0_SWMOD_DIS		(0x0 << SDRAM_CTRL7_ODT0_SWMOD_OFFS)
#define SDRAM_CTRL7_ODT0_SWMOD_ANY		(0x1 << SDRAM_CTRL7_ODT0_SWMOD_OFFS)
#define SDRAM_CTRL7_ODT0_SWMOD_WREN		(0x2 << SDRAM_CTRL7_ODT0_SWMOD_OFFS)

/* Timing register 1 */
#define SDRAM_TIMING_1_REG   		(MV_DDR_REGS_BASE + 0x50)
#define SDRAM_TIMING1_TCCD_OFFS		29
#define SDRAM_TIMING1_TCCD_MASK       	(7 << SDRAM_TIMING1_TCCD_OFFS)

#define SDRAM_TIMING1_TRTP_OFFS		26
#define SDRAM_TIMING1_TRTP_MASK       	(7 << SDRAM_TIMING1_TRTP_OFFS)

#define SDRAM_TIMING1_TWTR_OFFS		22
#define SDRAM_TIMING1_TWTR_MASK       	(0xF << SDRAM_TIMING1_TWTR_OFFS)

#define SDRAM_TIMING1_TRC_OFFS		16
#define SDRAM_TIMING1_TRC_MASK       	(0x3F << SDRAM_TIMING1_TRC_OFFS)

#define SDRAM_TIMING1_TREFI_OFFS	0
#define SDRAM_TIMING1_TREFI_MASK       	(0xFFFF << SDRAM_TIMING1_TREFI_OFFS)

/* Timing register 2 */
#define SDRAM_TIMING_2_REG   		(MV_DDR_REGS_BASE + 0x60)
#define SDRAM_TIMING2_TRP_OFFS		28
#define SDRAM_TIMING2_TRP_MASK       	(0xF << SDRAM_TIMING2_TRP_OFFS)

#define SDRAM_TIMING2_TRRD_OFFS		24
#define SDRAM_TIMING2_TRRD_MASK       	(0xF << SDRAM_TIMING2_TRRD_OFFS)

#define SDRAM_TIMING2_TRCD_OFFS		20
#define SDRAM_TIMING2_TRCD_MASK       	(0xF << SDRAM_TIMING2_TRCD_OFFS)

#define SDRAM_TIMING2_TWR_OFFS		16
#define SDRAM_TIMING2_TWR_MASK       	(0xF << SDRAM_TIMING2_TWR_OFFS)

#define SDRAM_TIMING2_TRFC_OFFS	4
#define SDRAM_TIMING2_TRFC_MASK       	(0x1FF << SDRAM_TIMING2_TRFC_OFFS)

#define SDRAM_TIMING2_TMRD_OFFS	0
#define SDRAM_TIMING2_TMRD_MASK       	(0x7 << SDRAM_TIMING2_TMRD_OFFS)

/* Timing register 3 */
#define SDRAM_TIMING_3_REG   		(MV_DDR_REGS_BASE + 0x190)
#define SDRAM_TIMING3_TMOD_OFFS		28
#define SDRAM_TIMING3_TMOD_MASK       	(0xF << SDRAM_TIMING3_TMOD_OFFS)

#define SDRAM_TIMING3_TXSRD_OFFS	16
#define SDRAM_TIMING3_TXSRD_MASK       	(0x3FF << SDRAM_TIMING3_TXSRD_OFFS)

#define SDRAM_TIMING3_TXSNR_EXT_OFFS	26
#define SDRAM_TIMING3_TXSNR_EXT_MASK    (0x1 << SDRAM_TIMING3_TXSNR_EXT_OFFS)
#define SDRAM_TIMING3_TXSNR_OFFS	8
#define SDRAM_TIMING3_TXSNR_MASK       	(0xFF << SDRAM_TIMING3_TXSNR_OFFS)

#define SDRAM_TIMING3_TXARDS_OFFS	5
#define SDRAM_TIMING3_TXARDS_MASK       (0x7 << SDRAM_TIMING3_TXARDS_OFFS)

#define SDRAM_TIMING3_TXP_OFFS		0
#define SDRAM_TIMING3_TXP_MASK       	(0x7 << SDRAM_TIMING3_TXP_OFFS)

/* Timing register 4 */
#define SDRAM_TIMING_4_REG   		(MV_DDR_REGS_BASE + 0x1C0)
#define SDRAM_TIMING4_TCKE_OFFS		28
#define SDRAM_TIMING4_TCKE_MASK       	(0x7 << SDRAM_TIMING4_TCKE_OFFS)

#define SDRAM_TIMING4_INIT_COUNT_OFFS	20
#define SDRAM_TIMING4_INIT_COUNT_MASK	(0xFF << SDRAM_TIMING4_INIT_COUNT_OFFS)

#define SDRAM_TIMING4_TRWD_EXT_OFFS	17
#define SDRAM_TIMING4_TRWD_EXT_MASK    (0x7 << SDRAM_TIMING4_TRWD_EXT_OFFS)

#define SDRAM_TIMING4_REST_COUNT_OFFS	10
#define SDRAM_TIMING4_REST_COUNT_MASK	(0x3F << SDRAM_TIMING4_REST_COUNT_OFFS)

#define SDRAM_TIMING4_INIT_COUNT_NOP_OFFS		0
#define SDRAM_TIMING4_INIT_COUNT_NOP_MASK       	(0x3FF << SDRAM_TIMING4_INIT_COUNT_NOP_OFFS)

/* Timing register 5 */
#define SDRAM_TIMING_5_REG   		(MV_DDR_REGS_BASE + 0x650)
#define SDRAM_TIMING5_TRAS_OFFS		16
#define SDRAM_TIMING5_TRAS_MASK       	(0x3F << SDRAM_TIMING5_TRAS_OFFS)

#define SDRAM_TIMING5_TFAW_OFFS		4
#define SDRAM_TIMING5_TFAW_MASK		(0x3F << SDRAM_TIMING5_TFAW_OFFS)

#define SDRAM_TIMING5_TCCD_CCS_EXT_OFFS	0
#define SDRAM_TIMING5_TCCD_CCS_EXT_MASK    (0x7 << SDRAM_TIMING5_TCCD_CCS_EXT_OFFS)

/* Timing register 6 */
#define SDRAM_TIMING_6_REG   		(MV_DDR_REGS_BASE + 0x660)
#define SDRAM_TIMING6_TZQCS_OFFS	20
#define SDRAM_TIMING6_TZQCS_MASK       	(0x1FF << SDRAM_TIMING6_TZQCS_OFFS)

#define SDRAM_TIMING6_TZQOPER_OFFS	10
#define SDRAM_TIMING6_TZQOPER_MASK	(0x1FF << SDRAM_TIMING6_TZQOPER_OFFS)

#define SDRAM_TIMING5_TZQINIT_OFFS	0
#define SDRAM_TIMING5_TZQINIT_MASK	(0x3FF << SDRAM_TIMING5_TZQINIT_OFFS)

/* User command register */
#define SDRAM_USR_CMD_REG   		(MV_DDR_REGS_BASE + 0x120)

/* LP-DDR1 only */
#define SDRAM_USRCMD_DPD_REQ_OFFS	28
#define SDRAM_USRCMD_DPD_REQ_MASK       (0x3 << SDRAM_USRCMD_DPD_REQ_OFFS)
#define SDRAM_USRCMD_DPD_REQ_INIT       (0x1 << SDRAM_USRCMD_DPD_REQ_OFFS)
#define SDRAM_USRCMD_DPD_REQ_EXIT       (0x2 << SDRAM_USRCMD_DPD_REQ_OFFS)

#define SDRAM_USRCMD_CS1_OFFS		25
#define SDRAM_USRCMD_CS1_MASK       	(0x1 << SDRAM_USRCMD_CS1_OFFS)

#define SDRAM_USRCMD_CS0_OFFS		24
#define SDRAM_USRCMD_CS0_MASK       	(0x1 << SDRAM_USRCMD_CS0_OFFS)
/* DDR3 only */
#define SDRAM_USRCMD_ZQ_SHORT_OFFS	13
#define SDRAM_USRCMD_ZQ_SHORT_MASK      (0x1 << SDRAM_USRCMD_ZQ_SHORT_OFFS)
#define SDRAM_USRCMD_ZQ_SHORT_INIT      (0x1 << SDRAM_USRCMD_ZQ_SHORT_OFFS)
/* DDR3 only */
#define SDRAM_USRCMD_ZQ_LONG_OFFS	12
#define SDRAM_USRCMD_ZQ_LONG_MASK	(0x1 << SDRAM_USRCMD_ZQ_LONG_OFFS)
#define SDRAM_USRCMD_ZQ_LONG_INIT      	(0x1 << SDRAM_USRCMD_ZQ_LONG_OFFS)

#define SDRAM_USRCMD_EMRS3_OFFS		11
#define SDRAM_USRCMD_EMRS3_MASK		(0x1 << SDRAM_USRCMD_EMRS3_OFFS)
#define SDRAM_USRCMD_EMRS3_INIT      	(0x1 << SDRAM_USRCMD_EMRS3_OFFS)

#define SDRAM_USRCMD_EMRS2_OFFS		10
#define SDRAM_USRCMD_EMRS2_MASK		(0x1 << SDRAM_USRCMD_EMRS2_OFFS)
#define SDRAM_USRCMD_EMRS2_INIT      	(0x1 << SDRAM_USRCMD_EMRS2_OFFS)

#define SDRAM_USRCMD_EMRS1_OFFS		9
#define SDRAM_USRCMD_EMRS1_MASK		(0x1 << SDRAM_USRCMD_EMRS1_OFFS)
#define SDRAM_USRCMD_EMRS1_INIT      	(0x1 << SDRAM_USRCMD_EMRS1_OFFS)

#define SDRAM_USRCMD_MRS_OFFS		8
#define SDRAM_USRCMD_MRS_MASK		(0x1 << SDRAM_USRCMD_MRS_OFFS)
#define SDRAM_USRCMD_MRS_INIT      	(0x1 << SDRAM_USRCMD_MRS_OFFS)

#define SDRAM_USRCMD_SR_OFFS		6
#define SDRAM_USRCMD_SR_MASK		(0x1 << SDRAM_USRCMD_SR_REQ_OFFS)
#define SDRAM_USRCMD_SR_INIT      	(0x1 << SDRAM_USRCMD_SR_REQ_OFFS)
#define SDRAM_USRCMD_SR_EXIT      	(0x2 << SDRAM_USRCMD_SR_REQ_OFFS)

#define SDRAM_USRCMD_PRE_PS_OFFS	5
#define SDRAM_USRCMD_PRE_PS_MASK	(0x1 << SDRAM_USRCMD_PRE_PS_OFFS)
#define SDRAM_USRCMD_PRE_PS_INIT      	(0x1 << SDRAM_USRCMD_PRE_PS_OFFS)

#define SDRAM_USRCMD_ACT_PS_OFFS	4
#define SDRAM_USRCMD_ACT_PS_MASK	(0x1 << SDRAM_USRCMD_ACT_PS_OFFS)
#define SDRAM_USRCMD_ACT_PS_INIT      	(0x1 << SDRAM_USRCMD_ACT_PS_OFFS)

#define SDRAM_USRCMD_INIT_OFFS		0
#define SDRAM_USRCMD_INIT_MASK		(0x1 << SDRAM_USRCMD_INIT_OFFS)
#define SDRAM_USRCMD_INIT      		(0x1 << SDRAM_USRCMD_INIT_OFFS)

/* User status register */
#define SDRAM_STATUS_REG   		(MV_DDR_REGS_BASE + 0x1B0)
#define SDRAM_STATUS_INIT_DONE_OFFS	0
#define SDRAM_STATUS_INIT_DONE_MASK	(0x1 << SDRAM_STATUS_INIT_DONE_OFFS)
#define SDRAM_STATUS_INIT_DONE 		(0x1 << SDRAM_STATUS_INIT_DONE_OFFS)

/* configuration register 0,1,... */
#define SDRAM_CFG_REG(csNum)   		(MV_DDR_REGS_BASE + 0x20 + (csNum * 0x10))
/* LP-DDR1 only */
#define SDRAM_CFG_PASR_OFFS		28
#define SDRAM_CFG_PASR_MASK       	(7 << SDRAM_CFG_PASR_OFFS)

#define SDRAM_CFG_RTT_OFFS		17
#define SDRAM_CFG_RTT_MASK       	(7 << SDRAM_CFG_RTT_OFFS)
#define SDRAM_CFG_DDR3_RTT_120       	(2 << SDRAM_CFG_RTT_OFFS)
#define SDRAM_CFG_DDR2_RTT_150       	(2 << SDRAM_CFG_RTT_OFFS)

#define SDRAM_CFG_ODS_OFFS		14
#define SDRAM_CFG_ODS_MASK       	(3 << SDRAM_CFG_ODS_OFFS)

#define SDRAM_CFG_BANK_NUM_OFFS		12
#define SDRAM_CFG_BANK_NUM_MASK       	(3 << SDRAM_CFG_BANK_NUM_OFFS)
#define SDRAM_CFG_2_BANK_NUM       	(0 << SDRAM_CFG_BANK_NUM_OFFS)
#define SDRAM_CFG_4_BANK_NUM       	(1 << SDRAM_CFG_BANK_NUM_OFFS)
#define SDRAM_CFG_8_BANK_NUM       	(2 << SDRAM_CFG_BANK_NUM_OFFS)

#define SDRAM_CFG_ROW_NUM_OFFS		8
#define SDRAM_CFG_ROW_NUM_MASK       	(0xF << SDRAM_CFG_ROW_NUM_OFFS)
#define SDRAM_CFG_11_ROW_NUM       	(1 << SDRAM_CFG_ROW_NUM_OFFS)
#define SDRAM_CFG_12_ROW_NUM       	(2 << SDRAM_CFG_ROW_NUM_OFFS)
#define SDRAM_CFG_13_ROW_NUM       	(3 << SDRAM_CFG_ROW_NUM_OFFS)
#define SDRAM_CFG_14_ROW_NUM       	(4 << SDRAM_CFG_ROW_NUM_OFFS)
#define SDRAM_CFG_15_ROW_NUM       	(5 << SDRAM_CFG_ROW_NUM_OFFS)
#define SDRAM_CFG_16_ROW_NUM       	(6 << SDRAM_CFG_ROW_NUM_OFFS)

#define SDRAM_CFG_COL_NUM_OFFS		4
#define SDRAM_CFG_COL_NUM_MASK       	(0xF << SDRAM_CFG_COL_NUM_OFFS)
#define SDRAM_CFG_8_COL_NUM       	(1 << SDRAM_CFG_COL_NUM_OFFS)
#define SDRAM_CFG_9_COL_NUM       	(2 << SDRAM_CFG_COL_NUM_OFFS)
#define SDRAM_CFG_10_COL_NUM       	(3 << SDRAM_CFG_COL_NUM_OFFS)
#define SDRAM_CFG_11_COL_NUM       	(4 << SDRAM_CFG_COL_NUM_OFFS)
#define SDRAM_CFG_12_COL_NUM       	(5 << SDRAM_CFG_COL_NUM_OFFS)

/* configuration register decode address */
#define SDRAM_CFG_DEC_ADDR_REG 		(MV_DDR_REGS_BASE + 0x10)
#define SDRAM_CFG_DEC_ADDR_OFFS		16
#define SDRAM_CFG_DEC_ADDR_MASK       	(0xffff << SDRAM_CFG_DEC_ADDR_OFFS)


#ifdef __cplusplus
}
#endif


#endif /* __INCmvDramIfRegsh */