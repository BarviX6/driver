/***************************************************************************
 *
 * STM STV0900/0903 Multistandard Broadcast Frontend driver
 * Copyright (C) Manu Abraham <abraham.manu@gmail.com>
 *
 * Copyright (C) ST Microelectronics
 *
 * Version for:
 * Fulan Spark (STX7111) Tuner IX7306
 * Fulan Spark (STX7111) Tuner VX7903
 * Fulan Spark (STX7111) Tuner STV6110x
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */
#ifndef __STV090x_REG_H
#define __STV090x_REG_H

#define STV090x_MID                                0xf100
#define STV090x_OFFST_MCHIP_IDENT_FIELD            4
#define STV090x_WIDTH_MCHIP_IDENT_FIELD            4
#define STV090x_OFFST_MRELEASE_FIELD               0
#define STV090x_WIDTH_MRELEASE_FIELD               4

#define STV090x_DACR1                              0xf113
#define STV090x_OFFST_DACR1_MODE_FIELD             5
#define STV090x_WIDTH_DACR1_MODE_FIELD             3
#define STV090x_OFFST_DACR1_VALUE_FIELD            0
#define STV090x_WIDTH_DACR1_VALUE_FIELD            4

#define STV090x_DACR2                              0xf114
#define STV090x_OFFST_DACR2_VALUE_FIELD            0
#define STV090x_WIDTH_DACR2_VALUE_FIELD            8

#define STV090x_OUTCFG                             0xf11c
#define STV090x_OFFST_OUTSERRS1_HZ_FIELD           6
#define STV090x_WIDTH_OUTSERRS1_HZ_FIELD           1
#define STV090x_OFFST_OUTSERRS2_HZ_FIELD           5
#define STV090x_WIDTH_OUTSERRS2_HZ_FIELD           1
#define STV090x_OFFST_OUTSERRS3_HZ_FIELD           4
#define STV090x_WIDTH_OUTPARRS3_HZ_FIELD           1
#define STV090x_OFFST_OUTPARRS3_HZ_FIELD           3
#define STV090x_WIDTH_OUTPARRS3_HZ_FIELD           1

#define STV090x_MODECFG                            0xf11d

#define STV090x_IRQSTATUS3                         0xf120
#define STV090x_OFFST_SPLL_LOCK_FIELD              5
#define STV090x_WIDTH_SPLL_LOCK_FIELD              1
#define STV090x_OFFST_SSTREAM_LCK_3_FIELD          4
#define STV090x_WIDTH_SSTREAM_LCK_3_FIELD          1
#define STV090x_OFFST_SSTREAM_LCK_2_FIELD          3
#define STV090x_WIDTH_SSTREAM_LCK_2_FIELD          1
#define STV090x_OFFST_SSTREAM_LCK_1_FIELD          2
#define STV090x_WIDTH_SSTREAM_LCK_1_FIELD          1
#define STV090x_OFFST_SDVBS1_PRF_2_FIELD           1
#define STV090x_WIDTH_SDVBS1_PRF_2_FIELD           1
#define STV090x_OFFST_SDVBS1_PRF_1_FIELD           0
#define STV090x_WIDTH_SDVBS1_PRF_1_FIELD           1

#define STV090x_IRQSTATUS2                         0xf121
#define STV090x_OFFST_SSPY_ENDSIM_3_FIELD          7
#define STV090x_WIDTH_SSPY_ENDSIM_3_FIELD          1
#define STV090x_OFFST_SSPY_ENDSIM_2_FIELD          6
#define STV090x_WIDTH_SSPY_ENDSIM_2_FIELD          1
#define STV090x_OFFST_SSPY_ENDSIM_1_FIELD          5
#define STV090x_WIDTH_SSPY_ENDSIM_1_FIELD          1
#define STV090x_OFFST_SPKTDEL_ERROR_2_FIELD        4
#define STV090x_WIDTH_SPKTDEL_ERROR_2_FIELD        1
#define STV090x_OFFST_SPKTDEL_LOCKB_2_FIELD        3
#define STV090x_WIDTH_SPKTDEL_LOCKB_2_FIELD        1
#define STV090x_OFFST_SPKTDEL_LOCK_2_FIELD         2
#define STV090x_WIDTH_SPKTDEL_LOCK_2_FIELD         1
#define STV090x_OFFST_SPKTDEL_ERROR_1_FIELD        1
#define STV090x_WIDTH_SPKTDEL_ERROR_1_FIELD        1
#define STV090x_OFFST_SPKTDEL_LOCKB_1_FIELD        0
#define STV090x_WIDTH_SPKTDEL_LOCKB_1_FIELD        1

#define STV090x_IRQSTATUS1                         0xf122
#define STV090x_OFFST_SPKTDEL_LOCK_1_FIELD         7
#define STV090x_WIDTH_SPKTDEL_LOCK_1_FIELD         1
#define STV090x_OFFST_SDEMOD_LOCKB_2_FIELD         2
#define STV090x_WIDTH_SDEMOD_LOCKB_2_FIELD         1
#define STV090x_OFFST_SDEMOD_LOCK_2_FIELD          1
#define STV090x_WIDTH_SDEMOD_LOCK_2_FIELD          1
#define STV090x_OFFST_SDEMOD_IRQ_2_FIELD           0
#define STV090x_WIDTH_SDEMOD_IRQ_2_FIELD           1

#define STV090x_IRQSTATUS0                         0xf123
#define STV090x_OFFST_SDEMOD_LOCKB_1_FIELD         7
#define STV090x_WIDTH_SDEMOD_LOCKB_1_FIELD         1
#define STV090x_OFFST_SDEMOD_LOCK_1_FIELD          6
#define STV090x_WIDTH_SDEMOD_LOCK_1_FIELD          1
#define STV090x_OFFST_SDEMOD_IRQ_1_FIELD           5
#define STV090x_WIDTH_SDEMOD_IRQ_1_FIELD           1
#define STV090x_OFFST_SBCH_ERRFLAG_FIELD           4
#define STV090x_WIDTH_SBCH_ERRFLAG_FIELD           1
#define STV090x_OFFST_SDISEQC2RX_IRQ_FIELD         3
#define STV090x_WIDTH_SDISEQC2RX_IRQ_FIELD         1
#define STV090x_OFFST_SDISEQC2TX_IRQ_FIELD         2
#define STV090x_WIDTH_SDISEQC2TX_IRQ_FIELD         1
#define STV090x_OFFST_SDISEQC1RX_IRQ_FIELD         1
#define STV090x_WIDTH_SDISEQC1RX_IRQ_FIELD         1
#define STV090x_OFFST_SDISEQC1TX_IRQ_FIELD         0
#define STV090x_WIDTH_SDISEQC1TX_IRQ_FIELD         1

#define STV090x_IRQMASK3                           0xf124
#define STV090x_OFFST_MPLL_LOCK_FIELD              5
#define STV090x_WIDTH_MPLL_LOCK_FIELD              1
#define STV090x_OFFST_MSTREAM_LCK_3_FIELD          2
#define STV090x_WIDTH_MSTREAM_LCK_3_FIELD          3
#define STV090x_OFFST_MSTREAM_LCK_2_FIELD          2
#define STV090x_WIDTH_MSTREAM_LCK_2_FIELD          3
#define STV090x_OFFST_MSTREAM_LCK_1_FIELD          2
#define STV090x_WIDTH_MSTREAM_LCK_1_FIELD          3
#define STV090x_OFFST_MDVBS1_PRF_2_FIELD           1
#define STV090x_WIDTH_MDVBS1_PRF_2_FIELD           1
#define STV090x_OFFST_MDVBS1_PRF_1_FIELD           0
#define STV090x_WIDTH_MDVBS1_PRF_1_FIELD           1

#define STV090x_IRQMASK2                           0xf125
#define STV090x_OFFST_MSPY_ENDSIM_3_FIELD          5
#define STV090x_WIDTH_MSPY_ENDSIM_3_FIELD          3
#define STV090x_OFFST_MSPY_ENDSIM_2_FIELD          5
#define STV090x_WIDTH_MSPY_ENDSIM_2_FIELD          3
#define STV090x_OFFST_MSPY_ENDSIM_1_FIELD          5
#define STV090x_WIDTH_MSPY_ENDSIM_1_FIELD          3
#define STV090x_OFFST_MPKTDEL_ERROR_2_FIELD        4
#define STV090x_WIDTH_MPKTDEL_ERROR_2_FIELD        1
#define STV090x_OFFST_MPKTDEL_LOCKB_2_FIELD        3
#define STV090x_WIDTH_MPKTDEL_LOCKB_2_FIELD        1
#define STV090x_OFFST_MPKTDEL_LOCK_2_FIELD         2
#define STV090x_WIDTH_MPKTDEL_LOCK_2_FIELD         1
#define STV090x_OFFST_MPKTDEL_ERROR_1_FIELD        1
#define STV090x_WIDTH_MPKTDEL_ERROR_1_FIELD        1
#define STV090x_OFFST_MPKTDEL_LOCKB_1_FIELD        0
#define STV090x_WIDTH_MPKTDEL_LOCKB_1_FIELD        1

#define STV090x_IRQMASK1                           0xf126
#define STV090x_OFFST_MPKTDEL_LOCK_1_FIELD         7
#define STV090x_WIDTH_MPKTDEL_LOCK_1_FIELD         1
#define STV090x_OFFST_MEXTPINB2_FIELD              6
#define STV090x_WIDTH_MEXTPINB2_FIELD              1
#define STV090x_OFFST_MEXTPIN2_FIELD               5
#define STV090x_WIDTH_MEXTPIN2_FIELD               1
#define STV090x_OFFST_MEXTPINB1_FIELD              4
#define STV090x_WIDTH_MEXTPINB1_FIELD              1
#define STV090x_OFFST_MEXTPIN1_FIELD               3
#define STV090x_WIDTH_MEXTPIN1_FIELD               1
#define STV090x_OFFST_MDEMOD_LOCKB_2_FIELD         2
#define STV090x_WIDTH_MDEMOD_LOCKB_2_FIELD         1
#define STV090x_OFFST_MDEMOD_LOCK_2_FIELD          1
#define STV090x_WIDTH_MDEMOD_LOCK_2_FIELD          1
#define STV090x_OFFST_MDEMOD_IRQ_2_FIELD           0
#define STV090x_WIDTH_MDEMOD_IRQ_2_FIELD           1

#define STV090x_IRQMASK0                           0xf127
#define STV090x_OFFST_MDEMOD_LOCKB_1_FIELD         7
#define STV090x_WIDTH_MDEMOD_LOCKB_1_FIELD         1
#define STV090x_OFFST_MDEMOD_LOCK_1_FIELD          6
#define STV090x_WIDTH_MDEMOD_LOCK_1_FIELD          1
#define STV090x_OFFST_MDEMOD_IRQ_1_FIELD           5
#define STV090x_WIDTH_MDEMOD_IRQ_1_FIELD           1
#define STV090x_OFFST_MBCH_ERRFLAG_FIELD           4
#define STV090x_WIDTH_MBCH_ERRFLAG_FIELD           1
#define STV090x_OFFST_MDISEQC2RX_IRQ_FIELD         3
#define STV090x_WIDTH_MDISEQC2RX_IRQ_FIELD         1
#define STV090x_OFFST_MDISEQC2TX_IRQ_FIELD         2
#define STV090x_WIDTH_MDISEQC2TX_IRQ_FIELD         1
#define STV090x_OFFST_MDISEQC1RX_IRQ_FIELD         1
#define STV090x_WIDTH_MDISEQC1RX_IRQ_FIELD         1
#define STV090x_OFFST_MDISEQC1TX_IRQ_FIELD         0
#define STV090x_WIDTH_MDISEQC1TX_IRQ_FIELD         1

#define STV090x_I2CCFG                             0xf129
#define STV090x_OFFST_12C_FASTMODE_FIELD           3
#define STV090x_WIDTH_12C_FASTMODE_FIELD           1
#define STV090x_OFFST_12CADDR_INC_FIELD            0
#define STV090x_WIDTH_12CADDR_INC_FIELD            2

#define STV090x_Px_I2CRPT(__x)                     (0xf12a + (__x - 1) * 0x1)
#define STV090x_P1_I2CRPT                          STV090x_Px_I2CRPT(1)
#define STV090x_P2_I2CRPT                          STV090x_Px_I2CRPT(2)
#define STV090x_OFFST_Px_I2CT_ON_FIELD             7
#define STV090x_WIDTH_Px_I2CT_ON_FIELD             1
#define STV090x_OFFST_Px_ENARPT_LEVEL_FIELD        4
#define STV090x_WIDTH_Px_ENARPT_LEVEL_FIELD        3
#define STV090x_OFFST_Px_SCLT_DELAY_FIELD          3
#define STV090x_WIDTH_Px_SCLT_DELAY_FIELD          1
#define STV090x_OFFST_Px_STOP_ENABLE_FIELD         2
#define STV090x_WIDTH_Px_STOP_ENABLE_FIELD         1
#define STV090x_OFFST_Px_STOP_SDAT2SDA_FIELD       1
#define STV090x_WIDTH_Px_STOP_SDAT2SDA_FIELD       1

#define STV090x_CLKI2CFG                           0xf140
#define STV090x_OFFST_CLKI2_OPD_FIELD              7
#define STV090x_WIDTH_CLKI2_OPD_FIELD              1
#define STV090x_OFFST_CLKI2_CONFIG_FIELD           1
#define STV090x_WIDTH_CLKI2_CONFIG_FIELD           6
#define STV090x_OFFST_CLKI2_XOR_FIELD              0
#define STV090x_WIDTH_CLKI2_XOR_FIELD              1

#define STV090x_GPIOxCFG(__x)                      (0xf141 + (__x - 1))
#define STV090x_GPIO1CFG                           STV090x_GPIOxCFG(1)
#define STV090x_GPIO2CFG                           STV090x_GPIOxCFG(2)
#define STV090x_GPIO3CFG                           STV090x_GPIOxCFG(3)
#define STV090x_GPIO4CFG                           STV090x_GPIOxCFG(4)
#define STV090x_GPIO5CFG                           STV090x_GPIOxCFG(5)
#define STV090x_GPIO6CFG                           STV090x_GPIOxCFG(6)
#define STV090x_GPIO7CFG                           STV090x_GPIOxCFG(7)
#define STV090x_GPIO8CFG                           STV090x_GPIOxCFG(8)
#define STV090x_GPIO9CFG                           STV090x_GPIOxCFG(9)
#define STV090x_GPIO10CFG                          STV090x_GPIOxCFG(10)
#define STV090x_GPIO11CFG                          STV090x_GPIOxCFG(11)
#define STV090x_GPIO12CFG                          STV090x_GPIOxCFG(12)
#define STV090x_GPIO13CFG                          STV090x_GPIOxCFG(13)
#define STV090x_OFFST_GPIOx_OPD_FIELD              7
#define STV090x_WIDTH_GPIOx_OPD_FIELD              1
#define STV090x_OFFST_GPIOx_CONFIG_FIELD           1
#define STV090x_WIDTH_GPIOx_CONFIG_FIELD           6
#define STV090x_OFFST_GPIOx_XOR_FIELD              0
#define STV090x_WIDTH_GPIOx_XOR_FIELD              1

#define STV090x_CSxCFG(__x)                        (0xf14e + __x * 0x1)
#define STV090x_CS0CFG                             STV090x_CSxCFG(0)
#define STV090x_CS1CFG                             STV090x_CSxCFG(1)
#define STV090x_OFFST_CSX_OPD_FIELD                7
#define STV090x_WIDTH_CSX_OPD_FIELD                1
#define STV090x_OFFST_CSX_CONFIG_FIELD             1
#define STV090x_WIDTH_CSX_CONFIG_FIELD             6
#define STV090x_OFFST_CSX_XOR_FIELD                0
#define STV090x_WIDTH_CSX_XOR_FIELD                1


#define STV090x_STDBYCFG                           0xf150
#define STV090x_OFFST_STDBY_OPD_FIELD              7
#define STV090x_WIDTH_STDBY_OPD_FIELD              1
#define STV090x_OFFST_STDBY_CONFIG_FIELD           1
#define STV090x_WIDTH_STDBY_CONFIG_FIELD           6
#define STV090x_OFFST_STDBY_XOR_FIELD              0
#define STV090x_WIDTH_STDBY_XOR_FIELD              1

#define STV090x_DIRCLKCFG                          0xf151
#define STV090x_OFFST_DIRCLK_OPD_FIELD             7
#define STV090x_WIDTH_DIRCLK_OPD_FIELD             1
#define STV090x_OFFST_DIRCLK_CONFIG_FIELD          1
#define STV090x_WIDTH_DIRCLK_CONFIG_FIELD          6
#define STV090x_OFFST_DIRCLK_XOR_FIELD             0
#define STV090x_WIDTH_DIRCLK_XOR_FIELD             1


#define STV090x_AGCRFxCFG(__x)                     (0xf152 + (__x - 1) * 0x4)
#define STV090x_AGCRF1CFG                          STV090x_AGCRFxCFG(1)
#define STV090x_AGCRF2CFG                          STV090x_AGCRFxCFG(2)
#define STV090x_OFFST_AGCRFx_OPD_FIELD             7
#define STV090x_WIDTH_AGCRFx_OPD_FIELD             1
#define STV090x_OFFST_AGCRFx_CONFIG_FIELD          1
#define STV090x_WIDTH_AGCRFx_CONFIG_FIELD          6
#define STV090x_OFFST_AGCRFx_XOR_FIELD             0
#define STV090x_WIDTH_AGCRFx_XOR_FIELD             1

#define STV090x_SDATxCFG(__x)                      (0xf153 + (__x - 1) * 0x4)
#define STV090x_SDAT1CFG                           STV090x_SDATxCFG(1)
#define STV090x_SDAT2CFG                           STV090x_SDATxCFG(2)
#define STV090x_OFFST_SDATx_OPD_FIELD              7
#define STV090x_WIDTH_SDATx_OPD_FIELD              1
#define STV090x_OFFST_SDATx_CONFIG_FIELD           1
#define STV090x_WIDTH_SDATx_CONFIG_FIELD           6
#define STV090x_OFFST_SDATx_XOR_FIELD              0
#define STV090x_WIDTH_SDATx_XOR_FIELD              1

#define STV090x_SCLTxCFG(__x)                      (0xf154 + (__x - 1) * 0x4)
#define STV090x_SCLT1CFG                           STV090x_SCLTxCFG(1)
#define STV090x_SCLT2CFG                           STV090x_SCLTxCFG(2)
#define STV090x_OFFST_SCLTx_OPD_FIELD              7
#define STV090x_WIDTH_SCLTx_OPD_FIELD              1
#define STV090x_OFFST_SCLTx_CONFIG_FIELD           1
#define STV090x_WIDTH_SCLTx_CONFIG_FIELD           6
#define STV090x_OFFST_SCLTx_XOR_FIELD              0
#define STV090x_WIDTH_SCLTx_XOR_FIELD              1

#define STV090x_DISEQCOxCFG(__x)                   (0xf155 + (__x - 1) * 0x4)
#define STV090x_DISEQCO1CFG                        STV090x_DISEQCOxCFG(1)
#define STV090x_DISEQCO2CFG                        STV090x_DISEQCOxCFG(2)
#define STV090x_OFFST_DISEQCOx_OPD_FIELD           7
#define STV090x_WIDTH_DISEQCOx_OPD_FIELD           1
#define STV090x_OFFST_DISEQCOx_CONFIG_FIELD        1
#define STV090x_WIDTH_DISEQCOx_CONFIG_FIELD        6
#define STV090x_OFFST_DISEQCOx_XOR_FIELD           0
#define STV090x_WIDTH_DISEQCOx_XOR_FIELD           1

#define STV090x_CLKOUT27CFG                        0xf15a
#define STV090x_OFFST_CLKOUT27_OPD_FIELD           7
#define STV090x_WIDTH_CLKOUT27_OPD_FIELD           1
#define STV090x_OFFST_CLKOUT27_CONFIG_FIELD        1
#define STV090x_WIDTH_CLKOUT27_CONFIG_FIELD        6
#define STV090x_OFFST_CLKOUT27_XOR_FIELD           0
#define STV090x_WIDTH_CLKOUT27_XOR_FIELD           1

#define STV090x_ERRORxCFG(__x)                     (0xf15b + (__x - 1) * 0x5)
#define STV090x_ERROR1CFG                          STV090x_ERRORxCFG(1)
#define STV090x_ERROR2CFG                          STV090x_ERRORxCFG(2)
#define STV090x_ERROR3CFG                          STV090x_ERRORxCFG(3)
#define STV090x_OFFST_ERRORx_OPD_FIELD             7
#define STV090x_WIDTH_ERRORx_OPD_FIELD             1
#define STV090x_OFFST_ERRORx_CONFIG_FIELD          1
#define STV090x_WIDTH_ERRORx_CONFIG_FIELD          6
#define STV090x_OFFST_ERRORx_XOR_FIELD             0
#define STV090x_WIDTH_ERRORx_XOR_FIELD             1

#define STV090x_DPNxCFG(__x)                       (0xf15c + (__x - 1) * 0x5)
#define STV090x_DPN1CFG                            STV090x_DPNxCFG(1)
#define STV090x_DPN2CFG                            STV090x_DPNxCFG(2)
#define STV090x_DPN3CFG                            STV090x_DPNxCFG(3)
#define STV090x_OFFST_DPNx_OPD_FIELD               7
#define STV090x_WIDTH_DPNx_OPD_FIELD               1
#define STV090x_OFFST_DPNx_CONFIG_FIELD            1
#define STV090x_WIDTH_DPNx_CONFIG_FIELD            6
#define STV090x_OFFST_DPNx_XOR_FIELD               0
#define STV090x_WIDTH_DPNx_XOR_FIELD               1

#define STV090x_STROUTxCFG(__x)                    (0xf15d + (__x - 1) * 0x5)
#define STV090x_STROUT1CFG                         STV090x_STROUTxCFG(1)
#define STV090x_STROUT2CFG                         STV090x_STROUTxCFG(2)
#define STV090x_STROUT3CFG                         STV090x_STROUTxCFG(3)
#define STV090x_OFFST_STROUTx_OPD_FIELD            7
#define STV090x_WIDTH_STROUTx_OPD_FIELD            1
#define STV090x_OFFST_STROUTx_CONFIG_FIELD         1
#define STV090x_WIDTH_STROUTx_CONFIG_FIELD         6
#define STV090x_OFFST_STROUTx_XOR_FIELD            0
#define STV090x_WIDTH_STROUTx_XOR_FIELD            1

