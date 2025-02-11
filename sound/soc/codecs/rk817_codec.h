/*
 * Copyright (c) 2018 Rockchip Electronics Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __RK817_CODEC_H__
#define __RK817_CODEC_H__

/* codec register */
#define RK817_CODEC_BASE		0x0000

#define RK817_PMIC_CHIP_NAME		(RK817_CODEC_BASE + 0xed)
#define RK817_PMIC_CHIP_VER		(RK817_CODEC_BASE + 0xee)

/* RK817_CODEC_DTOP_DIGEN_CLKE */
#define ADC_DIG_CLK_MASK		(0xf << 4)
#define ADC_DIG_CLK_SFT			4
#define ADC_DIG_CLK_DIS			(0x0 << 4)
#define ADC_DIG_CLK_EN			(0xe << 4)

#define I2STX_CKE_EN			(0x1 << 6)
#define I2STX_CKE_DIS			(0x0 << 6)

#define DAC_DIG_CLK_MASK		(0xf << 0)
#define DAC_DIG_CLK_SFT			0
#define DAC_DIG_CLK_DIS			(0x0 << 0)
#define DAC_DIG_CLK_EN			(0xe << 0)

#define I2STX_EN_MASK			BIT(4)
#define I2STX_EN			BIT(4)
#define I2STX_DIS			0

#define I2SRX_EN_MASK			BIT(0)
#define I2SRX_EN			BIT(0)
#define I2SRX_DIS			0

/* RK817_CODEC_APLL_CFG5 */
#define PLL_PW_DOWN			(0x01 << 0)
#define PLL_PW_UP			(0x00 << 0)

/* RK817_CODEC_DI2S_CKM */
#define PDM_EN_MASK			(0x1 << 3)
#define PDM_EN_SFT			3
#define PDM_EN_DISABLE			(0x0 << 3)
#define PDM_EN_ENABLE			(0x1 << 3)

#define SCK_EN_ENABLE			(0x1 << 2)
#define SCK_EN_DISABLE			(0x0 << 2)

#define RK817_I2S_MODE_MASK		(0x1 << 0)
#define RK817_I2S_MODE_SFT		0
#define RK817_I2S_MODE_MST		(0x1 << 0)
#define RK817_I2S_MODE_SLV		(0x0 << 0)

/* RK817_CODEC_DDAC_SR_LMT0 */
#define DACSRT_MASK			(0x7 << 0)

/* RK817_CODEC_DDAC_MUTE_MIXCTL */
#define DACMT_ENABLE			(0x1 << 0)
#define DACMT_DISABLE			(0x0 << 0)

/* RK817_CODEC_DI2S_RXCR2 */
#define VDW_RX_24BITS			(0x17)
#define VDW_RX_16BITS			(0x0f)
/* RK817_CODEC_DI2S_TXCR2 */
#define VDW_TX_24BITS			(0x17)
#define VDW_TX_16BITS			(0x0f)

/* RK817_CODEC_AHP_CFG1 */
#define HP_ANTIPOP_ENABLE		(0x1 << 4)
#define HP_ANTIPOP_DISABLE		(0x0 << 4)

/* RK817_CODEC_ADAC_CFG1 */
#define PWD_DACBIAS_MASK		(0x1 << 3)
#define PWD_DACBIAS_SFT			3
#define PWD_DACBIAS_DOWN		(0x1 << 3)
#define PWD_DACBIAS_ON			(0x0 << 3)

#define PWD_DACD_MASK			(0x1 << 2)
#define PWD_DACD_SFT			2
#define PWD_DACD_DOWN			(0x1 << 2)
#define PWD_DACD_ON			(0x0 << 2)

#define PWD_DACL_MASK			(0x1 << 1)
#define PWD_DACL_SFT			1
#define PWD_DACL_DOWN			(0x1 << 1)
#define PWD_DACL_ON			(0x0 << 1)

#define PWD_DACR_MASK			(0x1 << 0)
#define PWD_DACR_SFT			0
#define PWD_DACR_DOWN			(0x1 << 0)
#define PWD_DACR_ON			(0x0 << 0)

/* RK817_CODEC_AADC_CFG0 */
#define ADC_L_PWD_MASK			(0x1 << 7)
#define ADC_L_PWD_SFT			7
#define ADC_L_PWD_DIS			(0x0 << 7)
#define ADC_L_PWD_EN			(0x1 << 7)

#define ADC_R_PWD_MASK			(0x1 << 6)
#define ADC_R_PWD_SFT			6
#define ADC_R_PWD_DIS			(0x0 << 6)
#define ADC_R_PWD_EN			(0x1 << 6)

/* RK817_CODEC_AMIC_CFG0 */
#define MIC_DIFF_MASK			(0x1 << 7)
#define MIC_DIFF_SFT			7
#define MIC_DIFF_DIS			(0x0 << 7)
#define MIC_DIFF_EN			(0x1 << 7)

#define PWD_PGA_L_MASK			(0x1 << 5)
#define PWD_PGA_L_SFT			5
#define PWD_PGA_L_DIS			(0x0 << 5)
#define PWD_PGA_L_EN			(0x1 << 5)

#define PWD_PGA_R_MASK			(0x1 << 4)
#define PWD_PGA_R_SFT			4
#define PWD_PGA_R_DIS			(0x0 << 4)
#define PWD_PGA_R_EN			(0x1 << 4)

enum {
	RK817_HIFI,
	RK817_VOICE,
};

enum {
	RK817_MONO = 1,
	RK817_STEREO,
};

enum {
	OFF,
	RCV,
	SPK_PATH,
	HP_PATH,
	HP_NO_MIC,
	BT,
	SPK_HP,
	RING_SPK,
	RING_HP,
	RING_HP_NO_MIC,
	RING_SPK_HP,
};

enum {
	MIC_OFF,
	MAIN_MIC,
	HANDS_FREE_MIC,
	BT_SCO_MIC,
};

struct rk817_reg_val_typ {
	unsigned int reg;
	unsigned int value;
};

struct rk817_init_bit_typ {
	unsigned int reg;
	unsigned int power_bit;
	unsigned int init_bit;
};

#endif /* __RK817_CODEC_H__ */