#define STV090x_CLKOUTxCFG(__x)                    (0xf15e + (__x - 1) * 0x5)
#define STV090x_CLKOUT1CFG                         STV090x_CLKOUTxCFG(1)
#define STV090x_CLKOUT2CFG                         STV090x_CLKOUTxCFG(2)
#define STV090x_CLKOUT3CFG                         STV090x_CLKOUTxCFG(3)
#define STV090x_OFFST_CLKOUTx_OPD_FIELD            7
#define STV090x_WIDTH_CLKOUTx_OPD_FIELD            1
#define STV090x_OFFST_CLKOUTx_CONFIG_FIELD         1
#define STV090x_WIDTH_CLKOUTx_CONFIG_FIELD         6
#define STV090x_OFFST_CLKOUTx_XOR_FIELD            0
#define STV090x_WIDTH_CLKOUTx_XOR_FIELD            1

#define STV090x_DATAxCFG(__x)                      (0xf15f + (__x - 71) * 0x5)
#define STV090x_DATA71CFG                          STV090x_DATAxCFG(71)
#define STV090x_DATA72CFG                          STV090x_DATAxCFG(72)
#define STV090x_DATA73CFG                          STV090x_DATAxCFG(73)
#define STV090x_OFFST_DATAx_OPD_FIELD              7
#define STV090x_WIDTH_DATAx_OPD_FIELD              1
#define STV090x_OFFST_DATAx_CONFIG_FIELD           1
#define STV090x_WIDTH_DATAx_CONFIG_FIELD           6
#define STV090x_OFFST_DATAx_XOR_FIELD              0
#define STV090x_WIDTH_DATAx_XOR_FIELD              1

#define STV090x_NCOARSE                            0xf1b3
#define STV090x_OFFST_M_DIV_FIELD                  0
#define STV090x_WIDTH_M_DIV_FIELD                  8

#define STV090x_NCOARSE1                           0xf1b4
#define STV090x_OFFST_N_DIV_FIELD                  0
#define STV090x_WIDTH_N_DIV_FIELD                  8

#define STV090x_SYNTCTRL                           0xf1b6
#define STV090x_OFFST_STANDBY_FIELD                7
#define STV090x_WIDTH_STANDBY_FIELD                1
#define STV090x_OFFST_BYPASSPLLCORE_FIELD          6
#define STV090x_WIDTH_BYPASSPLLCORE_FIELD          1
#define STV090x_OFFST_SELX1RATIO_FIELD             5
#define STV090x_WIDTH_SELX1RATIO_FIELD             1
#define STV090x_OFFST_STOP_PLL_FIELD               3
#define STV090x_WIDTH_SELX1RATIO_FIELD             1
#define STV090x_OFFST_BYPASSPLLFSK_FIELD           2
#define STV090x_WIDTH_BYPASSPLLFSK_FIELD           1
#define STV090x_OFFST_SELOSCI_FIELD                1
#define STV090x_WIDTH_SELOSCI_FIELD                1
#define STV090x_OFFST_BYPASSPLLADC_FIELD           0
#define STV090x_WIDTH_BYPASSPLLADC_FIELD           1

#define STV090x_FILTCTRL                           0xf1b7
#define STV090x_OFFST_INV_CLK135_FIELD             7
#define STV090x_WIDTH_INV_CLK135_FIELD             1
#define STV090x_OFFST_SEL_FSKCKDIV_FIELD           2
#define STV090x_WIDTH_SEL_FSKCKDIV_FIELD           1
#define STV090x_OFFST_INV_CLKFSK_FIELD             1
#define STV090x_WIDTH_INV_CLKFSK_FIELD             1
#define STV090x_OFFST_BYPASS_APPLI_FIELD           0
#define STV090x_WIDTH_BYPASS_APPLI_FIELD           1

#define STV090x_PLLSTAT                            0xf1b8
#define STV090x_OFFST_PLLLOCK_FIELD                0
#define STV090x_WIDTH_PLLLOCK_FIELD                1

#define STV090x_STOPCLK1                           0xf1c2
#define STV090x_OFFST_STOP_CLKPKDT2_FIELD          6
#define STV090x_WIDTH_STOP_CLKPKDT2_FIELD          1
#define STV090x_OFFST_STOP_CLKPKDT1_FIELD          5
#define STV090x_WIDTH_STOP_CLKPKDT1_FIELD          1
#define STV090x_OFFST_STOP_CLKFEC_FIELD            4
#define STV090x_WIDTH_STOP_CLKFEC_FIELD            1
#define STV090x_OFFST_STOP_CLKADCI2_FIELD          3
#define STV090x_WIDTH_STOP_CLKADCI2_FIELD          1
#define STV090x_OFFST_INV_CLKADCI2_FIELD           2
#define STV090x_WIDTH_INV_CLKADCI2_FIELD           1
#define STV090x_OFFST_STOP_CLKADCI1_FIELD          1
#define STV090x_WIDTH_STOP_CLKADCI1_FIELD          1
#define STV090x_OFFST_INV_CLKADCI1_FIELD           0
#define STV090x_WIDTH_INV_CLKADCI1_FIELD           1

#define STV090x_STOPCLK2                           0xf1c3
#define STV090x_OFFST_STOP_CLKSAMP2_FIELD          4
#define STV090x_WIDTH_STOP_CLKSAMP2_FIELD          1
#define STV090x_OFFST_STOP_CLKSAMP1_FIELD          3
#define STV090x_WIDTH_STOP_CLKSAMP1_FIELD          1
#define STV090x_OFFST_STOP_CLKVIT2_FIELD           2
#define STV090x_WIDTH_STOP_CLKVIT2_FIELD           1
#define STV090x_OFFST_STOP_CLKVIT1_FIELD           1
#define STV090x_WIDTH_STOP_CLKVIT1_FIELD           1
#define STV090x_OFFST_STOP_CLKTS_FIELD             0
#define STV090x_WIDTH_STOP_CLKTS_FIELD             1

#define STV090x_TSTTNR0                            0xf1df
#define STV090x_OFFST_SEL_FSK_FIELD                7
#define STV090x_WIDTH_SEL_FSK_FIELD                1
#define STV090x_OFFST_FSK_PON_FIELD                2
#define STV090x_WIDTH_FSK_PON_FIELD                1

#define STV090x_TSTTNR1                            0xf1e0
#define STV090x_OFFST_ADC1_PON_FIELD               1
#define STV090x_WIDTH_ADC1_PON_FIELD               1
#define STV090x_OFFST_ADC1_INMODE_FIELD            0
#define STV090x_WIDTH_ADC1_INMODE_FIELD            1

#define STV090x_TSTTNR2                            0xf1e1
#define STV090x_OFFST_DISEQC1_PON_FIELD            5
#define STV090x_WIDTH_DISEQC1_PON_FIELD            1

#define STV090x_TSTTNR3                            0xf1e2
#define STV090x_OFFST_ADC2_PON_FIELD               1
#define STV090x_WIDTH_ADC2_PON_FIELD               1
#define STV090x_OFFST_ADC2_INMODE_FIELD            0
#define STV090x_WIDTH_ADC2_INMODE_FIELD            1

#define STV090x_TSTTNR4                            0xf1e3
#define STV090x_OFFST_DISEQC2_PON_FIELD            5
#define STV090x_WIDTH_DISEQC2_PON_FIELD            1

#define STV090x_FSKTFC2                            0xf170
#define STV090x_OFFST_FSKT_KMOD_FIELD              2
#define STV090x_WIDTH_FSKT_KMOD_FIELD              6
#define STV090x_OFFST_FSKT_CAR_FIELD               0
#define STV090x_WIDTH_FSKT_CAR_FIELD               2

#define STV090x_FSKTFC1                            0xf171
#define STV090x_OFFST_FSKTC1_CAR_FIELD             0
#define STV090x_WIDTH_FSKTC1_CAR_FIELD             8

#define STV090x_FSKTFC0                            0xf172
#define STV090x_OFFST_FSKTC0_CAR_FIELD             0
#define STV090x_WIDTH_FSKTC0_CAR_FIELD             8

#define STV090x_FSKTDELTAF1                        0xf173
#define STV090x_OFFST_FSKTF1_DELTAF_FIELD          0
#define STV090x_WIDTH_FSKTF1_DELTAF_FIELD          4

#define STV090x_FSKTDELTAF0                        0xf174
#define STV090x_OFFST_FSKTF0_DELTAF_FIELD          0
#define STV090x_WIDTH_FSKTF0_DELTAF_FIELD          8

#define STV090x_FSKTCTRL                           0xf175
#define STV090x_OFFST_FSKT_EN_SGN_FIELD            6
#define STV090x_WIDTH_FSKT_EN_SGN_FIELD            1
#define STV090x_OFFST_FSKT_MOD_SGN_FIELD           5
#define STV090x_WIDTH_FSKT_MOD_SGN_FIELD           1
#define STV090x_OFFST_FSKT_MOD_EN_FIELD            2
#define STV090x_WIDTH_FSKT_MOD_EN_FIELD            3
#define STV090x_OFFST_FSKT_DACMODE_FIELD           0
#define STV090x_WIDTH_FSKT_DACMODE_FIELD           2

#define STV090x_FSKRFC2                            0xf176
#define STV090x_OFFST_FSKRC2_DETSGN_FIELD          6
#define STV090x_WIDTH_FSKRC2_DETSGN_FIELD          1
#define STV090x_OFFST_FSKRC2_OUTSGN_FIELD          5
#define STV090x_WIDTH_FSKRC2_OUTSGN_FIELD          1
#define STV090x_OFFST_FSKRC2_KAGC_FIELD            2
#define STV090x_WIDTH_FSKRC2_KAGC_FIELD            3
#define STV090x_OFFST_FSKRC2_CAR_FIELD             0
#define STV090x_WIDTH_FSKRC2_CAR_FIELD             2

#define STV090x_FSKRFC1                            0xf177
#define STV090x_OFFST_FSKRC1_CAR_FIELD             0
#define STV090x_WIDTH_FSKRC1_CAR_FIELD             8

#define STV090x_FSKRFC0                            0xf178
#define STV090x_OFFST_FSKRC0_CAR_FIELD             0
#define STV090x_WIDTH_FSKRC0_CAR_FIELD             8

#define STV090x_FSKRK1                             0xf179
#define STV090x_OFFST_FSKR_K1_EXP_FIELD            5
#define STV090x_WIDTH_FSKR_K1_EXP_FIELD            3
#define STV090x_OFFST_FSKR_K1_MANT_FIELD           0
#define STV090x_WIDTH_FSKR_K1_MANT_FIELD           5

#define STV090x_FSKRK2                             0xf17a
#define STV090x_OFFST_FSKR_K2_EXP_FIELD            5
#define STV090x_WIDTH_FSKR_K2_EXP_FIELD            3
#define STV090x_OFFST_FSKR_K2_MANT_FIELD           0
#define STV090x_WIDTH_FSKR_K2_MANT_FIELD           5

#define STV090x_FSKRAGCR                           0xf17b
#define STV090x_OFFST_FSKR_OUTCTL_FIELD            6
#define STV090x_WIDTH_FSKR_OUTCTL_FIELD            2
#define STV090x_OFFST_FSKR_AGC_REF_FIELD           0
#define STV090x_WIDTH_FSKR_AGC_REF_FIELD           6

#define STV090x_FSKRAGC                            0xf17c
#define STV090x_OFFST_FSKR_AGC_ACCU_FIELD          0
#define STV090x_WIDTH_FSKR_AGC_ACCU_FIELD          8

#define STV090x_FSKRALPHA                          0xf17d
#define STV090x_OFFST_FSKR_ALPHA_EXP_FIELD         2
#define STV090x_WIDTH_FSKR_ALPHA_EXP_FIELD         3
#define STV090x_OFFST_FSKR_ALPHA_M_FIELD           0
#define STV090x_WIDTH_FSKR_ALPHA_M_FIELD           2

#define STV090x_FSKRPLTH1                          0xf17e
#define STV090x_OFFST_FSKR_BETA_FIELD              4
#define STV090x_WIDTH_FSKR_BETA_FIELD              4
#define STV090x_OFFST_FSKR_PLL_TRESH1_FIELD        0
#define STV090x_WIDTH_FSKR_PLL_TRESH1_FIELD        4

#define STV090x_FSKRPLTH0                          0xf17f
#define STV090x_OFFST_FSKR_PLL_TRESH0_FIELD        0
#define STV090x_WIDTH_FSKR_PLL_TRESH0_FIELD        8

#define STV090x_FSKRDF1                            0xf180
#define STV090x_OFFST_FSKR_DELTAF1_FIELD           0
#define STV090x_WIDTH_FSKR_DELTAF1_FIELD           5

#define STV090x_FSKRDF0                            0xf181
#define STV090x_OFFST_FSKR_DELTAF0_FIELD           0
#define STV090x_WIDTH_FSKR_DELTAF0_FIELD           8

#define STV090x_FSKRSTEPP                          0xf182
#define STV090x_OFFST_FSKR_STEP_PLUS_FIELD         0
#define STV090x_WIDTH_FSKR_STEP_PLUS_FIELD         8

#define STV090x_FSKRSTEPM                          0xf183
#define STV090x_OFFST_FSKR_STEP_MINUS_FIELD        0
#define STV090x_WIDTH_FSKR_STEP_MINUS_FIELD        8

#define STV090x_FSKRDET1                           0xf184
#define STV090x_OFFST_FSKR_CARDET1_ACCU_FIELD      0
#define STV090x_WIDTH_FSKR_CARDET1_ACCU_FIELD      4

#define STV090x_FSKRDET0                           0xf185
#define STV090x_OFFST_FSKR_CARDET0_ACCU_FIELD      0
#define STV090x_WIDTH_FSKR_CARDET0_ACCU_FIELD      8

#define STV090x_FSKRDTH1                           0xf186
#define STV090x_OFFST_FSKR_CARLOSS_THRESH1_FIELD   4
#define STV090x_WIDTH_FSKR_CARLOSS_THRESH1_FIELD   4
#define STV090x_OFFST_FSKR_CARDET_THRESH1_FIELD    0
#define STV090x_WIDTH_FSKR_CARDET_THRESH1_FIELD    4

#define STV090x_FSKRDTH0                           0xf187
#define STV090x_OFFST_FSKR_CARDET_THRESH0_FIELD    0
#define STV090x_WIDTH_FSKR_CARDET_THRESH0_FIELD    8

#define STV090x_FSKRLOSS                           0xf188
#define STV090x_OFFST_FSKR_CARLOSS_THRESH_FIELD    0
#define STV090x_WIDTH_FSKR_CARLOSS_THRESH_FIELD    8

#define STV090x_Px_DISTXCTL(__x)                   (0xF1A0 - (__x - 1) * 0x10)
#define STV090x_P1_DISTXCTL                        STV090x_Px_DISTXCTL(1)
#define STV090x_P2_DISTXCTL                        STV090x_Px_DISTXCTL(2)
#define STV090x_OFFST_Px_TIM_OFF_FIELD             7
#define STV090x_WIDTH_Px_TIM_OFF_FIELD             1
#define STV090x_OFFST_Px_DISEQC_RESET_FIELD        6
#define STV090x_WIDTH_Px_DISEQC_RESET_FIELD        1
#define STV090x_OFFST_Px_TIM_CMD_FIELD             4
#define STV090x_WIDTH_Px_TIM_CMD_FIELD             2
#define STV090x_OFFST_Px_DIS_PRECHARGE_FIELD       3
#define STV090x_WIDTH_Px_DIS_PRECHARGE_FIELD       1
#define STV090x_OFFST_Px_DISTX_MODE_FIELD          0
#define STV090x_WIDTH_Px_DISTX_MODE_FIELD          3

#define STV090x_Px_DISRXCTL(__x)                   (0xf1a1 - (__x - 1) * 0x10)
#define STV090x_P1_DISRXCTL                        STV090x_Px_DISRXCTL(1)
#define STV090x_P2_DISRXCTL                        STV090x_Px_DISRXCTL(2)
#define STV090x_OFFST_Px_RECEIVER_ON_FIELD         7
#define STV090x_WIDTH_Px_RECEIVER_ON_FIELD         1
#define STV090x_OFFST_Px_IGNO_SHORT22K_FIELD       6
#define STV090x_WIDTH_Px_IGNO_SHORT22K_FIELD       1
#define STV090x_OFFST_Px_ONECHIP_TRX_FIELD         5
#define STV090x_WIDTH_Px_ONECHIP_TRX_FIELD         1
#define STV090x_OFFST_Px_EXT_ENVELOP_FIELD         4
#define STV090x_WIDTH_Px_EXT_ENVELOP_FIELD         1
#define STV090x_OFFST_Px_PIN_SELECT_FIELD          2
#define STV090x_WIDTH_Px_PIN_SELECT_FIELD          2
#define STV090x_OFFST_Px_IRQ_RXEND_FIELD           1
#define STV090x_WIDTH_Px_IRQ_RXEND_FIELD           1
#define STV090x_OFFST_Px_IRQ_4NBYTES_FIELD         0
#define STV090x_WIDTH_Px_IRQ_4NBYTES_FIELD         1

#define STV090x_Px_DISRX_ST0(__x)                  (0xf1a4 - (__x - 1) * 0x10)
#define STV090x_P1_DISRX_ST0                       STV090x_Px_DISRX_ST0(1)
#define STV090x_P2_DISRX_ST0                       STV090x_Px_DISRX_ST0(2)
#define STV090x_OFFST_Px_RX_END_FIELD              7
#define STV090x_WIDTH_Px_RX_END_FIELD              1
#define STV090x_OFFST_Px_RX_ACTIVE_FIELD           6
#define STV090x_WIDTH_Px_RX_ACTIVE_FIELD           1
#define STV090x_OFFST_Px_SHORT_22KHZ_FIELD         5
#define STV090x_WIDTH_Px_SHORT_22KHZ_FIELD         1
#define STV090x_OFFST_Px_CONT_TONE_FIELD           4
#define STV090x_WIDTH_Px_CONT_TONE_FIELD           1
#define STV090x_OFFST_Px_FIFO_4BREADY_FIELD        3
#define STV090x_WIDTH_Px_FIFO_4BREADY_FIELD        2
#define STV090x_OFFST_Px_FIFO_EMPTY_FIELD          2
#define STV090x_WIDTH_Px_FIFO_EMPTY_FIELD          1
#define STV090x_OFFST_Px_ABORT_DISRX_FIELD         0
#define STV090x_WIDTH_Px_ABORT_DISRX_FIELD         1

#define STV090x_Px_DISRX_ST1(__x)                  (0xf1a5 - (__x - 1) * 0x10)
#define STV090x_P1_DISRX_ST1                       STV090x_Px_DISRX_ST1(1)
#define STV090x_P2_DISRX_ST1                       STV090x_Px_DISRX_ST1(2)
#define STV090x_OFFST_Px_RX_FAIL_FIELD             7
#define STV090x_WIDTH_Px_RX_FAIL_FIELD             1
#define STV090x_OFFST_Px_FIFO_PARITYFAIL_FIELD     6
#define STV090x_WIDTH_Px_FIFO_PARITYFAIL_FIELD     1
#define STV090x_OFFST_Px_RX_NONBYTE_FIELD          5
#define STV090x_WIDTH_Px_RX_NONBYTE_FIELD          1
#define STV090x_OFFST_Px_FIFO_OVERFLOW_FIELD       4
#define STV090x_WIDTH_Px_FIFO_OVERFLOW_FIELD       1
#define STV090x_OFFST_Px_FIFO_BYTENBR_FIELD        0
#define STV090x_WIDTH_Px_FIFO_BYTENBR_FIELD        4

#define STV090x_Px_DISRXDATA(__x)                  (0xf1a6 - (__x - 1) * 0x10)
#define STV090x_P1_DISRXDATA                       STV090x_Px_DISRXDATA(1)
#define STV090x_P2_DISRXDATA                       STV090x_Px_DISRXDATA(2)
#define STV090x_OFFST_Px_DISRX_DATA_FIELD          0
#define STV090x_WIDTH_Px_DISRX_DATA_FIELD          8

#define STV090x_Px_DISTXDATA(__x)                  (0xf1a7 - (__x - 1) * 0x10)
#define STV090x_P1_DISTXDATA                       STV090x_Px_DISTXDATA(1)
#define STV090x_P2_DISTXDATA                       STV090x_Px_DISTXDATA(2)
#define STV090x_OFFST_Px_DISEQC_FIFO_FIELD         0
#define STV090x_WIDTH_Px_DISEQC_FIFO_FIELD         8

#define STV090x_Px_DISTXSTATUS(__x)                (0xf1a8 - (__x - 1) * 0x10)
#define STV090x_P1_DISTXSTATUS                     STV090x_Px_DISTXSTATUS(1)
#define STV090x_P2_DISTXSTATUS                     STV090x_Px_DISTXSTATUS(2)
#define STV090x_OFFST_Px_TX_FAIL_FIELD             7
#define STV090x_WIDTH_Px_TX_FAIL_FIELD             1
#define STV090x_OFFST_Px_FIFO_FULL_FIELD           6
#define STV090x_WIDTH_Px_FIFO_FULL_FIELD           1
#define STV090x_OFFST_Px_TX_IDLE_FIELD             5
#define STV090x_WIDTH_Px_TX_IDLE_FIELD             1
#define STV090x_OFFST_Px_GAP_BURST_FIELD           4
#define STV090x_WIDTH_Px_GAP_BURST_FIELD           1
#define STV090x_OFFST_Px_TXFIFO_BYTES_FIELD        0
#define STV090x_WIDTH_Px_TXFIFO_BYTES_FIELD        4

#define STV090x_Px_F22TX(__x)                      (0xf1a9 - (__x - 1) * 0x10)
#define STV090x_P1_F22TX                           STV090x_Px_F22TX(1)
#define STV090x_P2_F22TX                           STV090x_Px_F22TX(2)
#define STV090x_OFFST_Px_F22_REG_FIELD             0
#define STV090x_WIDTH_Px_F22_REG_FIELD             8

#define STV090x_Px_F22RX(__x)                      (0xf1aa - (__x - 1) * 0x10)
#define STV090x_P1_F22RX                           STV090x_Px_F22RX(1)
#define STV090x_P2_F22RX                           STV090x_Px_F22RX(2)
#define STV090x_OFFST_Px_F22RX_REG_FIELD           0
#define STV090x_WIDTH_Px_F22RX_REG_FIELD           8

#define STV090x_Px_ACRPRESC(__x)                   (0xf1ac - (__x - 1) * 0x10)
#define STV090x_P1_ACRPRESC                        STV090x_Px_ACRPRESC(1)
#define STV090x_P2_ACRPRESC                        STV090x_Px_ACRPRESC(2)
#define STV090x_OFFST_Px_ACR_PRESC_FIELD           0
#define STV090x_WIDTH_Px_ACR_PRESC_FIELD           3

#define STV090x_Px_ACRDIV(__x)                     (0xf1ad - (__x - 1) * 0x10)
#define STV090x_P1_ACRDIV                          STV090x_Px_ACRDIV(1)
#define STV090x_P2_ACRDIV                          STV090x_Px_ACRDIV(2)
#define STV090x_OFFST_Px_ACR_DIV_FIELD             0
#define STV090x_WIDTH_Px_ACR_DIV_FIELD             8

#define STV090x_Px_IQCONST(__x)                    (0xF400 - (__x - 1) * 0x200)
#define STV090x_P1_IQCONST                         STV090x_Px_IQCONST(1)
#define STV090x_P2_IQCONST                         STV090x_Px_IQCONST(2)
#define STV090x_OFFST_Px_CONSTEL_SELECT_FIELD      5
#define STV090x_WIDTH_Px_CONSTEL_SELECT_FIELD      2

#define STV090x_Px_NOSCFG(__x)                     (0xF401 - (__x - 1) * 0x200)
#define STV090x_P1_NOSCFG                          STV090x_Px_NOSCFG(1)
#define STV090x_P2_NOSCFG                          STV090x_Px_NOSCFG(2)
#define STV090x_OFFST_Px_NOSPLH_BETA_FIELD         3
#define STV090x_WIDTH_Px_NOSPLH_BETA_FIELD         2
#define STV090x_OFFST_Px_NOSDATA_BETA_FIELD        0
#define STV090x_WIDTH_Px_NOSDATA_BETA_FIELD        3

#define STV090x_Px_ISYMB(__x)                      (0xF402 - (__x - 1) * 0x200)
#define STV090x_P1_ISYMB                           STV090x_Px_ISYMB(1)
#define STV090x_P2_ISYMB                           STV090x_Px_ISYMB(2)
#define STV090x_OFFST_Px_I_SYMBOL_FIELD            0
#define STV090x_WIDTH_Px_I_SYMBOL_FIELD            8

#define STV090x_Px_QSYMB(__x)                      (0xF403 - (__x - 1) * 0x200)
#define STV090x_P1_QSYMB                           STV090x_Px_QSYMB(1)
#define STV090x_P2_QSYMB                           STV090x_Px_QSYMB(2)
#define STV090x_OFFST_Px_Q_SYMBOL_FIELD            0
#define STV090x_WIDTH_Px_Q_SYMBOL_FIELD            8

#define STV090x_Px_AGC1CFG(__x)                    (0xF404 - (__x - 1) * 0x200)
#define STV090x_P1_AGC1CFG                         STV090x_Px_AGC1CFG(1)
#define STV090x_P2_AGC1CFG                         STV090x_Px_AGC1CFG(2)
#define STV090x_OFFST_Px_DC_FROZEN_FIELD           7
#define STV090x_WIDTH_Px_DC_FROZEN_FIELD           1
#define STV090x_OFFST_Px_DC_CORRECT_FIELD          6
#define STV090x_WIDTH_Px_DC_CORRECT_FIELD          1
#define STV090x_OFFST_Px_AMM_FROZEN_FIELD          5
#define STV090x_WIDTH_Px_AMM_FROZEN_FIELD          1
#define STV090x_OFFST_Px_AMM_CORRECT_FIELD         4
#define STV090x_WIDTH_Px_AMM_CORRECT_FIELD         1
#define STV090x_OFFST_Px_QUAD_FROZEN_FIELD         3
#define STV090x_WIDTH_Px_QUAD_FROZEN_FIELD         1
#define STV090x_OFFST_Px_QUAD_CORRECT_FIELD        2
#define STV090x_WIDTH_Px_QUAD_CORRECT_FIELD        1

#define STV090x_Px_AGC1CN(__x)                     (0xF406 - (__x - 1) * 0x200)
#define STV090x_P1_AGC1CN                          STV090x_Px_AGC1CN(1)
#define STV090x_P2_AGC1CN                          STV090x_Px_AGC1CN(2)
#define STV090x_WIDTH_Px_AGC1_LOCKED_FIELD         7
#define STV090x_OFFST_Px_AGC1_LOCKED_FIELD         1
#define STV090x_OFFST_Px_AGC1_MINPOWER_FIELD       4
#define STV090x_WIDTH_Px_AGC1_MINPOWER_FIELD       1
#define STV090x_OFFST_Px_AGCOUT_FAST_FIELD         3
#define STV090x_WIDTH_Px_AGCOUT_FAST_FIELD         1
#define STV090x_OFFST_Px_AGCIQ_BETA_FIELD          0
#define STV090x_WIDTH_Px_AGCIQ_BETA_FIELD          3

#define STV090x_Px_AGC1REF(__x)                    (0xF407 - (__x - 1) * 0x200)
#define STV090x_P1_AGC1REF                         STV090x_Px_AGC1REF(1)
#define STV090x_P2_AGC1REF                         STV090x_Px_AGC1REF(2)
#define STV090x_OFFST_Px_AGCIQ_REF_FIELD           0
#define STV090x_WIDTH_Px_AGCIQ_REF_FIELD           8

#define STV090x_Px_IDCCOMP(__x)                    (0xF408 - (__x - 1) * 0x200)
#define STV090x_P1_IDCCOMP                         STV090x_Px_IDCCOMP(1)
#define STV090x_P2_IDCCOMP                         STV090x_Px_IDCCOMP(2)
#define STV090x_OFFST_Px_IAVERAGE_ADJ_FIELD        0
#define STV090x_WIDTH_Px_IAVERAGE_ADJ_FIELD        8

#define STV090x_Px_QDCCOMP(__x)                    (0xF409 - (__x - 1) * 0x200)
#define STV090x_P1_QDCCOMP                         STV090x_Px_QDCCOMP(1)
#define STV090x_P2_QDCCOMP                         STV090x_Px_QDCCOMP(2)
#define STV090x_OFFST_Px_QAVERAGE_ADJ_FIELD        0
#define STV090x_WIDTH_Px_QAVERAGE_ADJ_FIELD        8

#define STV090x_Px_POWERI(__x)                     (0xF40A - (__x - 1) * 0x200)
#define STV090x_P1_POWERI                          STV090x_Px_POWERI(1)
#define STV090x_P2_POWERI                          STV090x_Px_POWERI(2)
#define STV090x_OFFST_Px_POWER_I_FIELD             0
#define STV090x_WIDTH_Px_POWER_I_FIELD             8

#define STV090x_Px_POWERQ(__x)                     (0xF40B - (__x - 1) * 0x200)
#define STV090x_P1_POWERQ                          STV090x_Px_POWERQ(1)
#define STV090x_P2_POWERQ                          STV090x_Px_POWERQ(2)
#define STV090x_OFFST_Px_POWER_Q_FIELD             0
#define STV090x_WIDTH_Px_POWER_Q_FIELD             8

#define STV090x_Px_AGC1AMM(__x)                    (0xF40C - (__x - 1) * 0x200)
#define STV090x_P1_AGC1AMM                         STV090x_Px_AGC1AMM(1)
#define STV090x_P2_AGC1AMM                         STV090x_Px_AGC1AMM(2)
#define STV090x_OFFST_Px_AMM_VALUE_FIELD           0
#define STV090x_WIDTH_Px_AMM_VALUE_FIELD           8

#define STV090x_Px_AGC1QUAD(__x)                   (0xF40D - (__x - 1) * 0x200)
#define STV090x_P1_AGC1QUAD                        STV090x_Px_AGC1QUAD(1)
#define STV090x_P2_AGC1QUAD                        STV090x_Px_AGC1QUAD(2)
#define STV090x_OFFST_Px_QUAD_VALUE_FIELD          0
#define STV090x_WIDTH_Px_QUAD_VALUE_FIELD          8

#define STV090x_Px_AGCIQINy(__x, __y)              (0xF40F - (__x - 1) * 0x200 - __y * 0x1)
#define STV090x_P1_AGCIQIN0                        STV090x_Px_AGCIQINy(1, 0)
#define STV090x_P1_AGCIQIN1                        STV090x_Px_AGCIQINy(1, 1)
#define STV090x_P2_AGCIQIN0                        STV090x_Px_AGCIQINy(2, 0)
#define STV090x_P2_AGCIQIN1                        STV090x_Px_AGCIQINy(2, 1)
#define STV090x_OFFST_Px_AGCIQ_VALUE_FIELD         0
#define STV090x_WIDTH_Px_AGCIQ_VALUE_FIELD         8

#define STV090x_Px_DEMOD(__x)                      (0xF410 - (__x - 1) * 0x200)
#define STV090x_P1_DEMOD                           STV090x_Px_DEMOD(1)
#define STV090x_P2_DEMOD                           STV090x_Px_DEMOD(2)
#define STV090x_OFFST_Px_MANUAL_S2ROLLOFF_FIELD    7
#define STV090x_WIDTH_Px_MANUAL_S2ROLLOFF_FIELD    1
#define STV090x_OFFST_Px_DEMOD_STOP_FIELD          6
#define STV090x_WIDTH_Px_DEMOD_STOP_FIELD          1
#define STV090x_OFFST_Px_SPECINV_CONTROL_FIELD     4
#define STV090x_WIDTH_Px_SPECINV_CONTROL_FIELD     2
#define STV090x_OFFST_Px_FORCE_ENASAMP_FIELD       3
#define STV090x_WIDTH_Px_FORCE_ENASAMP_FIELD       1
#define STV090x_OFFST_Px_MANUAL_SXROLLOFF_FIELD    2
#define STV090x_WIDTH_Px_MANUAL_SXROLLOFF_FIELD    1
#define STV090x_OFFST_Px_ROLLOFF_CONTROL_FIELD     0
#define STV090x_WIDTH_Px_ROLLOFF_CONTROL_FIELD     2

#define STV090x_Px_DMDMODCOD(__x)                  (0xF411 - (__x - 1) * 0x200)
#define STV090x_P1_DMDMODCOD                       STV090x_Px_DMDMODCOD(1)
#define STV090x_P2_DMDMODCOD                       STV090x_Px_DMDMODCOD(2)
#define STV090x_OFFST_Px_MANUAL_MODCOD_FIELD       7
#define STV090x_WIDTH_Px_MANUAL_MODCOD_FIELD       1
#define STV090x_OFFST_Px_DEMOD_MODCOD_FIELD        2
#define STV090x_WIDTH_Px_DEMOD_MODCOD_FIELD        5
#define STV090x_OFFST_Px_DEMOD_TYPE_FIELD          0
#define STV090x_WIDTH_Px_DEMOD_TYPE_FIELD          2

#define STV090x_Px_DSTATUS(__x)                    (0xF412 - (__x - 1) * 0x200)
#define STV090x_P1_DSTATUS                         STV090x_Px_DSTATUS(1)
#define STV090x_P2_DSTATUS                         STV090x_Px_DSTATUS(2)
#define STV090x_OFFST_Px_CAR_LOCK_FIELD            7
#define STV090x_WIDTH_Px_CAR_LOCK_FIELD            1
#define STV090x_OFFST_Px_TMGLOCK_QUALITY_FIELD     5
#define STV090x_WIDTH_Px_TMGLOCK_QUALITY_FIELD     2
#define STV090x_OFFST_Px_LOCK_DEFINITIF_FIELD      3
#define STV090x_WIDTH_Px_LOCK_DEFINITIF_FIELD      1

#define STV090x_Px_DSTATUS2(__x)                   (0xF413 - (__x - 1) * 0x200)
#define STV090x_P1_DSTATUS2                        STV090x_Px_DSTATUS2(1)
#define STV090x_P2_DSTATUS2                        STV090x_Px_DSTATUS2(2)
#define STV090x_OFFST_Px_DEMOD_DELOCK_FIELD        7
#define STV090x_WIDTH_Px_DEMOD_DELOCK_FIELD        1
#define STV090x_OFFST_Px_AGC1_NOSIGNALACK_FIELD    3
#define STV090x_WIDTH_Px_AGC1_NOSIGNALACK_FIELD    1
#define STV090x_OFFST_Px_AGC2_OVERFLOW_FIELD       2
#define STV090x_WIDTH_Px_AGC2_OVERFLOW_FIELD       1
#define STV090x_OFFST_Px_CFR_OVERFLOW_FIELD        1
#define STV090x_WIDTH_Px_CFR_OVERFLOW_FIELD        1
#define STV090x_OFFST_Px_GAMMA_OVERUNDER_FIELD     0
#define STV090x_WIDTH_Px_GAMMA_OVERUNDER_FIELD     1

#define STV090x_Px_DMDCFGMD(__x)                   (0xF414 - (__x - 1) * 0x200)
#define STV090x_P1_DMDCFGMD                        STV090x_Px_DMDCFGMD(1)
#define STV090x_P2_DMDCFGMD                        STV090x_Px_DMDCFGMD(2)
#define STV090x_OFFST_Px_DVBS2_ENABLE_FIELD        7
#define STV090x_WIDTH_Px_DVBS2_ENABLE_FIELD        1
#define STV090x_OFFST_Px_DVBS1_ENABLE_FIELD        6
#define STV090x_WIDTH_Px_DVBS1_ENABLE_FIELD        1
#define STV090x_OFFST_Px_CFR_AUTOSCAN_FIELD        5  /* check */
#define STV090x_WIDTH_Px_CFR_AUTOSCAN_FIELD        1
#define STV090x_OFFST_Px_SCAN_ENABLE_FIELD         4  /* check */
#define STV090x_WIDTH_Px_SCAN_ENABLE_FIELD         1
#define STV090x_OFFST_Px_TUN_AUTOSCAN_FIELD        3
#define STV090x_WIDTH_Px_TUN_AUTOSCAN_FIELD        1
#define STV090x_OFFST_Px_NOFORCE_RELOCK_FIELD      2
#define STV090x_WIDTH_Px_NOFORCE_RELOCK_FIELD      1
#define STV090x_OFFST_Px_TUN_RNG_FIELD             0
#define STV090x_WIDTH_Px_TUN_RNG_FIELD             2

#define STV090x_Px_DMDCFG2(__x)                    (0xF415 - (__x - 1) * 0x200)
#define STV090x_P1_DMDCFG2                         STV090x_Px_DMDCFG2(1)
#define STV090x_P2_DMDCFG2                         STV090x_Px_DMDCFG2(2)
#define STV090x_OFFST_Px_S1S2_SEQUENTIAL_FIELD     6
#define STV090x_WIDTH_Px_S1S2_SEQUENTIAL_FIELD     1

#define STV090x_Px_DMDISTATE(__x)                  (0xF416 - (__x - 1) * 0x200)
#define STV090x_P1_DMDISTATE                       STV090x_Px_DMDISTATE(1)
#define STV090x_P2_DMDISTATE                       STV090x_Px_DMDISTATE(2)
#define STV090x_OFFST_Px_I2C_DEMOD_MODE_FIELD      0
#define STV090x_WIDTH_Px_I2C_DEMOD_MODE_FIELD      5

#define STV090x_Px_DMDTOM(__x)                     (0xF417 - (__x - 1) * 0x200)  /* check */
#define STV090x_P1_DMDTOM                          STV090x_Px_DMDTOM(1)
#define STV090x_P2_DMDTOM                          STV090x_Px_DMDTOM(2)

#define STV090x_Px_DMDSTATE(__x)                   (0xF41B - (__x - 1) * 0x200)
#define STV090x_P1_DMDSTATE                        STV090x_Px_DMDSTATE(1)
#define STV090x_P2_DMDSTATE                        STV090x_Px_DMDSTATE(2)
#define STV090x_OFFST_Px_HEADER_MODE_FIELD         5
#define STV090x_WIDTH_Px_HEADER_MODE_FIELD         2

#define STV090x_Px_DMDFLYW(__x)                    (0xF41C - (__x - 1) * 0x200)
#define STV090x_P1_DMDFLYW                         STV090x_Px_DMDFLYW(1)
#define STV090x_P2_DMDFLYW                         STV090x_Px_DMDFLYW(2)
#define STV090x_OFFST_Px_I2C_IRQVAL_FIELD          4
#define STV090x_WIDTH_Px_I2C_IRQVAL_FIELD          4
#define STV090x_OFFST_Px_FLYWHEEL_CPT_FIELD        0
#define STV090x_WIDTH_Px_FLYWHEEL_CPT_FIELD        4

#define STV090x_Px_DSTATUS3(__x)                   (0xF41D - (__x - 1) * 0x200)
#define STV090x_P1_DSTATUS3                        STV090x_Px_DSTATUS3(1)
#define STV090x_P2_DSTATUS3                        STV090x_Px_DSTATUS3(2)
#define STV090x_OFFST_Px_DEMOD_CFGMODE_FIELD       5
#define STV090x_WIDTH_Px_DEMOD_CFGMODE_FIELD       2

#define STV090x_Px_DMDCFG3(__x)                    (0xF41E - (__x - 1) * 0x200)
#define STV090x_P1_DMDCFG3                         STV090x_Px_DMDCFG3(1)
#define STV090x_P2_DMDCFG3                         STV090x_Px_DMDCFG3(2)
#define STV090x_OFFST_Px_NOSTOP_FIFOFULL_FIELD     3
#define STV090x_WIDTH_Px_NOSTOP_FIFOFULL_FIELD     1

#define STV090x_Px_DMDCFG4(__x)                    (0xf41f - (__x - 1) * 0x200)
#define STV090x_P1_DMDCFG4                         STV090x_Px_DMDCFG4(1)
#define STV090x_P2_DMDCFG4                         STV090x_Px_DMDCFG4(2)

#define STV090x_Px_CORRELMANT(__x)                 (0xF420 - (__x - 1) * 0x200)
#define STV090x_P1_CORRELMANT                      STV090x_Px_CORRELMANT(1)
#define STV090x_P2_CORRELMANT                      STV090x_Px_CORRELMANT(2)
#define STV090x_OFFST_Px_CORREL_MANT_FIELD         0
#define STV090x_WIDTH_Px_CORREL_MANT_FIELD         8

#define STV090x_Px_CORRELABS(__x)                  (0xF421 - (__x - 1) * 0x200)
#define STV090x_P1_CORRELABS                       STV090x_Px_CORRELABS(1)
#define STV090x_P2_CORRELABS                       STV090x_Px_CORRELABS(2)
#define STV090x_OFFST_Px_CORREL_ABS_FIELD          0
#define STV090x_WIDTH_Px_CORREL_ABS_FIELD          8

#define STV090x_Px_CORRELEXP(__x)                  (0xF422 - (__x - 1) * 0x200)
#define STV090x_P1_CORRELEXP                       STV090x_Px_CORRELEXP(1)
#define STV090x_P2_CORRELEXP                       STV090x_Px_CORRELEXP(2)
#define STV090x_OFFST_Px_CORREL_ABSEXP_FIELD       4
#define STV090x_WIDTH_Px_CORREL_ABSEXP_FIELD       4
#define STV090x_OFFST_Px_CORREL_EXP_FIELD          0
#define STV090x_WIDTH_Px_CORREL_EXP_FIELD          4

#define STV090x_Px_PLHMODCOD(__x)                  (0xF424 - (__x - 1) * 0x200)
#define STV090x_P1_PLHMODCOD                       STV090x_Px_PLHMODCOD(1)
#define STV090x_P2_PLHMODCOD                       STV090x_Px_PLHMODCOD(2)
#define STV090x_OFFST_Px_SPECINV_DEMOD_FIELD       7
#define STV090x_WIDTH_Px_SPECINV_DEMOD_FIELD       1
#define STV090x_OFFST_Px_PLH_MODCOD_FIELD          2
#define STV090x_WIDTH_Px_PLH_MODCOD_FIELD          5
#define STV090x_OFFST_Px_PLH_TYPE_FIELD            0
#define STV090x_WIDTH_Px_PLH_TYPE_FIELD            2

#define STV090x_Px_AGCK32(__x)                     (0xf42b - (__x - 1) * 0x200)
#define STV090x_P1_AGCK32                          STV090x_Px_AGCK32(1)
#define STV090x_P2_AGCK32                          STV090x_Px_AGCK32(2)

#define STV090x_Px_AGC2O(__x)                      (0xF42C - (__x - 1) * 0x200)
#define STV090x_P1_AGC2O                           STV090x_Px_AGC2O(1)
#define STV090x_P2_AGC2O                           STV090x_Px_AGC2O(2)

#define STV090x_Px_AGC2REF(__x)                    (0xF42D - (__x - 1) * 0x200)
#define STV090x_P1_AGC2REF                         STV090x_Px_AGC2REF(1)
#define STV090x_P2_AGC2REF                         STV090x_Px_AGC2REF(2)
#define STV090x_OFFST_Px_AGC2_REF_FIELD            0
#define STV090x_WIDTH_Px_AGC2_REF_FIELD            8

#define STV090x_Px_AGC1ADJ(__x)                    (0xF42E - (__x - 1) * 0x200)
#define STV090x_P1_AGC1ADJ                         STV090x_Px_AGC1ADJ(1)
#define STV090x_P2_AGC1ADJ                         STV090x_Px_AGC1ADJ(2)
#define STV090x_OFFST_Px_AGC1_ADJUSTED_FIELD       0
#define STV090x_WIDTH_Px_AGC1_ADJUSTED_FIELD       7

#define STV090x_Px_AGC2Iy(__x, __y)                (0xF437 - (__x - 1) * 0x200 - __y * 0x1)
#define STV090x_P1_AGC2I0                          STV090x_Px_AGC2Iy(1,0)
#define STV090x_P1_AGC2I1                          STV090x_Px_AGC2Iy(1, 1)
#define STV090x_P2_AGC2I0                          STV090x_Px_AGC2Iy(2,0)
#define STV090x_P2_AGC2I1                          STV090x_Px_AGC2Iy(2,1)
#define STV090x_OFFST_Px_AGC2_INTEGRATOR_FIELD     0
#define STV090x_WIDTH_Px_AGC2_INTEGRATOR_FIELD     8

#define STV090x_Px_CARCFG(__x)                     (0xF438 - (__x - 1) * 0x200)
#define STV090x_P1_CARCFG                          STV090x_Px_CARCFG(1)
#define STV090x_P2_CARCFG                          STV090x_Px_CARCFG(2)
#define STV090x_OFFST_Px_EN_CAR2CENTER_FIELD       5
#define STV090x_WIDTH_Px_EN_CAR2CENTER_FIELD       1
#define STV090x_OFFST_Px_ROTATON_FIELD             2
#define STV090x_WIDTH_Px_ROTATON_FIELD             1
#define STV090x_OFFST_Px_PH_DET_ALGO_FIELD         0
#define STV090x_WIDTH_Px_PH_DET_ALGO_FIELD         2

#define STV090x_Px_ACLC(__x)                       (0xF439 - (__x - 1) * 0x200)
#define STV090x_P1_ACLC                            STV090x_Px_ACLC(1)
#define STV090x_P2_ACLC                            STV090x_Px_ACLC(2)
#define STV090x_OFFST_Px_CAR_ALPHA_MANT_FIELD      4
#define STV090x_WIDTH_Px_CAR_ALPHA_MANT_FIELD      2
#define STV090x_OFFST_Px_CAR_ALPHA_EXP_FIELD       0
#define STV090x_WIDTH_Px_CAR_ALPHA_EXP_FIELD       4

#define STV090x_Px_BCLC(__x)                       (0xF43A - (__x - 1) * 0x200)
#define STV090x_P1_BCLC                            STV090x_Px_BCLC(1)
#define STV090x_P2_BCLC                            STV090x_Px_BCLC(2)
#define STV090x_OFFST_Px_CAR_BETA_MANT_FIELD       4
#define STV090x_WIDTH_Px_CAR_BETA_MANT_FIELD       2
#define STV090x_OFFST_Px_CAR_BETA_EXP_FIELD        0
#define STV090x_WIDTH_Px_CAR_BETA_EXP_FIELD        4

#define STV090x_Px_CARFREQ(__x)                    (0xF43D - (__x - 1) * 0x200)
#define STV090x_P1_CARFREQ                         STV090x_Px_CARFREQ(1)
#define STV090x_P2_CARFREQ                         STV090x_Px_CARFREQ(2)
#define STV090x_OFFST_Px_KC_COARSE_EXP_FIELD       4
#define STV090x_WIDTH_Px_KC_COARSE_EXP_FIELD       4
#define STV090x_OFFST_Px_BETA_FREQ_FIELD           0
#define STV090x_WIDTH_Px_BETA_FREQ_FIELD           4

#define STV090x_Px_CARHDR(__x)                     (0xF43E - (__x - 1) * 0x200)
#define STV090x_P1_CARHDR                          STV090x_Px_CARHDR(1)
#define STV090x_P2_CARHDR                          STV090x_Px_CARHDR(2)
#define STV090x_OFFST_Px_FREQ_HDR_FIELD            0
#define STV090x_WIDTH_Px_FREQ_HDR_FIELD            8

#define STV090x_Px_LDT(__x)                        (0xF43F - (__x - 1) * 0x200)
#define STV090x_P1_LDT                             STV090x_Px_LDT(1)
#define STV090x_P2_LDT                             STV090x_Px_LDT(2)
#define STV090x_OFFST_Px_CARLOCK_THRES_FIELD       0
#define STV090x_WIDTH_Px_CARLOCK_THRES_FIELD       8

#define STV090x_Px_LDT2(__x)                       (0xF440 - (__x - 1) * 0x200)
#define STV090x_P1_LDT2                            STV090x_Px_LDT2(1)
#define STV090x_P2_LDT2                            STV090x_Px_LDT2(2)
#define STV090x_OFFST_Px_CARLOCK_THRES2_FIELD      0
#define STV090x_WIDTH_Px_CARLOCK_THRES2_FIELD      8

#define STV090x_Px_CFRICFG(__x)                    (0xF441 - (__x - 1) * 0x200)
#define STV090x_P1_CFRICFG                         STV090x_Px_CFRICFG(1)
#define STV090x_P2_CFRICFG                         STV090x_Px_CFRICFG(2)
#define STV090x_OFFST_Px_NEG_CFRSTEP_FIELD         0
#define STV090x_WIDTH_Px_NEG_CFRSTEP_FIELD         1

#define STV090x_Pn_CFRUPy(__x, __y)                (0xF443 - (__x - 1) * 0x200 - __y * 0x1)
#define STV090x_P1_CFRUP0                          STV090x_Pn_CFRUPy(1,0)
#define STV090x_P1_CFRUP1                          STV090x_Pn_CFRUPy(1, 1)
#define STV090x_P2_CFRUP0                          STV090x_Pn_CFRUPy(2,0)
#define STV090x_P2_CFRUP1                          STV090x_Pn_CFRUPy(2,1)
#define STV090x_OFFST_Px_CFR_UP_FIELD              0
#define STV090x_WIDTH_Px_CFR_UP_FIELD              8

#define STV090x_Pn_CFRLOWy(__x, __y)               (0xF447 - (__x - 1) * 0x200 - __y * 0x1)
#define STV090x_P1_CFRLOW0                         STV090x_Pn_CFRLOWy(1,0)
#define STV090x_P1_CFRLOW1                         STV090x_Pn_CFRLOWy(1, 1)
#define STV090x_P2_CFRLOW0                         STV090x_Pn_CFRLOWy(2,0)
#define STV090x_P2_CFRLOW1                         STV090x_Pn_CFRLOWy(2,1)
#define STV090x_OFFST_Px_CFR_LOW_FIELD             0
#define STV090x_WIDTH_Px_CFR_LOW_FIELD             8

#define STV090x_Pn_CFRINITy(__x, __y)              (0xF449 - (__x - 1) * 0x200 - __y * 0x1)
#define STV090x_P1_CFRINIT0                        STV090x_Pn_CFRINITy(1,0)
#define STV090x_P1_CFRINIT1                        STV090x_Pn_CFRINITy(1, 1)
#define STV090x_P2_CFRINIT0                        STV090x_Pn_CFRINITy(2,0)
#define STV090x_P2_CFRINIT1                        STV090x_Pn_CFRINITy(2,1)
#define STV090x_OFFST_Px_CFR_INIT_FIELD            0
#define STV090x_WIDTH_Px_CFR_INIT_FIELD            8

#define STV090x_Px_CFRINC1(__x)                    (0xF44A - (__x - 1) * 0x200)
#define STV090x_P1_CFRINC1                         STV090x_Px_CFRINC1(1)
#define STV090x_P2_CFRINC1                         STV090x_Px_CFRINC1(2)
#define STV090x_OFFST_Px_CFR_INC1_FIELD            0
#define STV090x_WIDTH_Px_CFR_INC1_FIELD            7  /* check */

#define STV090x_Px_CFRINC0(__x)                    (0xF44B - (__x - 1) * 0x200)
#define STV090x_P1_CFRINC0                         STV090x_Px_CFRINC0(1)
#define STV090x_P2_CFRINC0                         STV090x_Px_CFRINC0(2)
#define STV090x_OFFST_Px_CFR_INC0_FIELD            4  /* check */
#define STV090x_WIDTH_Px_CFR_INC0_FIELD            4

#define STV090x_Pn_CFRy(__x, __y)                  (0xF44E - (__x - 1) * 0x200 - __y * 0x1)
#define STV090x_P1_CFR0                            STV090x_Pn_CFRy(1,0)
#define STV090x_P1_CFR1                            STV090x_Pn_CFRy(1, 1)
#define STV090x_P1_CFR2                            STV090x_Pn_CFRy(1, 2)
#define STV090x_P2_CFR0                            STV090x_Pn_CFRy(2,0)
#define STV090x_P2_CFR1                            STV090x_Pn_CFRy(2,1)
#define STV090x_P2_CFR2                            STV090x_Pn_CFRy(2,2)
#define STV090x_OFFST_Px_CAR_FREQ_FIELD            0
#define STV090x_WIDTH_Px_CAR_FREQ_FIELD            8

#define STV090x_Px_LDI(__x)                        (0xF44F - (__x - 1) * 0x200)
#define STV090x_P1_LDI                             STV090x_Px_LDI(1)
#define STV090x_P2_LDI                             STV090x_Px_LDI(2)
#define STV090x_OFFST_Px_LOCK_DET_INTEGR_FIELD     0
#define STV090x_WIDTH_Px_LOCK_DET_INTEGR_FIELD     8

#define STV090x_Px_TMGCFG(__x)                     (0xF450 - (__x - 1) * 0x200)
#define STV090x_P1_TMGCFG                          STV090x_Px_TMGCFG(1)
#define STV090x_P2_TMGCFG                          STV090x_Px_TMGCFG(2)
#define STV090x_OFFST_Px_TMGLOCK_BETA_FIELD        6
#define STV090x_WIDTH_Px_TMGLOCK_BETA_FIELD        2
#define STV090x_OFFST_Px_DO_TIMING_FIELD           4
#define STV090x_WIDTH_Px_DO_TIMING_FIELD           1
#define STV090x_OFFST_Px_TMG_MINFREQ_FIELD         0
#define STV090x_WIDTH_Px_TMG_MINFREQ_FIELD         2

#define STV090x_Px_RTC(__x)                        (0xF451 - (__x - 1) * 0x200)
#define STV090x_P1_RTC                             STV090x_Px_RTC(1)
#define STV090x_P2_RTC                             STV090x_Px_RTC(2)
#define STV090x_OFFST_Px_TMGALPHA_EXP_FIELD        4
#define STV090x_WIDTH_Px_TMGALPHA_EXP_FIELD        4
#define STV090x_OFFST_Px_TMGBETA_EXP_FIELD         0
#define STV090x_WIDTH_Px_TMGBETA_EXP_FIELD         4

#define STV090x_Px_RTCS2(__x)                      (0xF452 - (__x - 1) * 0x200)
#define STV090x_P1_RTCS2                           STV090x_Px_RTCS2(1)
#define STV090x_P2_RTCS2                           STV090x_Px_RTCS2(2)
#define STV090x_OFFST_Px_TMGALPHAS2_EXP_FIELD      4
#define STV090x_WIDTH_Px_TMGALPHAS2_EXP_FIELD      4
#define STV090x_OFFST_Px_TMGBETAS2_EXP_FIELD       0
#define STV090x_WIDTH_Px_TMGBETAS2_EXP_FIELD       4

#define STV090x_Px_TMGTHRISE(__x)                  (0xF453 - (__x - 1) * 0x200)
#define STV090x_P1_TMGTHRISE                       STV090x_Px_TMGTHRISE(1)
#define STV090x_P2_TMGTHRISE                       STV090x_Px_TMGTHRISE(2)
#define STV090x_OFFST_Px_TMGLOCK_THRISE_FIELD      0
#define STV090x_WIDTH_Px_TMGLOCK_THRISE_FIELD      8

#define STV090x_Px_TMGTHFALL(__x)                  (0xF454 - (__x - 1) * 0x200)
#define STV090x_P1_TMGTHFALL                       STV090x_Px_TMGTHFALL(1)
#define STV090x_P2_TMGTHFALL                       STV090x_Px_TMGTHFALL(2)
#define STV090x_OFFST_Px_TMGLOCK_THFALL_FIELD      0
#define STV090x_WIDTH_Px_TMGLOCK_THFALL_FIELD      8

#define STV090x_Px_SFRUPRATIO(__x)                 (0xF455 - (__x - 1) * 0x200)
#define STV090x_P1_SFRUPRATIO                      STV090x_Px_SFRUPRATIO(1)
#define STV090x_P2_SFRUPRATIO                      STV090x_Px_SFRUPRATIO(2)
#define STV090x_OFFST_Px_SFR_UPRATIO_FIELD         0
#define STV090x_WIDTH_Px_SFR_UPRATIO_FIELD         8

#define STV090x_Px_SFRLOWRATIO(__x)                (0xF456 - (__x - 1) * 0x200)
#define STV090x_P1_SFRLOWRATIO                     STV090x_Px_SFRLOWRATIO(1)
#define STV090x_P2_SFRLOWRATIO                     STV090x_Px_SFRLOWRATIO(2)
#define STV090x_OFFST_Px_SFR_LOWRATIO_FIELD        0
#define STV090x_WIDTH_Px_SFR_LOWRATIO_FIELD        8

#define STV090x_Px_KREFTMG(__x)                    (0xF458 - (__x - 1) * 0x200)
#define STV090x_P1_KREFTMG                         STV090x_Px_KREFTMG(1)
#define STV090x_P2_KREFTMG                         STV090x_Px_KREFTMG(2)
#define STV090x_OFFST_Px_KREF_TMG_FIELD            0
#define STV090x_WIDTH_Px_KREF_TMG_FIELD            8

#define STV090x_Px_SFRSTEP(__x)                    (0xF459 - (__x - 1) * 0x200)
#define STV090x_P1_SFRSTEP                         STV090x_Px_SFRSTEP(1)
#define STV090x_P2_SFRSTEP                         STV090x_Px_SFRSTEP(2)
#define STV090x_OFFST_Px_SFR_SCANSTEP_FIELD        4
#define STV090x_WIDTH_Px_SFR_SCANSTEP_FIELD        4
#define STV090x_OFFST_Px_SFR_CENTERSTEP_FIELD      0
#define STV090x_WIDTH_Px_SFR_CENTERSTEP_FIELD      4

#define STV090x_Px_TMGCFG2(__x)                    (0xF45A - (__x - 1) * 0x200)
#define STV090x_P1_TMGCFG2                         STV090x_Px_TMGCFG2(1)
#define STV090x_P2_TMGCFG2                         STV090x_Px_TMGCFG2(2)
#define STV090x_OFFST_Px_SFRRATIO_FINE_FIELD       0
#define STV090x_WIDTH_Px_SFRRATIO_FINE_FIELD       1

#define STV090x_Px_SFRINIT1(__x)                   (0xF45E - (__x - 1) * 0x200)
#define STV090x_P1_SFRINIT1                        STV090x_Px_SFRINIT1(1)
#define STV090x_P2_SFRINIT1                        STV090x_Px_SFRINIT1(2)
#define STV090x_OFFST_Px_SFR_INIT_FIELD            0
#define STV090x_WIDTH_Px_SFR_INIT_FIELD            8

#define STV090x_Px_SFRINIT0(__x)                   (0xF45F - (__x - 1) * 0x200)
#define STV090x_P1_SFRINIT0                        STV090x_Px_SFRINIT0(1)
#define STV090x_P2_SFRINIT0                        STV090x_Px_SFRINIT0(2)
#define STV090x_OFFST_Px_SFR_INIT_FIELD            0
#define STV090x_WIDTH_Px_SFR_INIT_FIELD            8

#define STV090x_Px_SFRUP1(__x)                     (0xF460 - (__x - 1) * 0x200)
#define STV090x_P1_SFRUP1                          STV090x_Px_SFRUP1(1)
#define STV090x_P2_SFRUP1                          STV090x_Px_SFRUP1(2)
#define STV090x_OFFST_Px_SYMB_FREQ_UP1_FIELD       0
#define STV090x_WIDTH_Px_SYMB_FREQ_UP1_FIELD       7

#define STV090x_Px_SFRUP0(__x)                     (0xF461 - (__x - 1) * 0x200)
#define STV090x_P1_SFRUP0                          STV090x_Px_SFRUP0(1)
#define STV090x_P2_SFRUP0                          STV090x_Px_SFRUP0(2)
#define STV090x_OFFST_Px_SYMB_FREQ_UP0_FIELD       0
#define STV090x_WIDTH_Px_SYMB_FREQ_UP0_FIELD       8

#define STV090x_Px_SFRLOW1(__x)                    (0xF462 - (__x - 1) * 0x200)
#define STV090x_P1_SFRLOW1                         STV090x_Px_SFRLOW1(1)
#define STV090x_P2_SFRLOW1                         STV090x_Px_SFRLOW1(2)
#define STV090x_OFFST_Px_SYMB_FREQ_LOW1_FIELD      0
#define STV090x_WIDTH_Px_SYMB_FREQ_LOW1_FIELD      7

#define STV090x_Px_SFRLOW0(__x)                    (0xF463 - (__x - 1) * 0x200)
#define STV090x_P1_SFRLOW0                         STV090x_Px_SFRLOW0(1)
#define STV090x_P2_SFRLOW0                         STV090x_Px_SFRLOW0(2)
#define STV090x_OFFST_Px_SYMB_FREQ_LOW0_FIELD      0
#define STV090x_WIDTH_Px_SYMB_FREQ_LOW0_FIELD      8

#define STV090x_Px_SFRy(__x, __y)                  (0xF464 - (__x - 1) * 0x200 + (3 - __y))
#define STV090x_P1_SFR0                            STV090x_Px_SFRy(1, 0)
#define STV090x_P1_SFR1                            STV090x_Px_SFRy(1, 1)
#define STV090x_P1_SFR2                            STV090x_Px_SFRy(1, 2)
#define STV090x_P1_SFR3                            STV090x_Px_SFRy(1, 3)
#define STV090x_P2_SFR0                            STV090x_Px_SFRy(2, 0)
#define STV090x_P2_SFR1                            STV090x_Px_SFRy(2, 1)
#define STV090x_P2_SFR2                            STV090x_Px_SFRy(2, 2)
#define STV090x_P2_SFR3                            STV090x_Px_SFRy(2, 3)
#define STV090x_OFFST_Px_SYMB_FREQ_FIELD           0
#define STV090x_WIDTH_Px_SYMB_FREQ_FIELD           32

#define STV090x_Px_TMGREG2(__x)                    (0xF468 - (__x - 1) * 0x200)
#define STV090x_P1_TMGREG2                         STV090x_Px_TMGREG2(1)
#define STV090x_P2_TMGREG2                         STV090x_Px_TMGREG2(2)
#define STV090x_OFFST_Px_TMGREG_FIELD              0
#define STV090x_WIDTH_Px_TMGREG_FIELD              8

#define STV090x_Px_TMGREG1(__x)                    (0xF469 - (__x - 1) * 0x200)
#define STV090x_P1_TMGREG1                         STV090x_Px_TMGREG1(1)
#define STV090x_P2_TMGREG1                         STV090x_Px_TMGREG1(2)
#define STV090x_OFFST_Px_TMGREG_FIELD              0
#define STV090x_WIDTH_Px_TMGREG_FIELD              8

#define STV090x_Px_TMGREG0(__x)                    (0xF46A - (__x - 1) * 0x200)
#define STV090x_P1_TMGREG0                         STV090x_Px_TMGREG0(1)
#define STV090x_P2_TMGREG0                         STV090x_Px_TMGREG0(2)
#define STV090x_OFFST_Px_TMGREG_FIELD              0
#define STV090x_WIDTH_Px_TMGREG_FIELD              8

#define STV090x_Px_TMGLOCKy(__x, __y)              (0xF46C - (__x - 1) * 0x200 - __y * 0x1)
#define STV090x_P1_TMGLOCK0                        STV090x_Px_TMGLOCKy(1, 0)
#define STV090x_P1_TMGLOCK1                        STV090x_Px_TMGLOCKy(1, 1)
#define STV090x_P2_TMGLOCK0                        STV090x_Px_TMGLOCKy(2, 0)
#define STV090x_P2_TMGLOCK1                        STV090x_Px_TMGLOCKy(2, 1)
#define STV090x_OFFST_Px_TMGLOCK_LEVEL_FIELD       0
#define STV090x_WIDTH_Px_TMGLOCK_LEVEL_FIELD       8

#define STV090x_Px_TMGOBS(__x)                     (0xF46D - (__x - 1) * 0x200)
#define STV090x_P1_TMGOBS                          STV090x_Px_TMGOBS(1)
#define STV090x_P2_TMGOBS                          STV090x_Px_TMGOBS(2)
#define STV090x_OFFST_Px_ROLLOFF_STATUS_FIELD      6
#define STV090x_WIDTH_Px_ROLLOFF_STATUS_FIELD      2

#define STV090x_Px_EQUALCFG(__x)                   (0xF46F - (__x - 1) * 0x200)
#define STV090x_P1_EQUALCFG                        STV090x_Px_EQUALCFG(1)
#define STV090x_P2_EQUALCFG                        STV090x_Px_EQUALCFG(2)
#define STV090x_OFFST_Px_EQUAL_ON_FIELD            6
#define STV090x_WIDTH_Px_EQUAL_ON_FIELD            1
#define STV090x_OFFST_Px_MU_EQUALDFE_FIELD         0
#define STV090x_WIDTH_Px_MU_EQUALDFE_FIELD         3

#define STV090x_Px_EQUAIy(__x, __y)                (0xf470 - (__x - 1) * 0x200 + (__y - 1))
#define STV090x_P1_EQUAI1                          STV090x_Px_EQUAIy(1, 1)
#define STV090x_P1_EQUAI2                          STV090x_Px_EQUAIy(1, 2)
#define STV090x_P1_EQUAI3                          STV090x_Px_EQUAIy(1, 3)
#define STV090x_P1_EQUAI4                          STV090x_Px_EQUAIy(1, 4)
#define STV090x_P1_EQUAI5                          STV090x_Px_EQUAIy(1, 5)
#define STV090x_P1_EQUAI6                          STV090x_Px_EQUAIy(1, 6)
#define STV090x_P1_EQUAI7                          STV090x_Px_EQUAIy(1, 7)
#define STV090x_P1_EQUAI8                          STV090x_Px_EQUAIy(1, 8)

#define STV090x_P2_EQUAI1                          STV090x_Px_EQUAIy(2, 1)
#define STV090x_P2_EQUAI2                          STV090x_Px_EQUAIy(2, 2)
#define STV090x_P2_EQUAI3                          STV090x_Px_EQUAIy(2, 3)
#define STV090x_P2_EQUAI4                          STV090x_Px_EQUAIy(2, 4)
#define STV090x_P2_EQUAI5                          STV090x_Px_EQUAIy(2, 5)
#define STV090x_P2_EQUAI6                          STV090x_Px_EQUAIy(2, 6)
#define STV090x_P2_EQUAI7                          STV090x_Px_EQUAIy(2, 7)
#define STV090x_P2_EQUAI8                          STV090x_Px_EQUAIy(2, 8)
#define STV090x_OFFST_Px_EQUA_ACCIy_FIELD          0
#define STV090x_WIDTH_Px_EQUA_ACCIy_FIELD          8

#define STV090x_Px_EQUAQy(__x, __y)                (0xf471 - (__x - 1) * 0x200 + (__y - 1))
#define STV090x_P1_EQUAQ1                          STV090x_Px_EQUAQy(1, 1)
#define STV090x_P1_EQUAQ2                          STV090x_Px_EQUAQy(1, 2)
#define STV090x_P1_EQUAQ3                          STV090x_Px_EQUAQy(1, 3)
#define STV090x_P1_EQUAQ4                          STV090x_Px_EQUAQy(1, 4)
#define STV090x_P1_EQUAQ5                          STV090x_Px_EQUAQy(1, 5)
#define STV090x_P1_EQUAQ6                          STV090x_Px_EQUAQy(1, 6)
#define STV090x_P1_EQUAQ7                          STV090x_Px_EQUAQy(1, 7)
#define STV090x_P1_EQUAQ8                          STV090x_Px_EQUAQy(1, 8)

#define STV090x_P2_EQUAQ1                          STV090x_Px_EQUAQy(2, 1)
#define STV090x_P2_EQUAQ2                          STV090x_Px_EQUAQy(2, 2)
#define STV090x_P2_EQUAQ3                          STV090x_Px_EQUAQy(2, 3)
#define STV090x_P2_EQUAQ4                          STV090x_Px_EQUAQy(2, 4)
#define STV090x_P2_EQUAQ5                          STV090x_Px_EQUAQy(2, 5)
#define STV090x_P2_EQUAQ6                          STV090x_Px_EQUAQy(2, 6)
#define STV090x_P2_EQUAQ7                          STV090x_Px_EQUAQy(2, 7)
#define STV090x_P2_EQUAQ8                          STV090x_Px_EQUAQy(2, 8)
#define STV090x_OFFST_Px_EQUA_ACCQy_FIELD          0
#define STV090x_WIDTH_Px_EQUA_ACCQy_FIELD          8

#define STV090x_Px_NNOSDATATy(__x, __y)            (0xf481 - (__x - 1) * 0x200 - __y * 0x1)
#define STV090x_P1_NNOSDATAT0                      STV090x_Px_NNOSDATATy(1, 0)
#define STV090x_P1_NNOSDATAT1                      STV090x_Px_NNOSDATATy(1, 1)
#define STV090x_P2_NNOSDATAT0                      STV090x_Px_NNOSDATATy(2, 0)
#define STV090x_P2_NNOSDATAT1                      STV090x_Px_NNOSDATATy(2, 1)
#define STV090x_OFFST_Px_NOSDATAT_NORMED_FIELD     0
#define STV090x_WIDTH_Px_NOSDATAT_NORMED_FIELD     8

#define STV090x_Px_NNOSDATAy(__x, __y)             (0xf483 - (__x - 1) * 0x200 - __y * 0x1)
#define STV090x_P1_NNOSDATA0                       STV090x_Px_NNOSDATAy(1, 0)
#define STV090x_P1_NNOSDATA1                       STV090x_Px_NNOSDATAy(1, 1)
#define STV090x_P2_NNOSDATA0                       STV090x_Px_NNOSDATAy(2, 0)
#define STV090x_P2_NNOSDATA1                       STV090x_Px_NNOSDATAy(2, 1)
#define STV090x_OFFST_Px_NOSDATA_NORMED_FIELD      0
#define STV090x_WIDTH_Px_NOSDATA_NORMED_FIELD      8

#define STV090x_Px_NNOSPLHTy(__x, __y)             (0xf485 - (__x - 1) * 0x200 - __y * 0x1)
#define STV090x_P1_NNOSPLHT0                       STV090x_Px_NNOSPLHTy(1, 0)
#define STV090x_P1_NNOSPLHT1                       STV090x_Px_NNOSPLHTy(1, 1)
#define STV090x_P2_NNOSPLHT0                       STV090x_Px_NNOSPLHTy(2, 0)
#define STV090x_P2_NNOSPLHT1                       STV090x_Px_NNOSPLHTy(2, 1)
#define STV090x_OFFST_Px_NOSPLHT_NORMED_FIELD      0
#define STV090x_WIDTH_Px_NOSPLHT_NORMED_FIELD      8

#define STV090x_Px_NNOSPLHy(__x, __y)              (0xf487 - (__x - 1) * 0x200 - __y * 0x1)
#define STV090x_P1_NNOSPLH0                        STV090x_Px_NNOSPLHy(1, 0)
#define STV090x_P1_NNOSPLH1                        STV090x_Px_NNOSPLHy(1, 1)
#define STV090x_P2_NNOSPLH0                        STV090x_Px_NNOSPLHy(2, 0)
#define STV090x_P2_NNOSPLH1                        STV090x_Px_NNOSPLHy(2, 1)
#define STV090x_OFFST_Px_NOSPLH_NORMED_FIELD       0
#define STV090x_WIDTH_Px_NOSPLH_NORMED_FIELD       8

#define STV090x_Px_NOSDATATy(__x, __y)             (0xf489 - (__x - 1) * 0x200 - __y * 0x1)
#define STV090x_P1_NOSDATAT0                       STV090x_Px_NOSDATATy(1, 0)
#define STV090x_P1_NOSDATAT1                       STV090x_Px_NOSDATATy(1, 1)
#define STV090x_P2_NOSDATAT0                       STV090x_Px_NOSDATATy(2, 0)
#define STV090x_P2_NOSDATAT1                       STV090x_Px_NOSDATATy(2, 1)
#define STV090x_OFFST_Px_NOSDATAT_UNNORMED_FIELD   0
#define STV090x_WIDTH_Px_NOSDATAT_UNNORMED_FIELD   8

#define STV090x_Px_NOSDATAy(__x, __y)              (0xf48b - (__x - 1) * 0x200 - __y * 0x1)
#define STV090x_P1_NOSDATA0                        STV090x_Px_NOSDATAy(1, 0)
#define STV090x_P1_NOSDATA1                        STV090x_Px_NOSDATAy(1, 1)
#define STV090x_P2_NOSDATA0                        STV090x_Px_NOSDATAy(2, 0)
#define STV090x_P2_NOSDATA1                        STV090x_Px_NOSDATAy(2, 1)
#define STV090x_OFFST_Px_NOSDATA_UNNORMED_FIELD    0
#define STV090x_WIDTH_Px_NOSDATA_UNNORMED_FIELD    8

#define STV090x_Px_NOSPLHTy(__x, __y)              (0xf48d - (__x - 1) * 0x200 - __y * 0x1)
#define STV090x_P1_NOSPLHT0                        STV090x_Px_NOSPLHTy(1, 0)
#define STV090x_P1_NOSPLHT1                        STV090x_Px_NOSPLHTy(1, 1)
#define STV090x_P2_NOSPLHT0                        STV090x_Px_NOSPLHTy(2, 0)
#define STV090x_P2_NOSPLHT1                        STV090x_Px_NOSPLHTy(2, 1)
#define STV090x_OFFST_Px_NOSPLHT_UNNORMED_FIELD    0
#define STV090x_WIDTH_Px_NOSPLHT_UNNORMED_FIELD    8

#define STV090x_Px_NOSPLHy(__x, __y)               (0xf48f - (__x - 1) * 0x200 - __y * 0x1)
#define STv090x_P1_NOSPLH0                         STV090x_Px_NOSPLHy(1, 0)
#define STv090x_P1_NOSPLH1                         STV090x_Px_NOSPLHy(1, 1)
#define STv090x_P2_NOSPLH0                         STV090x_Px_NOSPLHy(2, 0)
#define STv090x_P2_NOSPLH1                         STV090x_Px_NOSPLHy(2, 1)
#define STV090x_OFFST_Px_NOSPLH_UNNORMED_FIELD     0
#define STV090x_WIDTH_Px_NOSPLH_UNNORMED_FIELD     8

#define STV090x_Px_CAR2CFG(__x)                    (0xf490 - (__x - 1) * 0x200)
#define STV090x_P1_CAR2CFG                         STV090x_Px_CAR2CFG(1)
#define STV090x_P2_CAR2CFG                         STV090x_Px_CAR2CFG(2)
#define STV090x_OFFST_Px_PN4_SELECT_FIELD          6
#define STV090x_WIDTH_Px_PN4_SELECT_FIELD          1
#define STV090x_OFFST_Px_CFR2_STOPDVBS1_FIELD      5
#define STV090x_WIDTH_Px_CFR2_STOPDVBS1_FIELD      1
#define STV090x_OFFST_Px_ROTA2ON_FIELD             2
#define STV090x_WIDTH_Px_ROTA2ON_FIELD             1
#define STV090x_OFFST_Px_PH_DET_ALGO2_FIELD        0
#define STV090x_WIDTH_Px_PH_DET_ALGO2_FIELD        2

#define STV090x_Px_ACLC2(__x)                      (0xf491 - (__x - 1) * 0x200)
#define STV090x_P1_ACLC2                           STV090x_Px_ACLC2(1)
#define STV090x_P2_ACLC2                           STV090x_Px_ACLC2(2)
#define STV090x_OFFST_Px_CAR2_ALPHA_MANT_FIELD     4
#define STV090x_WIDTH_Px_CAR2_ALPHA_MANT_FIELD     2
#define STV090x_OFFST_Px_CAR2_ALPHA_EXP_FIELD      0
#define STV090x_WIDTH_Px_CAR2_ALPHA_EXP_FIELD      4

#define STV090x_Px_BCLC2(__x)                      (0xf492 - (__x - 1) * 0x200)
#define STV090x_P1_BCLC2                           STV090x_Px_BCLC2(1)
#define STV090x_P2_BCLC2                           STV090x_Px_BCLC2(2)
#define STV090x_OFFST_Px_CAR2_BETA_MANT_FIELD      4
#define STV090x_WIDTH_Px_CAR2_BETA_MANT_FIELD      2
#define STV090x_OFFST_Px_CAR2_BETA_EXP_FIELD       0
#define STV090x_WIDTH_Px_CAR2_BETA_EXP_FIELD       4

#define STV090x_Px_ACLC2S2Q(__x)                   (0xf497 - (__x - 1) * 0x200)
#define STV090x_P1_ACLC2S2Q                        STV090x_Px_ACLC2S2Q(1)
#define STV090x_P2_ACLC2S2Q                        STV090x_Px_ACLC2S2Q(2)
#define STV090x_OFFST_Px_ENAB_SPSKSYMB_FIELD       7
#define STV090x_WIDTH_Px_ENAB_SPSKSYMB_FIELD       1
#define STV090x_OFFST_Px_CAR2S2_Q_ALPH_M_FIELD     4
#define STV090x_WIDTH_Px_CAR2S2_Q_ALPH_M_FIELD     2
#define STV090x_OFFST_Px_CAR2S2_Q_ALPH_E_FIELD     0
#define STV090x_WIDTH_Px_CAR2S2_Q_ALPH_E_FIELD     4

#define STV090x_Px_ACLC2S28(__x)                   (0xf498 - (__x - 1) * 0x200)
#define STV090x_P1_ACLC2S28                        STV090x_Px_ACLC2S28(1)
#define STV090x_P2_ACLC2S28                        STV090x_Px_ACLC2S28(2)
#define STV090x_OFFST_Px_CAR2S2_8_ALPH_M_FIELD     4
#define STV090x_WIDTH_Px_CAR2S2_8_ALPH_M_FIELD     2
#define STV090x_OFFST_Px_CAR2S2_8_ALPH_E_FIELD     0
#define STV090x_WIDTH_Px_CAR2S2_8_ALPH_E_FIELD     4

#define STV090x_Px_ACLC2S216A(__x)                 (0xf499 - (__x - 1) * 0x200)
#define STV090x_P1_ACLC2S216A                      STV090x_Px_ACLC2S216A(1)
#define STV090x_P2_ACLC2S216A                      STV090x_Px_ACLC2S216A(2)
#define STV090x_OFFST_Px_CAR2S2_16A_ALPH_M_FIELD   4
#define STV090x_WIDTH_Px_CAR2S2_16A_ALPH_M_FIELD   2
#define STV090x_OFFST_Px_CAR2S2_16A_ALPH_E_FIELD   0
#define STV090x_WIDTH_Px_CAR2S2_16A_ALPH_E_FIELD   4

#define STV090x_Px_ACLC2S232A(__x)                 (0xf499 - (__x - 1) * 0x200)
#define STV090x_P1_ACLC2S232A                      STV090x_Px_ACLC2S232A(1)
#define STV090x_P2_ACLC2S232A                      STV090x_Px_ACLC2S232A(2)
#define STV090x_OFFST_Px_CAR2S2_32A_ALPH_M_FIELD   4
#define STV090x_WIDTH_Px_CAR2S2_32A_ALPH_M_FIELD   2
#define STV090x_OFFST_Px_CAR2S2_32A_ALPH_E_FIELD   0
#define STV090x_WIDTH_Px_CAR2S2_32A_ALPH_E_FIELD   4

#define STV090x_Px_BCLC2S2Q(__x)                   (0xf49c - (__x - 1) * 0x200)
#define STV090x_P1_BCLC2S2Q                        STV090x_Px_BCLC2S2Q(1)
#define STV090x_P2_BCLC2S2Q                        STV090x_Px_BCLC2S2Q(2)
#define STV090x_OFFST_Px_CAR2S2_Q_BETA_M_FIELD     4
#define STV090x_WIDTH_Px_CAR2S2_Q_BETA_M_FIELD     2
#define STV090x_OFFST_Px_CAR2S2_Q_BETA_E_FIELD     0
#define STV090x_WIDTH_Px_CAR2S2_Q_BETA_E_FIELD     4

#define STV090x_Px_BCLC2S28(__x)                   (0xf49d - (__x - 1) * 0x200)
#define STV090x_P1_BCLC2S28                        STV090x_Px_BCLC2S28(1)
#define STV090x_P2_BCLC2S28                        STV090x_Px_BCLC2S28(1)
#define STV090x_OFFST_Px_CAR2S2_8_BETA_M_FIELD     4
#define STV090x_WIDTH_Px_CAR2S2_8_BETA_M_FIELD     2
#define STV090x_OFFST_Px_CAR2S2_8_BETA_E_FIELD     0
#define STV090x_WIDTH_Px_CAR2S2_8_BETA_E_FIELD     4

#define STV090x_Px_BCLC2S216A(__x)                 (0xf49d - (__x - 1) * 0x200)
#define STV090x_P1_BCLC2S216A                      STV090x_Px_BCLC2S216A(1)
#define STV090x_P2_BCLC2S216A                      STV090x_Px_BCLC2S216A(1)
#define STV090x_OFFST_Px_CAR2S2_16A_BETA_M_FIELD   4
#define STV090x_WIDTH_Px_CAR2S2_16A_BETA_M_FIELD   2
#define STV090x_OFFST_Px_CAR2S2_16A_BETA_E_FIELD   0
#define STV090x_WIDTH_Px_CAR2S2_16A_BETA_E_FIELD   4

#define STV090x_Px_BCLC2S232A(__x)                 (0xf49d - (__x - 1) * 0x200)
#define STV090x_P1_BCLC2S232A                      STV090x_Px_BCLC2S232A(1)
#define STV090x_P2_BCLC2S232A                      STV090x_Px_BCLC2S232A(1)
#define STV090x_OFFST_Px_CAR2S2_32A_BETA_M_FIELD   4
#define STV090x_WIDTH_Px_CAR2S2_32A_BETA_M_FIELD   2
#define STV090x_OFFST_Px_CAR2S2_32A_BETA_E_FIELD   0
#define STV090x_WIDTH_Px_CAR2S2_32A_BETA_E_FIELD   4

#define STV090x_Px_PLROOT2(__x)                    (0xf4ac - (__x - 1) * 0x200)
#define STV090x_P1_PLROOT2                         STV090x_Px_PLROOT2(1)
#define STV090x_P2_PLROOT2                         STV090x_Px_PLROOT2(2)
#define STV090x_OFFST_Px_PLSCRAMB_MODE_FIELD       2
#define STV090x_WIDTH_Px_PLSCRAMB_MODE_FIELD       2
#define STV090x_OFFST_Px_PLSCRAMB_ROOT_FIELD       0
#define STV090x_WIDTH_Px_PLSCRAMB_ROOT_FIELD       2

#define STV090x_Px_PLROOT1(__x)                    (0xf4ad - (__x - 1) * 0x200)
#define STV090x_P1_PLROOT1                         STV090x_Px_PLROOT1(1)
#define STV090x_P2_PLROOT1                         STV090x_Px_PLROOT1(2)
#define STV090x_OFFST_Px_PLSCRAMB_ROOT1_FIELD      0
#define STV090x_WIDTH_Px_PLSCRAMB_ROOT1_FIELD      8

#define STV090x_Px_PLROOT0(__x)                    (0xf4ae - (__x - 1) * 0x200)
#define STV090x_P1_PLROOT0                         STV090x_Px_PLROOT0(1)
#define STV090x_P2_PLROOT0                         STV090x_Px_PLROOT0(2)
#define STV090x_OFFST_Px_PLSCRAMB_ROOT0_FIELD      0
#define STV090x_WIDTH_Px_PLSCRAMB_ROOT0_FIELD      8

#define STV090x_Px_MODCODLST0(__x)                 (0xf4b0 - (__x - 1) * 0x200)  /* check */
#define STV090x_P1_MODCODLST0                      STV090x_Px_MODCODLST0(1)
#define STV090x_P2_MODCODLST0                      STV090x_Px_MODCODLST0(2)

#define STV090x_Px_MODCODLST1(__x)                 (0xf4b1 - (__x - 1) * 0x200)
#define STV090x_P1_MODCODLST1                      STV090x_Px_MODCODLST1(1)
#define STV090x_P2_MODCODLST1                      STV090x_Px_MODCODLST1(2)
#define STV090x_OFFST_Px_DIS_MODCOD29_FIELD        4
#define STV090x_WIDTH_Px_DIS_MODCOD29T_FIELD       4
#define STV090x_OFFST_Px_DIS_32PSK_9_10_FIELD      0
#define STV090x_WIDTH_Px_DIS_32PSK_9_10_FIELD      4

#define STV090x_Px_MODCODLST2(__x)                 (0xf4b2 - (__x - 1) * 0x200)
#define STV090x_P1_MODCODLST2                      STV090x_Px_MODCODLST2(1)
#define STV090x_P2_MODCODLST2                      STV090x_Px_MODCODLST2(2)
#define STV090x_OFFST_Px_DIS_32PSK_8_9_FIELD       4
#define STV090x_WIDTH_Px_DIS_32PSK_8_9_FIELD       4
#define STV090x_OFFST_Px_DIS_32PSK_5_6_FIELD       0
#define STV090x_WIDTH_Px_DIS_32PSK_5_6_FIELD       4

#define STV090x_Px_MODCODLST3(__x)                 (0xf4b3 - (__x - 1) * 0x200)
#define STV090x_P1_MODCODLST3                      STV090x_Px_MODCODLST3(1)
#define STV090x_P2_MODCODLST3                      STV090x_Px_MODCODLST3(2)
#define STV090x_OFFST_Px_DIS_32PSK_4_5_FIELD       4
#define STV090x_WIDTH_Px_DIS_32PSK_4_5_FIELD       4
#define STV090x_OFFST_Px_DIS_32PSK_3_4_FIELD       0
#define STV090x_WIDTH_Px_DIS_32PSK_3_4_FIELD       4

#define STV090x_Px_MODCODLST4(__x)                 (0xf4b4 - (__x - 1) * 0x200)
#define STV090x_P1_MODCODLST4                      STV090x_Px_MODCODLST4(1)
#define STV090x_P2_MODCODLST4                      STV090x_Px_MODCODLST4(2)
#define STV090x_OFFST_Px_DIS_16PSK_9_10_FIELD      4
#define STV090x_WIDTH_Px_DIS_16PSK_9_10_FIELD      4
#define STV090x_OFFST_Px_DIS_16PSK_8_9_FIELD       0
#define STV090x_WIDTH_Px_DIS_16PSK_8_9_FIELD       4

#define STV090x_Px_MODCODLST5(__x)                 (0xf4b5 - (__x - 1) * 0x200)
#define STV090x_P1_MODCODLST5                      STV090x_Px_MODCODLST5(1)
#define STV090x_P2_MODCODLST5                      STV090x_Px_MODCODLST5(2)
#define STV090x_OFFST_Px_DIS_16PSK_5_6_FIELD       4
#define STV090x_WIDTH_Px_DIS_16PSK_5_6_FIELD       4
#define STV090x_OFFST_Px_DIS_16PSK_4_5_FIELD       0
#define STV090x_WIDTH_Px_DIS_16PSK_4_5_FIELD       4

#define STV090x_Px_MODCODLST6(__x)                 (0xf4b6 - (__x - 1) * 0x200)
#define STV090x_P1_MODCODLST6                      STV090x_Px_MODCODLST6(1)
#define STV090x_P2_MODCODLST6                      STV090x_Px_MODCODLST6(2)
#define STV090x_OFFST_Px_DIS_16PSK_3_4_FIELD       4
#define STV090x_WIDTH_Px_DIS_16PSK_3_4_FIELD       4
#define STV090x_OFFST_Px_DIS_16PSK_2_3_FIELD       0
#define STV090x_WIDTH_Px_DIS_16PSK_2_3_FIELD       4

#define STV090x_Px_MODCODLST7(__x)                 (0xf4b7 - (__x - 1) * 0x200)
#define STV090x_P1_MODCODLST7                      STV090x_Px_MODCODLST7(1)
#define STV090x_P2_MODCODLST7                      STV090x_Px_MODCODLST7(2)
#define STV090x_OFFST_Px_DIS_8P_9_10_FIELD         4
#define STV090x_WIDTH_Px_DIS_8P_9_10_FIELD         4
#define STV090x_OFFST_Px_DIS_8P_8_9_FIELD          0
#define STV090x_WIDTH_Px_DIS_8P_8_9_FIELD          4

#define STV090x_Px_MODCODLST8(__x)                 (0xf4b8 - (__x - 1) * 0x200)
#define STV090x_P1_MODCODLST8                      STV090x_Px_MODCODLST8(1)
#define STV090x_P2_MODCODLST8                      STV090x_Px_MODCODLST8(2)
#define STV090x_OFFST_Px_DIS_8P_5_6_FIELD          4
#define STV090x_WIDTH_Px_DIS_8P_5_6_FIELD          4
#define STV090x_OFFST_Px_DIS_8P_3_4_FIELD          0
#define STV090x_WIDTH_Px_DIS_8P_3_4_FIELD          4

#define STV090x_Px_MODCODLST9(__x)                 (0xf4b9 - (__x - 1) * 0x200)
#define STV090x_P1_MODCODLST9                      STV090x_Px_MODCODLST9(1)
#define STV090x_P2_MODCODLST9                      STV090x_Px_MODCODLST9(2)
#define STV090x_OFFST_Px_DIS_8P_2_3_FIELD          4
#define STV090x_WIDTH_Px_DIS_8P_2_3_FIELD          4
#define STV090x_OFFST_Px_DIS_8P_3_5_FIELD          0
#define STV090x_WIDTH_Px_DIS_8P_3_5_FIELD          4

#define STV090x_Px_MODCODLSTA(__x)                 (0xf4ba - (__x - 1) * 0x200)
#define STV090x_P1_MODCODLSTA                      STV090x_Px_MODCODLSTA(1)
#define STV090x_P2_MODCODLSTA                      STV090x_Px_MODCODLSTA(2)
#define STV090x_OFFST_Px_DIS_QP_9_10_FIELD         4
#define STV090x_WIDTH_Px_DIS_QP_9_10_FIELD         4
#define STV090x_OFFST_Px_DIS_QP_8_9_FIELD          0
#define STV090x_WIDTH_Px_DIS_QP_8_9_FIELD          4

#define STV090x_Px_MODCODLSTB(__x)                 (0xf4bb - (__x - 1) * 0x200)
#define STV090x_P1_MODCODLSTB                      STV090x_Px_MODCODLSTB(1)
#define STV090x_P2_MODCODLSTB                      STV090x_Px_MODCODLSTB(2)
#define STV090x_OFFST_Px_DIS_QP_5_6_FIELD          4
#define STV090x_WIDTH_Px_DIS_QP_5_6_FIELD          4
#define STV090x_OFFST_Px_DIS_QP_4_5_FIELD          0
#define STV090x_WIDTH_Px_DIS_QP_4_5_FIELD          4

#define STV090x_Px_MODCODLSTC(__x)                 (0xf4bc - (__x - 1) * 0x200)
#define STV090x_P1_MODCODLSTC                      STV090x_Px_MODCODLSTC(1)
#define STV090x_P2_MODCODLSTC                      STV090x_Px_MODCODLSTC(2)
#define STV090x_OFFST_Px_DIS_QP_3_4_FIELD          4
#define STV090x_WIDTH_Px_DIS_QP_3_4_FIELD          4
#define STV090x_OFFST_Px_DIS_QP_2_3_FIELD          0
#define STV090x_WIDTH_Px_DIS_QP_2_3_FIELD          4

#define STV090x_Px_MODCODLSTD(__x)                 (0xf4bd - (__x - 1) * 0x200)
#define STV090x_P1_MODCODLSTD                      STV090x_Px_MODCODLSTD(1)
#define STV090x_P2_MODCODLSTD                      STV090x_Px_MODCODLSTD(2)
#define STV090x_OFFST_Px_DIS_QP_3_5_FIELD          4
#define STV090x_WIDTH_Px_DIS_QP_3_5_FIELD          4
#define STV090x_OFFST_Px_DIS_QP_1_2_FIELD          0
#define STV090x_WIDTH_Px_DIS_QP_1_2_FIELD          4

#define STV090x_Px_MODCODLSTE(__x)                 (0xf4be - (__x - 1) * 0x200)
#define STV090x_P1_MODCODLSTE                      STV090x_Px_MODCODLSTE(1)
#define STV090x_P2_MODCODLSTE                      STV090x_Px_MODCODLSTE(2)
#define STV090x_OFFST_Px_DIS_QP_2_5_FIELD          4
#define STV090x_WIDTH_Px_DIS_QP_2_5_FIELD          4
#define STV090x_OFFST_Px_DIS_QP_1_3_FIELD          0
#define STV090x_WIDTH_Px_DIS_QP_1_3_FIELD          4

#define STV090x_Px_MODCODLSTF(__x)                 (0xf4bf - (__x - 1) * 0x200)
#define STV090x_P1_MODCODLSTF                      STV090x_Px_MODCODLSTF(1)
#define STV090x_P2_MODCODLSTF                      STV090x_Px_MODCODLSTF(2)
#define STV090x_OFFST_Px_DIS_QP_1_4_FIELD          4
#define STV090x_WIDTH_Px_DIS_QP_1_4_FIELD          4

#define STV090x_Px_GAUSSR0(__x)                    (0xf4c0 - (__x - 1) * 0x200)
#define STV090x_P1_GAUSSR0                         STV090x_Px_GAUSSR0(1)
#define STV090x_P2_GAUSSR0                         STV090x_Px_GAUSSR0(2)
#define STV090x_OFFST_Px_EN_CCIMODE_FIELD          7
#define STV090x_WIDTH_Px_EN_CCIMODE_FIELD          1
#define STV090x_OFFST_Px_R0_GAUSSIEN_FIELD         0
#define STV090x_WIDTH_Px_R0_GAUSSIEN_FIELD         7

#define STV090x_Px_CCIR0(__x)                      (0xf4c1 - (__x - 1) * 0x200)
#define STV090x_P1_CCIR0                           STV090x_Px_CCIR0(1)
#define STV090x_P2_CCIR0                           STV090x_Px_CCIR0(2)
#define STV090x_OFFST_Px_CCIDETECT_PLH_FIELD       7
#define STV090x_WIDTH_Px_CCIDETECT_PLH_FIELD       1
#define STV090x_OFFST_Px_R0_CCI_FIELD              0
#define STV090x_WIDTH_Px_R0_CCI_FIELD              7

#define STV090x_Px_CCIQUANT(__x)                   (0xf4c2 - (__x - 1) * 0x200)
#define STV090x_P1_CCIQUANT                        STV090x_Px_CCIQUANT(1)
#define STV090x_P2_CCIQUANT                        STV090x_Px_CCIQUANT(2)
#define STV090x_OFFST_Px_CCI_BETA_FIELD            5
#define STV090x_WIDTH_Px_CCI_BETA_FIELD            3
#define STV090x_OFFST_Px_CCI_QUANT_FIELD           0
#define STV090x_WIDTH_Px_CCI_QUANT_FIELD           5

#define STV090x_Px_CCITHRESH(__x)                  (0xf4c3 - (__x - 1) * 0x200)
#define STV090x_P1_CCITHRESH                       STV090x_Px_CCITHRESH(1)
#define STV090x_P2_CCITHRESH                       STV090x_Px_CCITHRESH(2)
#define STV090x_OFFST_Px_CCI_THRESHOLD_FIELD       0
#define STV090x_WIDTH_Px_CCI_THRESHOLD_FIELD       8

#define STV090x_Px_CCIACC(__x)                     (0xf4c4 - (__x - 1) * 0x200)
#define STV090x_P1_CCIACC                          STV090x_Px_CCIACC(1)
#define STV090x_P2_CCIACC                          STV090x_Px_CCIACC(1)
#define STV090x_OFFST_Px_CCI_VALUE_FIELD           0
#define STV090x_WIDTH_Px_CCI_VALUE_FIELD           8

#define STV090x_Px_DMDRESCFG(__x)                  (0xF4C6 - (__x - 1) * 0x200)
#define STV090x_P1_DMDRESCFG                       STV090x_Px_DMDRESCFG(1)
#define STV090x_P2_DMDRESCFG                       STV090x_Px_DMDRESCFG(2)
#define STV090x_OFFST_Px_DMDRES_RESET_FIELD        7
#define STV090x_WIDTH_Px_DMDRES_RESET_FIELD        1

#define STV090x_Px_DMDRESADR(__x)                  (0xF4C7 - (__x - 1) * 0x200)
#define STV090x_P1_DMDRESADR                       STV090x_Px_DMDRESADR(1)
#define STV090x_P2_DMDRESADR                       STV090x_Px_DMDRESADR(2)
#define STV090x_OFFST_Px_DMDRES_RESNBR_FIELD       0
#define STV090x_WIDTH_Px_DMDRES_RESNBR_FIELD       4

#define STV090x_Px_DMDRESDATAy(__x, __y)           (0xF4C8 - (__x - 1) * 0x200 + (7 - __y))
#define STV090x_P1_DMDRESDATA0                     STV090x_Px_DMDRESDATAy(1, 0)
#define STV090x_P1_DMDRESDATA1                     STV090x_Px_DMDRESDATAy(1, 1)
#define STV090x_P1_DMDRESDATA2                     STV090x_Px_DMDRESDATAy(1, 2)
#define STV090x_P1_DMDRESDATA3                     STV090x_Px_DMDRESDATAy(1, 3)
#define STV090x_P1_DMDRESDATA4                     STV090x_Px_DMDRESDATAy(1, 4)
#define STV090x_P1_DMDRESDATA5                     STV090x_Px_DMDRESDATAy(1, 5)
#define STV090x_P1_DMDRESDATA6                     STV090x_Px_DMDRESDATAy(1, 6)
#define STV090x_P1_DMDRESDATA7                     STV090x_Px_DMDRESDATAy(1, 7)
#define STV090x_P2_DMDRESDATA0                     STV090x_Px_DMDRESDATAy(2, 0)
#define STV090x_P2_DMDRESDATA1                     STV090x_Px_DMDRESDATAy(2, 1)
#define STV090x_P2_DMDRESDATA2                     STV090x_Px_DMDRESDATAy(2, 2)
#define STV090x_P2_DMDRESDATA3                     STV090x_Px_DMDRESDATAy(2, 3)
#define STV090x_P2_DMDRESDATA4                     STV090x_Px_DMDRESDATAy(2, 4)
#define STV090x_P2_DMDRESDATA5                     STV090x_Px_DMDRESDATAy(2, 5)
#define STV090x_P2_DMDRESDATA6                     STV090x_Px_DMDRESDATAy(2, 6)
#define STV090x_P2_DMDRESDATA7                     STV090x_Px_DMDRESDATAy(2, 7)
#define STV090x_OFFST_Px_DMDRES_DATA_FIELD         0
#define STV090x_WIDTH_Px_DMDRES_DATA_FIELD         8

#define STV090x_Px_FFEIy(__x, __y)                 (0xf4d0 - (__x - 1) * 0x200 + 0x2 * (__y - 1))
#define STV090x_P1_FFEI1                           STV090x_Px_FFEIy(1, 1)
#define STV090x_P1_FFEI2                           STV090x_Px_FFEIy(1, 2)
#define STV090x_P1_FFEI3                           STV090x_Px_FFEIy(1, 3)
#define STV090x_P1_FFEI4                           STV090x_Px_FFEIy(1, 4)
#define STV090x_P2_FFEI1                           STV090x_Px_FFEIy(2, 1)
#define STV090x_P2_FFEI2                           STV090x_Px_FFEIy(2, 2)
#define STV090x_P2_FFEI3                           STV090x_Px_FFEIy(2, 3)
#define STV090x_P2_FFEI4                           STV090x_Px_FFEIy(2, 4)
#define STV090x_OFFST_Px_FFE_ACCIy_FIELD           0
#define STV090x_WIDTH_Px_FFE_ACCIy_FIELD           8

#define STV090x_Px_FFEQy(__x, __y)                 (0xf4d1 - (__x - 1) * 0x200 + 0x2 * (__y - 1))
#define STV090x_P1_FFEQ1                           STV090x_Px_FFEQy(1, 1)
#define STV090x_P1_FFEQ2                           STV090x_Px_FFEQy(1, 2)
#define STV090x_P1_FFEQ3                           STV090x_Px_FFEQy(1, 3)
#define STV090x_P1_FFEQ4                           STV090x_Px_FFEQy(1, 4)
#define STV090x_P2_FFEQ1                           STV090x_Px_FFEQy(2, 1)
#define STV090x_P2_FFEQ2                           STV090x_Px_FFEQy(2, 2)
#define STV090x_P2_FFEQ3                           STV090x_Px_FFEQy(2, 3)
#define STV090x_P2_FFEQ4                           STV090x_Px_FFEQy(2, 4)
#define STV090x_OFFST_Px_FFE_ACCQy_FIELD           0
#define STV090x_WIDTH_Px_FFE_ACCQy_FIELD           8

#define STV090x_Px_FFECFG(__x)                     (0xf4d8 - (__x - 1) * 0x200)
#define STV090x_P1_FFECFG                          STV090x_Px_FFECFG(1)
#define STV090x_P2_FFECFG                          STV090x_Px_FFECFG(2)
#define STV090x_OFFST_Px_EQUALFFE_ON_FIELD         6
#define STV090x_WIDTH_Px_EQUALFFE_ON_FIELD         1

#define STV090x_Px_SMAPCOEF7(__x)                  (0xf500 - (__x - 1) * 0x200)
#define STV090x_P1_SMAPCOEF7                       STV090x_Px_SMAPCOEF7(1)
#define STV090x_P2_SMAPCOEF7                       STV090x_Px_SMAPCOEF7(2)
#define STV090x_OFFST_Px_DIS_QSCALE_FIELD          7
#define STV090x_WIDTH_Px_DIS_QSCALE_FIELD          1
#define STV090x_OFFST_Px_SMAPCOEF_Q_LLR12_FIELD    0
#define STV090x_WIDTH_Px_SMAPCOEF_Q_LLR12_FIELD    7

#define STV090x_Px_SMAPCOEF6(__x)                  (0xf501 - (__x - 1) * 0x200)
#define STV090x_P1_SMAPCOEF6                       STV090x_Px_SMAPCOEF6(1)
#define STV090x_P2_SMAPCOEF6                       STV090x_Px_SMAPCOEF6(2)
#define STV090x_OFFST_Px_ADJ_8PSKLLR1_FIELD        2
#define STV090x_WIDTH_Px_ADJ_8PSKLLR1_FIELD        1
#define STV090x_OFFST_Px_OLD_8PSKLLR1_FIELD        1
#define STV090x_WIDTH_Px_OLD_8PSKLLR1_FIELD        1
#define STV090x_OFFST_Px_DIS_AB8PSK_FIELD          0
#define STV090x_WIDTH_Px_DIS_AB8PSK_FIELD          1

#define STV090x_Px_SMAPCOEF5(__x)                  (0xf502 - (__x - 1) * 0x200)
#define STV090x_P1_SMAPCOEF5                       STV090x_Px_SMAPCOEF5(1)
#define STV090x_P2_SMAPCOEF5                       STV090x_Px_SMAPCOEF5(2)
#define STV090x_OFFST_Px_DIS_8SCALE_FIELD          7
#define STV090x_WIDTH_Px_DIS_8SCALE_FIELD          1
#define STV090x_OFFST_Px_SMAPCOEF_8P_LLR23_FIELD   0
#define STV090x_WIDTH_Px_SMAPCOEF_8P_LLR23_FIELD   7

#define STV090x_Px_DMDPLHSTAT(__x)                 (0xF520 - (__x - 1) * 0x200)
#define STV090x_P1_DMDPLHSTAT                      STV090x_Px_DMDPLHSTAT(1)
#define STV090x_P2_DMDPLHSTAT                      STV090x_Px_DMDPLHSTAT(2)
#define STV090x_OFFST_Px_PLH_STATISTIC_FIELD       0
#define STV090x_WIDTH_Px_PLH_STATISTIC_FIELD       8

#define STV090x_Px_LOCKTIMEy(__x, __y)             (0xF525 - (__x - 1) * 0x200 - __y * 0x1)
#define STV090x_P1_LOCKTIME0                       STV090x_Px_LOCKTIMEy(1, 0)
#define STV090x_P1_LOCKTIME1                       STV090x_Px_LOCKTIMEy(1, 1)
#define STV090x_P1_LOCKTIME2                       STV090x_Px_LOCKTIMEy(1, 2)
#define STV090x_P1_LOCKTIME3                       STV090x_Px_LOCKTIMEy(1, 3)
#define STV090x_P2_LOCKTIME0                       STV090x_Px_LOCKTIMEy(2, 0)
#define STV090x_P2_LOCKTIME1                       STV090x_Px_LOCKTIMEy(2, 1)
#define STV090x_P2_LOCKTIME2                       STV090x_Px_LOCKTIMEy(2, 2)
#define STV090x_P2_LOCKTIME3                       STV090x_Px_LOCKTIMEy(2, 3)
#define STV090x_OFFST_Px_DEMOD_LOCKTIME_FIELD      0
#define STV090x_WIDTH_Px_DEMOD_LOCKTIME_FIELD      8

#define STV090x_Px_TNRCFG(__x)                     (0xf4e0 - (__x - 1) * 0x200)  /* check */
#define STV090x_P1_TNRCFG                          STV090x_Px_TNRCFG(1)
#define STV090x_P2_TNRCFG                          STV090x_Px_TNRCFG(2)

#define STV090x_Px_TNRCFG2(__x)                    (0xf4e1 - (__x - 1) * 0x200)
#define STV090x_P1_TNRCFG2                         STV090x_Px_TNRCFG2(1)
#define STV090x_P2_TNRCFG2                         STV090x_Px_TNRCFG2(2)
#define STV090x_OFFST_Px_TUN_IQSWAP_FIELD          7
#define STV090x_WIDTH_Px_TUN_IQSWAP_FIELD          1

#define STV090x_Px_VITSCALE(__x)                   (0xf532 - (__x - 1) * 0x200)
#define STV090x_P1_VITSCALE                        STV090x_Px_VITSCALE(1)
#define STV090x_P2_VITSCALE                        STV090x_Px_VITSCALE(2)
#define STV090x_OFFST_Px_NVTH_NOSRANGE_FIELD       7
#define STV090x_WIDTH_Px_NVTH_NOSRANGE_FIELD       1
#define STV090x_OFFST_Px_VERROR_MAXMODE_FIELD      6
#define STV090x_WIDTH_Px_VERROR_MAXMODE_FIELD      1
#define STV090x_OFFST_Px_NSLOWSN_LOCKED_FIELD      3
#define STV090x_WIDTH_Px_NSLOWSN_LOCKED_FIELD      1
#define STV090x_OFFST_Px_DIS_RSFLOCK_FIELD         1
#define STV090x_WIDTH_Px_DIS_RSFLOCK_FIELD         1

#define STV090x_Px_FECM(__x)                       (0xf533 - (__x - 1) * 0x200)
#define STV090x_P1_FECM                            STV090x_Px_FECM(1)
#define STV090x_P2_FECM                            STV090x_Px_FECM(2)
#define STV090x_OFFST_Px_DSS_DVB_FIELD             7
#define STV090x_WIDTH_Px_DSS_DVB_FIELD             1
#define STV090x_OFFST_Px_DSS_SRCH_FIELD            4
#define STV090x_WIDTH_Px_DSS_SRCH_FIELD            1
#define STV090x_OFFST_Px_SYNCVIT_FIELD             1
#define STV090x_WIDTH_Px_SYNCVIT_FIELD             1
#define STV090x_OFFST_Px_IQINV_FIELD               0
#define STV090x_WIDTH_Px_IQINV_FIELD               1

#define STV090x_Px_VTH12(__x)                      (0xf534 - (__x - 1) * 0x200)
#define STV090x_P1_VTH12                           STV090x_Px_VTH12(1)
#define STV090x_P2_VTH12                           STV090x_Px_VTH12(2)
#define STV090x_OFFST_Px_VTH12_FIELD               0
#define STV090x_WIDTH_Px_VTH12_FIELD               8

#define STV090x_Px_VTH23(__x)                      (0xf535 - (__x - 1) * 0x200)
#define STV090x_P1_VTH23                           STV090x_Px_VTH23(1)
#define STV090x_P2_VTH23                           STV090x_Px_VTH23(2)
#define STV090x_OFFST_Px_VTH23_FIELD               0
#define STV090x_WIDTH_Px_VTH23_FIELD               8

#define STV090x_Px_VTH34(__x)                      (0xf536 - (__x - 1) * 0x200)
#define STV090x_P1_VTH34                           STV090x_Px_VTH34(1)
#define STV090x_P2_VTH34                           STV090x_Px_VTH34(2)
#define STV090x_OFFST_Px_VTH34_FIELD               0
#define STV090x_WIDTH_Px_VTH34_FIELD               8

#define STV090x_Px_VTH56(__x)                      (0xf537 - (__x - 1) * 0x200)
#define STV090x_P1_VTH56                           STV090x_Px_VTH56(1)
#define STV090x_P2_VTH56                           STV090x_Px_VTH56(2)
#define STV090x_OFFST_Px_VTH56_FIELD               0
#define STV090x_WIDTH_Px_VTH56_FIELD               8

#define STV090x_Px_VTH67(__x)                      (0xf538 - (__x - 1) * 0x200)
#define STV090x_P1_VTH67                           STV090x_Px_VTH67(1)
#define STV090x_P2_VTH67                           STV090x_Px_VTH67(2)
#define STV090x_OFFST_Px_VTH67_FIELD               0
#define STV090x_WIDTH_Px_VTH67_FIELD               8

#define STV090x_Px_VTH78(__x)                      (0xf539 - (__x - 1) * 0x200)
#define STV090x_P1_VTH78                           STV090x_Px_VTH78(1)
#define STV090x_P2_VTH78                           STV090x_Px_VTH78(2)
#define STV090x_OFFST_Px_VTH78_FIELD               0
#define STV090x_WIDTH_Px_VTH78_FIELD               8

#define STV090x_Px_VITCURPUN(__x)                  (0xf53a - (__x - 1) * 0x200)
#define STV090x_P1_VITCURPUN                       STV090x_Px_VITCURPUN(1)
#define STV090x_P2_VITCURPUN                       STV090x_Px_VITCURPUN(2)
#define STV090x_OFFST_Px_VIT_CURPUN_FIELD          0
#define STV090x_WIDTH_Px_VIT_CURPUN_FIELD          5

#define STV090x_Px_VERROR(__x)                     (0xf53b - (__x - 1) * 0x200)
#define STV090x_P1_VERROR                          STV090x_Px_VERROR(1)
#define STV090x_P2_VERROR                          STV090x_Px_VERROR(2)
#define STV090x_OFFST_Px_REGERR_VIT_FIELD          0
#define STV090x_WIDTH_Px_REGERR_VIT_FIELD          8

#define STV090x_Px_PRVIT(__x)                      (0xf53c - (__x - 1) * 0x200)
#define STV090x_P1_PRVIT                           STV090x_Px_PRVIT(1)
#define STV090x_P2_PRVIT                           STV090x_Px_PRVIT(2)
#define STV090x_OFFST_Px_DIS_VTHLOCK_FIELD         6
#define STV090x_WIDTH_Px_DIS_VTHLOCK_FIELD         1
#define STV090x_OFFST_Px_E7_8VIT_FIELD             5
#define STV090x_WIDTH_Px_E7_8VIT_FIELD             1
#define STV090x_OFFST_Px_E6_7VIT_FIELD             4
#define STV090x_WIDTH_Px_E6_7VIT_FIELD             1
#define STV090x_OFFST_Px_E5_6VIT_FIELD             3
#define STV090x_WIDTH_Px_E5_6VIT_FIELD             1
#define STV090x_OFFST_Px_E3_4VIT_FIELD             2
#define STV090x_WIDTH_Px_E3_4VIT_FIELD             1
#define STV090x_OFFST_Px_E2_3VIT_FIELD             1
#define STV090x_WIDTH_Px_E2_3VIT_FIELD             1
#define STV090x_OFFST_Px_E1_2VIT_FIELD             0
#define STV090x_WIDTH_Px_E1_2VIT_FIELD             1

#define STV090x_Px_VAVSRVIT(__x)                   (0xf53d - (__x - 1) * 0x200)
#define STV090x_P1_VAVSRVIT                        STV090x_Px_VAVSRVIT(1)
#define STV090x_P2_VAVSRVIT                        STV090x_Px_VAVSRVIT(2)
#define STV090x_OFFST_Px_SNVIT_FIELD               4
#define STV090x_WIDTH_Px_SNVIT_FIELD               2
#define STV090x_OFFST_Px_TOVVIT_FIELD              2
#define STV090x_WIDTH_Px_TOVVIT_FIELD              2
#define STV090x_OFFST_Px_HYPVIT_FIELD              0
#define STV090x_WIDTH_Px_HYPVIT_FIELD              2

#define STV090x_Px_VSTATUSVIT(__x)                 (0xf53e - (__x - 1) * 0x200)
#define STV090x_P1_VSTATUSVIT                      STV090x_Px_VSTATUSVIT(1)
#define STV090x_P2_VSTATUSVIT                      STV090x_Px_VSTATUSVIT(2)
#define STV090x_OFFST_Px_PRFVIT_FIELD              4
#define STV090x_WIDTH_Px_PRFVIT_FIELD              1
#define STV090x_OFFST_Px_LOCKEDVIT_FIELD           3
#define STV090x_WIDTH_Px_LOCKEDVIT_FIELD           1

#define STV090x_Px_VTHINUSE(__x)                   (0xf53f - (__x - 1) * 0x200)
#define STV090x_P1_VTHINUSE                        STV090x_Px_VTHINUSE(1)
#define STV090x_P2_VTHINUSE                        STV090x_Px_VTHINUSE(2)
#define STV090x_OFFST_Px_VIT_INUSE_FIELD           0
#define STV090x_WIDTH_Px_VIT_INUSE_FIELD           8

#define STV090x_Px_KDIV12(__x)                     (0xf540 - (__x - 1) * 0x200)
#define STV090x_P1_KDIV12                          STV090x_Px_KDIV12(1)
#define STV090x_P2_KDIV12                          STV090x_Px_KDIV12(2)
#define STV090x_OFFST_Px_K_DIVIDER_12_FIELD        0
#define STV090x_WIDTH_Px_K_DIVIDER_12_FIELD        7

#define STV090x_Px_KDIV23(__x)                     (0xf541 - (__x - 1) * 0x200)
#define STV090x_P1_KDIV23                          STV090x_Px_KDIV23(1)
#define STV090x_P2_KDIV23                          STV090x_Px_KDIV23(2)
#define STV090x_OFFST_Px_K_DIVIDER_23_FIELD        0
#define STV090x_WIDTH_Px_K_DIVIDER_23_FIELD        7

#define STV090x_Px_KDIV34(__x)                     (0xf542 - (__x - 1) * 0x200)
#define STV090x_P1_KDIV34                          STV090x_Px_KDIV34(1)
#define STV090x_P2_KDIV34                          STV090x_Px_KDIV34(2)
#define STV090x_OFFST_Px_K_DIVIDER_34_FIELD        0
#define STV090x_WIDTH_Px_K_DIVIDER_34_FIELD        7

#define STV090x_Px_KDIV56(__x)                     (0xf543 - (__x - 1) * 0x200)
#define STV090x_P1_KDIV56                          STV090x_Px_KDIV56(1)
#define STV090x_P2_KDIV56                          STV090x_Px_KDIV56(2)
#define STV090x_OFFST_Px_K_DIVIDER_56_FIELD        0
#define STV090x_WIDTH_Px_K_DIVIDER_56_FIELD        7

#define STV090x_Px_KDIV67(__x)                     (0xf544 - (__x - 1) * 0x200)
#define STV090x_P1_KDIV67                          STV090x_Px_KDIV67(1)
#define STV090x_P2_KDIV67                          STV090x_Px_KDIV67(2)
#define STV090x_OFFST_Px_K_DIVIDER_67_FIELD        0
#define STV090x_WIDTH_Px_K_DIVIDER_67_FIELD        7

#define STV090x_Px_KDIV78(__x)                     (0xf545 - (__x - 1) * 0x200)
#define STV090x_P1_KDIV78                          STV090x_Px_KDIV78(1)
#define STV090x_P2_KDIV78                          STV090x_Px_KDIV78(2)
#define STV090x_OFFST_Px_K_DIVIDER_78_FIELD        0
#define STV090x_WIDTH_Px_K_DIVIDER_78_FIELD        7

#define STV090x_Px_PDELCTRL1(__x)                  (0xf550 - (__x - 1) * 0x200)
#define STV090x_P1_PDELCTRL1                       STV090x_Px_PDELCTRL1(1)
#define STV090x_P2_PDELCTRL1                       STV090x_Px_PDELCTRL1(2)
#define STV090x_OFFST_Px_INV_MISMASK_FIELD         7
#define STV090x_WIDTH_Px_INV_MISMASK_FIELD         1
#define STV090x_OFFST_Px_FILTER_EN_FIELD           5
#define STV090x_WIDTH_Px_FILTER_EN_FIELD           1
#define STV090x_OFFST_Px_EN_MIS00_FIELD            1
#define STV090x_WIDTH_Px_EN_MIS00_FIELD            1
#define STV090x_OFFST_Px_ALGOSWRST_FIELD           0
#define STV090x_WIDTH_Px_ALGOSWRST_FIELD           1

#define STV090x_Px_PDELCTRL2(__x)                  (0xf551 - (__x - 1) * 0x200)
#define STV090x_P1_PDELCTRL2                       STV090x_Px_PDELCTRL2(1)
#define STV090x_P2_PDELCTRL2                       STV090x_Px_PDELCTRL2(2)
#define STV090x_OFFST_Px_FORCE_CONTINUOUS          7
#define STV090x_WIDTH_Px_FORCE_CONTINUOUS          1
#define STV090x_OFFST_Px_RESET_UPKO_COUNT          6
#define STV090x_WIDTH_Px_RESET_UPKO_COUNT          1
#define STV090x_OFFST_Px_USER_PKTDELIN_NB          5
#define STV090x_WIDTH_Px_USER_PKTDELIN_NB          1
#define STV090x_OFFST_Px_FORCE_LOCKED              4
#define STV090x_WIDTH_Px_FORCE_LOCKED              1
#define STV090x_OFFST_Px_DATA_UNBBSCRAM            3
#define STV090x_WIDTH_Px_DATA_UNBBSCRAM            1
#define STV090x_OFFST_Px_FORCE_LONGPACKET          2
#define STV090x_WIDTH_Px_FORCE_LONGPACKET          1
#define STV090x_OFFST_Px_FRAME_MODE_FIELD          1
#define STV090x_WIDTH_Px_FRAME_MODE_FIELD          1

#define STV090x_Px_HYSTTHRESH(__x)                 (0xf554 - (__x - 1) * 0x200)
#define STV090x_P1_HYSTTHRESH                      STV090x_Px_HYSTTHRESH(1)
#define STV090x_P2_HYSTTHRESH                      STV090x_Px_HYSTTHRESH(2)
#define STV090x_OFFST_Px_UNLCK_THRESH_FIELD        4
#define STV090x_WIDTH_Px_UNLCK_THRESH_FIELD        4
#define STV090x_OFFST_Px_DELIN_LCK_THRESH_FIELD    0
#define STV090x_WIDTH_Px_DELIN_LCK_THRESH_FIELD    4

#define STV090x_Px_ISIENTRY(__x)                   (0xf55e - (__x - 1) * 0x200)
#define STV090x_P1_ISIENTRY                        STV090x_Px_ISIENTRY(1)
#define STV090x_P2_ISIENTRY                        STV090x_Px_ISIENTRY(2)
#define STV090x_OFFST_Px_ISI_ENTRY_FIELD           0
#define STV090x_WIDTH_Px_ISI_ENTRY_FIELD           8

#define STV090x_Px_ISIBITENA(__x)                  (0xf55f - (__x - 1) * 0x200)
#define STV090x_P1_ISIBITENA                       STV090x_Px_ISIBITENA(1)
#define STV090x_P2_ISIBITENA                       STV090x_Px_ISIBITENA(2)
#define STV090x_OFFST_Px_ISI_BIT_EN_FIELD          0
#define STV090x_WIDTH_Px_ISI_BIT_EN_FIELD          8

#define STV090x_Px_MATSTRy(__x, __y)               (0xf561 - (__x - 1) * 0x200 - __y * 0x1)
#define STV090x_P1_MATSTR0                         STV090x_Px_MATSTRy(1, 0)
#define STV090x_P1_MATSTR1                         STV090x_Px_MATSTRy(1, 1)
#define STV090x_P2_MATSTR0                         STV090x_Px_MATSTRy(2, 0)
#define STV090x_P2_MATSTR1                         STV090x_Px_MATSTRy(2, 1)
#define STV090x_OFFST_Px_MATYPE_CURRENT_FIELD      0
#define STV090x_WIDTH_Px_MATYPE_CURRENT_FIELD      8

#define STV090x_Px_UPLSTRy(__x, __y)               (0xf563 - (__x - 1) * 0x200 - __y * 0x1)
#define STV090x_P1_UPLSTR0                         STV090x_Px_UPLSTRy(1,0)
#define STV090x_P1_UPLSTR1                         STV090x_Px_UPLSTRy(1, 1)
#define STV090x_P2_UPLSTR0                         STV090x_Px_UPLSTRy(2,0)
#define STV090x_P2_UPLSTR1                         STV090x_Px_UPLSTRy(2,1)
#define STV090x_OFFST_Px_UPL_CURRENT_FIELD         0
#define STV090x_WIDTH_Px_UPL_CURRENT_FIELD         8

#define STV090x_Px_DFLSTRy(__x, __y)               (0xf565 - (__x - 1) * 0x200 - __y * 0x1)
#define STV090x_P1_DFLSTR0                         STV090x_Px_DFLSTRy(1, 0)
#define STV090x_P1_DFLSTR1                         STV090x_Px_DFLSTRy(1, 1)
#define STV090x_P2_DFLSTR0                         STV090x_Px_DFLSTRy(2, 0)
#define STV090x_P2_DFLSTR1                         STV090x_Px_DFLSTRy(2, 1)
#define STV090x_OFFST_Px_DFL_CURRENT_FIELD         0
#define STV090x_WIDTH_Px_DFL_CURRENT_FIELD         8

#define STV090x_Px_SYNCSTR(__x)                    (0xf566 - (__x - 1) * 0x200)
#define STV090x_P1_SYNCSTR                         STV090x_Px_SYNCSTR(1)
#define STV090x_P2_SYNCSTR                         STV090x_Px_SYNCSTR(2)
#define STV090x_OFFST_Px_SYNC_CURRENT_FIELD        0
#define STV090x_WIDTH_Px_SYNC_CURRENT_FIELD        8

#define STV090x_Px_SYNCDSTRy(__x, __y)             (0xf568 - (__x - 1) * 0x200 - __y * 0x1)
#define STV090x_P1_SYNCDSTR0                       STV090x_Px_SYNCDSTRy(1, 0)
#define STV090x_P1_SYNCDSTR1                       STV090x_Px_SYNCDSTRy(1, 1)
#define STV090x_P2_SYNCDSTR0                       STV090x_Px_SYNCDSTRy(2, 0)
#define STV090x_P2_SYNCDSTR1                       STV090x_Px_SYNCDSTRy(2, 1)
#define STV090x_OFFST_Px_SYNCD_CURRENT_FIELD       0
#define STV090x_WIDTH_Px_SYNCD_CURRENT_FIELD       8

#define STV090x_Px_PDELSTATUS1(__x)                (0xf569 - (__x - 1) * 0x200)
#define STV090x_P1_PDELSTATUS1                     STV090x_Px_PDELSTATUS1(1)
#define STV090x_P2_PDELSTATUS1                     STV090x_Px_PDELSTATUS1(2)
#define STV090x_OFFST_Px_PKTDELIN_LOCK_FIELD       1
#define STV090x_WIDTH_Px_PKTDELIN_LOCK_FIELD       1
#define STV090x_OFFST_Px_FIRST_LOCK_FIELD          0
#define STV090x_WIDTH_Px_FIRST_LOCK_FIELD          1

#define STV090x_Px_PDELSTATUS2(__x)                (0xf56a - (__x - 1) * 0x200)
#define STV090x_P1_PDELSTATUS2                     STV090x_Px_PDELSTATUS2(1)
#define STV090x_P2_PDELSTATUS2                     STV090x_Px_PDELSTATUS2(2)
#define STV090x_OFFST_Px_FRAME_MODCOD_FIELD        2
#define STV090x_WIDTH_Px_FRAME_MODCOD_FIELD        5
#define STV090x_OFFST_Px_FRAME_TYPE_FIELD          0
#define STV090x_WIDTH_Px_FRAME_TYPE_FIELD          2

#define STV090x_Px_BBFCRCKO1(__x)                  (0xf56b - (__x - 1) * 0x200)
#define STV090x_P1_BBFCRCKO1                       STV090x_Px_BBFCRCKO1(1)
#define STV090x_P2_BBFCRCKO1                       STV090x_Px_BBFCRCKO1(2)
#define STV090x_OFFST_Px_BBHCRC_KOCNT_FIELD        0
#define STV090x_WIDTH_Px_BBHCRC_KOCNT_FIELD        8

#define STV090x_Px_BBFCRCKO0(__x)                  (0xf56c - (__x - 1) * 0x200)
#define STV090x_P1_BBFCRCKO0                       STV090x_Px_BBFCRCKO0(1)
#define STV090x_P2_BBFCRCKO0                       STV090x_Px_BBFCRCKO0(2)
#define STV090x_OFFST_Px_BBHCRC_KOCNT_FIELD        0
#define STV090x_WIDTH_Px_BBHCRC_KOCNT_FIELD        8

#define STV090x_Px_UPCRCKO1(__x)                   (0xf56d - (__x - 1) * 0x200)
#define STV090x_P1_UPCRCKO1                        STV090x_Px_UPCRCKO1(1)
#define STV090x_P2_UPCRCKO1                        STV090x_Px_UPCRCKO1(2)
#define STV090x_OFFST_Px_PKTCRC_KOCNT_FIELD        0
#define STV090x_WIDTH_Px_PKTCRC_KOCNT_FIELD        8

#define STV090x_Px_UPCRCKO0(__x)                   (0xf56e - (__x - 1) * 0x200)
#define STV090x_P1_UPCRCKO0                        STV090x_Px_UPCRCKO0(1)
#define STV090x_P2_UPCRCKO0                        STV090x_Px_UPCRCKO0(2)
#define STV090x_OFFST_Px_PKTCRC_KOCNT_FIELD        0
#define STV090x_WIDTH_Px_PKTCRC_KOCNT_FIELD        8

#define STV090x_NBITER_NFx(__x)                    (0xFA03 + (__x - 4) * 0x1)
#define STV090x_NBITER_NF4                         STV090x_NBITER_NFx(4)
#define STV090x_NBITER_NF5                         STV090x_NBITER_NFx(5)
#define STV090x_NBITER_NF6                         STV090x_NBITER_NFx(6)
#define STV090x_NBITER_NF7                         STV090x_NBITER_NFx(7)
#define STV090x_NBITER_NF8                         STV090x_NBITER_NFx(8)
#define STV090x_NBITER_NF9                         STV090x_NBITER_NFx(9)
#define STV090x_NBITER_NF10                        STV090x_NBITER_NFx(10)
#define STV090x_NBITER_NF11                        STV090x_NBITER_NFx(11)
#define STV090x_NBITER_NF12                        STV090x_NBITER_NFx(12)
#define STV090x_NBITER_NF13                        STV090x_NBITER_NFx(13)
#define STV090x_NBITER_NF14                        STV090x_NBITER_NFx(14)
#define STV090x_NBITER_NF15                        STV090x_NBITER_NFx(15)
#define STV090x_NBITER_NF16                        STV090x_NBITER_NFx(16)
#define STV090x_NBITER_NF17                        STV090x_NBITER_NFx(17)

#define STV090x_NBITERNOERR                        0xFA3F
#define STV090x_OFFST_NBITER_STOP_CRIT_FIELD       0
#define STV090x_WIDTH_NBITER_STOP_CRIT_FIELD       4

#define STV090x_GAINLLR_NFx(__x)                   (0xFA43 + (__x - 4) * 0x1)
#define STV090x_GAINLLR_NF4                        STV090x_GAINLLR_NFx(4)
#define STV090x_OFFST_GAINLLR_NF_QP_1_2_FIELD      0
#define STV090x_WIDTH_GAINLLR_NF_QP_1_2_FIELD      7

#define STV090x_GAINLLR_NF5                        STV090x_GAINLLR_NFx(5)
#define STV090x_OFFST_GAINLLR_NF_QP_3_5_FIELD      0
#define STV090x_WIDTH_GAINLLR_NF_QP_3_5_FIELD      7

#define STV090x_GAINLLR_NF6                        STV090x_GAINLLR_NFx(6)
#define STV090x_OFFST_GAINLLR_NF_QP_2_3_FIELD      0
#define STV090x_WIDTH_GAINLLR_NF_QP_2_3_FIELD      7

#define STV090x_GAINLLR_NF7                        STV090x_GAINLLR_NFx(7)
#define STV090x_OFFST_GAINLLR_NF_QP_3_4_FIELD      0
#define STV090x_WIDTH_GAINLLR_NF_QP_3_4_FIELD      7

#define STV090x_GAINLLR_NF8                        STV090x_GAINLLR_NFx(8)
#define STV090x_OFFST_GAINLLR_NF_QP_4_5_FIELD      0
#define STV090x_WIDTH_GAINLLR_NF_QP_4_5_FIELD      7

#define STV090x_GAINLLR_NF9                        STV090x_GAINLLR_NFx(9)
#define STV090x_OFFST_GAINLLR_NF_QP_5_6_FIELD      0
#define STV090x_WIDTH_GAINLLR_NF_QP_5_6_FIELD      7

#define STV090x_GAINLLR_NF10                       STV090x_GAINLLR_NFx(10)
#define STV090x_OFFST_GAINLLR_NF_QP_8_9_FIELD      0
#define STV090x_WIDTH_GAINLLR_NF_QP_8_9_FIELD      7

#define STV090x_GAINLLR_NF11                       STV090x_GAINLLR_NFx(11)
#define STV090x_OFFST_GAINLLR_NF_QP_9_10_FIELD     0
#define STV090x_WIDTH_GAINLLR_NF_QP_9_10_FIELD     7

#define STV090x_GAINLLR_NF12                       STV090x_GAINLLR_NFx(12)
#define STV090x_OFFST_GAINLLR_NF_8P_3_5_FIELD      0
#define STV090x_WIDTH_GAINLLR_NF_8P_3_5_FIELD      7

#define STV090x_GAINLLR_NF13                       STV090x_GAINLLR_NFx(13)
#define STV090x_OFFST_GAINLLR_NF_8P_2_3_FIELD      0
#define STV090x_WIDTH_GAINLLR_NF_8P_2_3_FIELD      7

#define STV090x_GAINLLR_NF14                       STV090x_GAINLLR_NFx(14)
#define STV090x_OFFST_GAINLLR_NF_8P_3_4_FIELD      0
#define STV090x_WIDTH_GAINLLR_NF_8P_3_4_FIELD      7

#define STV090x_GAINLLR_NF15                       STV090x_GAINLLR_NFx(15)
#define STV090x_OFFST_GAINLLR_NF_8P_5_6_FIELD      0
#define STV090x_WIDTH_GAINLLR_NF_8P_5_6_FIELD      7

#define STV090x_GAINLLR_NF16                       STV090x_GAINLLR_NFx(16)
#define STV090x_OFFST_GAINLLR_NF_8P_8_9_FIELD      0
#define STV090x_WIDTH_GAINLLR_NF_8P_8_9_FIELD      7

#define STV090x_GAINLLR_NF17                       STV090x_GAINLLR_NFx(17)
#define STV090x_OFFST_GAINLLR_NF_8P_9_10_FIELD     0
#define STV090x_WIDTH_GAINLLR_NF_8P_9_10_FIELD     7

#define STV090x_GENCFG                             0xFA86
#define STV090x_OFFST_BROADCAST_FIELD              4
#define STV090x_WIDTH_BROADCAST_FIELD              1
#define STV090x_OFFST_PRIORITY_FIELD               1
#define STV090x_WIDTH_PRIORITY_FIELD               1
#define STV090x_OFFST_DDEMOD_FIELD                 0
#define STV090x_WIDTH_DDEMOD_FIELD                 1

#define STV090x_LDPCERRx(__x)                      (0xFA97 - (__x * 0x1))
#define STV090x_LDPCERR0                           STV090x_LDPCERRx(0)
#define STV090x_LDPCERR1                           STV090x_LDPCERRx(1)
#define STV090x_OFFST_Px_LDPC_ERRORS_COUNTER_FIELD 0
#define STV090x_WIDTH_Px_LDPC_ERRORS_COUNTER_FIELD 8

#define STV090x_BCHERR                             0xFA98
#define STV090x_OFFST_Px_ERRORFLAG_FIELD           4
#define STV090x_WIDTH_Px_ERRORFLAG_FIELD           1
#define STV090x_OFFST_Px_BCH_ERRORS_COUNTER_FIELD  0
#define STV090x_WIDTH_Px_BCH_ERRORS_COUNTER_FIELD  4

#define STV090x_Px_TSSTATEM(__x)                   (0xF570 - (__x - 1) * 0x200)
#define STV090x_P1_TSSTATEM                        STV090x_Px_TSSTATEM(1)
#define STV090x_P2_TSSTATEM                        STV090x_Px_TSSTATEM(2)
#define STV090x_OFFST_Px_TSDIL_ON_FIELD            7
#define STV090x_WIDTH_Px_TSDIL_ON_FIELD            1
#define STV090x_OFFST_Px_TSRS_ON_FIELD             5
#define STV090x_WIDTH_Px_TSRS_ON_FIELD             1
#define STV090x_OFFST_Px_TSOUT_NOSYNC              0
#define STV090x_WIDTH_Px_TSOUT_NOSYNC              1

#define STV090x_Px_TSCFGH(__x)                     (0xF572 - (__x - 1) * 0x200)
#define STV090x_P1_TSCFGH                          STV090x_Px_TSCFGH(1)
#define STV090x_P2_TSCFGH                          STV090x_Px_TSCFGH(2)
#define STV090x_OFFST_Px_TSFIFO_DVBCI_FIELD        7
#define STV090x_WIDTH_Px_TSFIFO_DVBCI_FIELD        1
#define STV090x_OFFST_Px_TSFIFO_SERIAL_FIELD       6
#define STV090x_WIDTH_Px_TSFIFO_SERIAL_FIELD       1
#define STV090x_OFFST_Px_TSFIFO_TEIUPDATE_FIELD    5
#define STV090x_WIDTH_Px_TSFIFO_TEIUPDATE_FIELD    1
#define STV090x_OFFST_Px_TSFIFO_DUTY50_FIELD       4
#define STV090x_WIDTH_Px_TSFIFO_DUTY50_FIELD       1
#define STV090x_OFFST_Px_TSFIFO_HSGNLOUT_FIELD     3
#define STV090x_WIDTH_Px_TSFIFO_HSGNLOUT_FIELD     1
#define STV090x_OFFST_Px_TSFIFO_ERRORMODE_FIELD    1
#define STV090x_WIDTH_Px_TSFIFO_ERRORMODE_FIELD    2
#define STV090x_OFFST_Px_RST_HWARE_FIELD           0
#define STV090x_WIDTH_Px_RST_HWARE_FIELD           1

#define STV090x_Px_TSCFGM(__x)                     (0xF573 - (__x - 1) * 0x200)
#define STV090x_P1_TSCFGM                          STV090x_Px_TSCFGM(1)
#define STV090x_P2_TSCFGM                          STV090x_Px_TSCFGM(2)
#define STV090x_OFFST_Px_TSFIFO_MANSPEED_FIELD     6
#define STV090x_WIDTH_Px_TSFIFO_MANSPEED_FIELD     2
#define STV090x_OFFST_Px_TSFIFO_PERMDATA_FIELD     5
#define STV090x_WIDTH_Px_TSFIFO_PERMDATA_FIELD     1
#define STV090x_OFFST_Px_TSFIFO_INVDATA_FIELD      0
#define STV090x_WIDTH_Px_TSFIFO_INVDATA_FIELD      1

#define STV090x_Px_TSCFGL(__x)                     (0xF574 - (__x - 1) * 0x200)
#define STV090x_P1_TSCFGL                          STV090x_Px_TSCFGL(1)
#define STV090x_P2_TSCFGL                          STV090x_Px_TSCFGL(2)
#define STV090x_OFFST_Px_TSFIFO_BCLKDEL1CK_FIELD   6
#define STV090x_WIDTH_Px_TSFIFO_BCLKDEL1CK_FIELD   2
#define STV090x_OFFST_Px_BCHERROR_MODE_FIELD       4
#define STV090x_WIDTH_Px_BCHERROR_MODE_FIELD       2
#define STV090x_OFFST_Px_TSFIFO_NSGNL2DATA_FIELD   3
#define STV090x_WIDTH_Px_TSFIFO_NSGNL2DATA_FIELD   1
#define STV090x_OFFST_Px_TSFIFO_EMBINDVB_FIELD     2
#define STV090x_WIDTH_Px_TSFIFO_EMBINDVB_FIELD     1
#define STV090x_OFFST_Px_TSFIFO_DPUNACT_FIELD      1
#define STV090x_WIDTH_Px_TSFIFO_DPUNACT_FIELD      1

#define STV090x_Px_TSSYNC(__x)                     (0xF575 - (__x - 1) * 0x200)
#define STV090x_P1_TSSYNC                          STV090x_Px_TSSYNC(1)
#define STV090x_P2_TSSYNC                          STV090x_Px_TSSYNC(2)
#define STV090x_OFFST_Px_TSFIFO_FISCR3B            5
#define STV090x_WIDTH_Px_TSFIFO_FISCR3B            2
#define STV090x_OFFST_Px_TSFIFO_SYNCMODE           3
#define STV090x_WIDTH_Px_TSFIFO_SYNCMODE           2

#define STV090x_Px_TSINSDELH(__x)                  (0xF576 - (__x - 1) * 0x200)
#define STV090x_P1_TSINSDELH                       STV090x_Px_TSINSDELH(1)
#define STV090x_P2_TSINSDELH                       STV090x_Px_TSINSDELH(2)
#define STV090x_OFFST_Px_TSDEL_SYNCBYTE_FIELD      7
#define STV090x_WIDTH_Px_TSDEL_SYNCBYTE_FIELD      1
#define STV090x_OFFST_Px_TSDEL_XXHEADER_FIELD      6
#define STV090x_WIDTH_Px_TSDEL_XXHEADER_FIELD      1

#define STV090x_Px_TSSPEED(__x)                    (0xF580 - (__x - 1) * 0x200)
#define STV090x_P1_TSSPEED                         STV090x_Px_TSSPEED(1)
#define STV090x_P2_TSSPEED                         STV090x_Px_TSSPEED(2)
#define STV090x_OFFST_Px_TSFIFO_OUTSPEED_FIELD     0
#define STV090x_WIDTH_Px_TSFIFO_OUTSPEED_FIELD     8

#define STV090x_Px_TSSTATUS(__x)                   (0xF581 - (__x - 1) * 0x200)
#define STV090x_P1_TSSTATUS                        STV090x_Px_TSSTATUS(1)
#define STV090x_P2_TSSTATUS                        STV090x_Px_TSSTATUS(2)
#define STV090x_OFFST_Px_TSFIFO_LINEOK_FIELD       7
#define STV090x_WIDTH_Px_TSFIFO_LINEOK_FIELD       1
#define STV090x_OFFST_Px_TSFIFO_ERROR_FIELD        6
#define STV090x_WIDTH_Px_TSFIFO_ERROR_FIELD        1

#define STV090x_Px_TSSTATUS2(__x)                  (0xF582 - (__x - 1) * 0x200)
#define STV090x_P1_TSSTATUS2                       STV090x_Px_TSSTATUS2(1)
#define STV090x_P2_TSSTATUS2                       STV090x_Px_TSSTATUS2(2)
#define STV090x_OFFST_Px_TSFIFO_DEMODSEL_FIELD     7
#define STV090x_WIDTH_Px_TSFIFO_DEMODSEL_FIELD     1
#define STV090x_OFFST_Px_TSFIFOSPEED_STORE_FIELD   6
#define STV090x_WIDTH_Px_TSFIFOSPEED_STORE_FIELD   1
#define STV090x_OFFST_Px_DILXX_RESET_FIELD         5
#define STV090x_WIDTH_Px_DILXX_RESET_FIELD         1
#define STV090x_OFFST_Px_TSSERIAL_IMPOS_FIELD      5
#define STV090x_WIDTH_Px_TSSERIAL_IMPOS_FIELD      1
#define STV090x_OFFST_Px_SCRAMBDETECT_FIELD        1
#define STV090x_WIDTH_Px_SCRAMBDETECT_FIELD        1

#define STV090x_Px_TSBITRATEy(__x, __y)            (0xF584 - (__x - 1) * 0x200 - __y * 0x1)
#define STV090x_P1_TSBITRATE0                      STV090x_Px_TSBITRATEy(1,0)
#define STV090x_P1_TSBITRATE1                      STV090x_Px_TSBITRATEy(1, 1)
#define STV090x_P2_TSBITRATE0                      STV090x_Px_TSBITRATEy(2,0)
#define STV090x_P2_TSBITRATE1                      STV090x_Px_TSBITRATEy(2,1)
#define STV090x_OFFST_Px_TSFIFO_BITRATE_FIELD      7
#define STV090x_WIDTH_Px_TSFIFO_BITRATE_FIELD      8

#define STV090x_Px_ERRCTRL1(__x)                   (0xF598 - (__x - 1) * 0x200)
#define STV090x_P1_ERRCTRL1                        STV090x_Px_ERRCTRL1(1)
#define STV090x_P2_ERRCTRL1                        STV090x_Px_ERRCTRL1(2)
#define STV090x_OFFST_Px_ERR_SOURCE_FIELD          4
#define STV090x_WIDTH_Px_ERR_SOURCE_FIELD          4
#define STV090x_OFFST_Px_NUM_EVENT_FIELD           0
#define STV090x_WIDTH_Px_NUM_EVENT_FIELD           3

#define STV090x_Px_ERRCNT12(__x)                   (0xF599 - (__x - 1) * 0x200)
#define STV090x_P1_ERRCNT12                        STV090x_Px_ERRCNT12(1)
#define STV090x_P2_ERRCNT12                        STV090x_Px_ERRCNT12(2)
#define STV090x_OFFST_Px_ERRCNT1_OLDVALUE_FIELD    7
#define STV090x_WIDTH_Px_ERRCNT1_OLDVALUE_FIELD    1
#define STV090x_OFFST_Px_ERR_CNT12_FIELD           0
#define STV090x_WIDTH_Px_ERR_CNT12_FIELD           7

#define STV090x_Px_ERRCNT11(__x)                   (0xF59A - (__x - 1) * 0x200)
#define STV090x_P1_ERRCNT11                        STV090x_Px_ERRCNT11(1)
#define STV090x_P2_ERRCNT11                        STV090x_Px_ERRCNT11(2)
#define STV090x_OFFST_Px_ERR_CNT11_FIELD           0
#define STV090x_WIDTH_Px_ERR_CNT11_FIELD           8

#define STV090x_Px_ERRCNT10(__x)                   (0xF59B - (__x - 1) * 0x200)
#define STV090x_P1_ERRCNT10                        STV090x_Px_ERRCNT10(1)
#define STV090x_P2_ERRCNT10                        STV090x_Px_ERRCNT10(2)
#define STV090x_OFFST_Px_ERR_CNT10_FIELD           0
#define STV090x_WIDTH_Px_ERR_CNT10_FIELD           8

#define STV090x_Px_ERRCTRL2(__x)                   (0xF59C - (__x - 1) * 0x200)
#define STV090x_P1_ERRCTRL2                        STV090x_Px_ERRCTRL2(1)
#define STV090x_P2_ERRCTRL2                        STV090x_Px_ERRCTRL2(2)
#define STV090x_OFFST_Px_ERR_SOURCE2_FIELD         4
#define STV090x_WIDTH_Px_ERR_SOURCE2_FIELD         4
#define STV090x_OFFST_Px_NUM_EVENT2_FIELD          0
#define STV090x_WIDTH_Px_NUM_EVENT2_FIELD          3

#define STV090x_Px_ERRCNT22(__x)                   (0xF59D - (__x - 1) * 0x200)
#define STV090x_P1_ERRCNT22                        STV090x_Px_ERRCNT22(1)
#define STV090x_P2_ERRCNT22                        STV090x_Px_ERRCNT22(2)
#define STV090x_OFFST_Px_ERRCNT2_OLDVALUE_FIELD    7
#define STV090x_WIDTH_Px_ERRCNT2_OLDVALUE_FIELD    1
#define STV090x_OFFST_Px_ERR_CNT2_FIELD            0
#define STV090x_WIDTH_Px_ERR_CNT2_FIELD            7

#define STV090x_Px_ERRCNT21(__x)                   (0xF59E - (__x - 1) * 0x200)
#define STV090x_P1_ERRCNT21                        STV090x_Px_ERRCNT21(1)
#define STV090x_P2_ERRCNT21                        STV090x_Px_ERRCNT21(2)
#define STV090x_OFFST_Px_ERR_CNT21_FIELD           0
#define STV090x_WIDTH_Px_ERR_CNT21_FIELD           8

#define STV090x_Px_ERRCNT20(__x)                   (0xF59F - (__x - 1) * 0x200)
#define STV090x_P1_ERRCNT20                        STV090x_Px_ERRCNT20(1)
#define STV090x_P2_ERRCNT20                        STV090x_Px_ERRCNT20(2)
#define STV090x_OFFST_Px_ERR_CNT20_FIELD           0
#define STV090x_WIDTH_Px_ERR_CNT20_FIELD           8

#define STV090x_Px_FECSPY(__x)                     (0xF5A0 - (__x - 1) * 0x200)
#define STV090x_P1_FECSPY                          STV090x_Px_FECSPY(1)
#define STV090x_P2_FECSPY                          STV090x_Px_FECSPY(2)
#define STV090x_OFFST_Px_SPY_ENABLE_FIELD          7
#define STV090x_WIDTH_Px_SPY_ENABLE_FIELD          1
#define STV090x_OFFST_Px_BERMETER_DATAMAODE_FIELD  2
#define STV090x_WIDTH_Px_BERMETER_DATAMAODE_FIELD  2

#define STV090x_Px_FSPYCFG(__x)                    (0xF5A1 - (__x - 1) * 0x200)
#define STV090x_P1_FSPYCFG                         STV090x_Px_FSPYCFG(1)
#define STV090x_P2_FSPYCFG                         STV090x_Px_FSPYCFG(2)
#define STV090x_OFFST_Px_RST_ON_ERROR_FIELD        5
#define STV090x_WIDTH_Px_RST_ON_ERROR_FIELD        1
#define STV090x_OFFST_Px_ONE_SHOT_FIELD            4
#define STV090x_WIDTH_Px_ONE_SHOT_FIELD            1
#define STV090x_OFFST_Px_I2C_MODE_FIELD            2
#define STV090x_WIDTH_Px_I2C_MODE_FIELD            2

#define STV090x_Px_FSPYDATA(__x)                   (0xF5A2 - (__x - 1) * 0x200)
#define STV090x_P1_FSPYDATA                        STV090x_Px_FSPYDATA(1)
#define STV090x_P2_FSPYDATA                        STV090x_Px_FSPYDATA(2)
#define STV090x_OFFST_Px_SPY_STUFFING_FIELD        7
#define STV090x_WIDTH_Px_SPY_STUFFING_FIELD        1
#define STV090x_OFFST_Px_SPY_CNULLPKT_FIELD        5
#define STV090x_WIDTH_Px_SPY_CNULLPKT_FIELD        1
#define STV090x_OFFST_Px_SPY_OUTDATA_MODE_FIELD    0
#define STV090x_WIDTH_Px_SPY_OUTDATA_MODE_FIELD    5

#define STV090x_Px_FSPYOUT(__x)                    (0xF5A3 - (__x - 1) * 0x200)
#define STV090x_P1_FSPYOUT                         STV090x_Px_FSPYOUT(1)
#define STV090x_P2_FSPYOUT                         STV090x_Px_FSPYOUT(2)
#define STV090x_OFFST_Px_FSPY_DIRECT_FIELD         7
#define STV090x_WIDTH_Px_FSPY_DIRECT_FIELD         1
#define STV090x_OFFST_Px_STUFF_MODE_FIELD          0
#define STV090x_WIDTH_Px_STUFF_MODE_FIELD          3

#define STV090x_Px_FSTATUS(__x)                    (0xF5A4 - (__x - 1) * 0x200)
#define STV090x_P1_FSTATUS                         STV090x_Px_FSTATUS(1)
#define STV090x_P2_FSTATUS                         STV090x_Px_FSTATUS(2)
#define STV090x_OFFST_Px_SPY_ENDSIM_FIELD          7
#define STV090x_WIDTH_Px_SPY_ENDSIM_FIELD          1
#define STV090x_OFFST_Px_VALID_SIM_FIELD           6
#define STV090x_WIDTH_Px_VALID_SIM_FIELD           1
#define STV090x_OFFST_Px_FOUND_SIGNAL_FIELD        5
#define STV090x_WIDTH_Px_FOUND_SIGNAL_FIELD        1
#define STV090x_OFFST_Px_DSS_SYNCBYTE_FIELD        4
#define STV090x_WIDTH_Px_DSS_SYNCBYTE_FIELD        1
#define STV090x_OFFST_Px_RESULT_STATE_FIELD        0
#define STV090x_WIDTH_Px_RESULT_STATE_FIELD        4

#define STV090x_Px_FBERCPT4(__x)                   (0xF5A8 - (__x - 1) * 0x200)
#define STV090x_P1_FBERCPT4                        STV090x_Px_FBERCPT4(1)
#define STV090x_P2_FBERCPT4                        STV090x_Px_FBERCPT4(2)
#define STV090x_OFFST_Px_FBERMETER_CPT_FIELD       0
#define STV090x_WIDTH_Px_FBERMETER_CPT_FIELD       8

#define STV090x_Px_FBERCPT3(__x)                   (0xF5A9 - (__x - 1) * 0x200)
#define STV090x_P1_FBERCPT3                        STV090x_Px_FBERCPT3(1)
#define STV090x_P2_FBERCPT3                        STV090x_Px_FBERCPT3(2)
#define STV090x_OFFST_Px_FBERMETER_CPT_FIELD       0
#define STV090x_WIDTH_Px_FBERMETER_CPT_FIELD       8

#define STV090x_Px_FBERCPT2(__x)                   (0xF5AA - (__x - 1) * 0x200)
#define STV090x_P1_FBERCPT2                        STV090x_Px_FBERCPT2(1)
#define STV090x_P2_FBERCPT2                        STV090x_Px_FBERCPT2(2)
#define STV090x_OFFST_Px_FBERMETER_CPT_FIELD       0
#define STV090x_WIDTH_Px_FBERMETER_CPT_FIELD       8

#define STV090x_Px_FBERCPT1(__x)                   (0xF5AB - (__x - 1) * 0x200)
#define STV090x_P1_FBERCPT1                        STV090x_Px_FBERCPT1(1)
#define STV090x_P2_FBERCPT1                        STV090x_Px_FBERCPT1(2)
#define STV090x_OFFST_Px_FBERMETER_CPT_FIELD       0
#define STV090x_WIDTH_Px_FBERMETER_CPT_FIELD       8

#define STV090x_Px_FBERCPT0(__x)                   (0xF5AC - (__x - 1) * 0x200)
#define STV090x_P1_FBERCPT0                        STV090x_Px_FBERCPT0(1)
#define STV090x_P2_FBERCPT0                        STV090x_Px_FBERCPT0(2)
#define STV090x_OFFST_Px_FBERMETER_CPT_FIELD       0
#define STV090x_WIDTH_Px_FBERMETER_CPT_FIELD       8

#define STV090x_Px_FBERERRy(__x, __y)              (0xF5AF - (__x - 1) * 0x200 - __y * 0x1)
#define STV090x_P1_FBERERR0                        STV090x_Px_FBERERRy(1, 0)
#define STV090x_P1_FBERERR1                        STV090x_Px_FBERERRy(1, 1)
#define STV090x_P1_FBERERR2                        STV090x_Px_FBERERRy(1, 2)
#define STV090x_P2_FBERERR0                        STV090x_Px_FBERERRy(2, 0)
#define STV090x_P2_FBERERR1                        STV090x_Px_FBERERRy(2, 1)
#define STV090x_P2_FBERERR2                        STV090x_Px_FBERERRy(2, 2)
#define STV090x_OFFST_Px_FBERMETER_CPT_ERR_FIELD   0
#define STV090x_WIDTH_Px_FBERMETER_CPT_ERR_FIELD   8

#define STV090x_Px_FSPYBER(__x)                    (0xF5B2 - (__x - 1) * 0x200)
#define STV090x_P1_FSPYBER                         STV090x_Px_FSPYBER(1)
#define STV090x_P2_FSPYBER                         STV090x_Px_FSPYBER(2)
#define STV090x_OFFST_Px_FSPYBER_SYNCBYTE_FIELD    4
#define STV090x_WIDTH_Px_FSPYBER_SYNCBYTE_FIELD    1
#define STV090x_OFFST_Px_FSPYBER_UNSYNC_FIELD      3
#define STV090x_WIDTH_Px_FSPYBER_UNSYNC_FIELD      1
#define STV090x_OFFST_Px_FSPYBER_CTIME_FIELD       0
#define STV090x_WIDTH_Px_FSPYBER_CTIME_FIELD       3

#define STV090x_RCCFGH                             0xf600

#define STV090x_TSGENERAL                          0xF630
#define STV090x_OFFST_Px_MUXSTREAM_OUT_FIELD       3
#define STV090x_WIDTH_Px_MUXSTREAM_OUT_FIELD       1
#define STV090x_OFFST_Px_TSFIFO_PERMPARAL_FIELD    1
#define STV090x_WIDTH_Px_TSFIFO_PERMPARAL_FIELD    2

#define STV090x_TSGENERAL1X                        0xf670
#define STV090x_CFGEXT                             0xfa80

#define STV090x_TSTRES0                            0xFF11
#define STV090x_OFFST_FRESFEC_FIELD                7
#define STV090x_WIDTH_FRESFEC_FIELD                1

#define STV090x_Px_TSTDISRX(__x)                   (0xFF67 - (__x - 1) * 0x2)
#define STV090x_P1_TSTDISRX                        STV090x_Px_TSTDISRX(1)
#define STV090x_P2_TSTDISRX                        STV090x_Px_TSTDISRX(2)
#define STV090x_OFFST_Px_TSTDISRX_SELECT_FIELD     3
#define STV090x_WIDTH_Px_TSTDISRX_SELECT_FIELD     1

#define STV090x_Px_U1(__x)                         (0xf5d8 - (__x - 0x100) * 0x2)
#define STV090x_P1_U1                              STV090x_Px_U1(1)
#define STV090x_P2_U1                              STV090x_Px_U1(2)

#endif  // __STV090x_REG_H
// vim:ts=4
