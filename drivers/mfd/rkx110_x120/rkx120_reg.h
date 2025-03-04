/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2022 Rockchip Electronics Co., Ltd.
 *
 * Author: Zhang Yubing <yubing.zhang@rock-chips.com>
 */

#ifndef __X120_REG_H
#define __X120_REG_H

#include <linux/bits.h>

#define HIWORD_MASK(h, l)	(GENMASK(h, l) | GENMASK(h, l) << 16)
#define UPDATE(x, h, l)		(((x) << (l)) & GENMASK((h), (l)))
#define HIWORD_UPDATE(v, m, l)	(((v) << (l)) | (m << 16))

/************** RKX120 DES RX ***************/
#define RKX120_DES_CRU_BASE		0x01000000
#define RKX120_DES_GRF_BASE		0x01010000
#define GRF_REG(x)			 ((x) + RKX120_DES_GRF_BASE)
#define DES_GRF_GPIO0A_IOMUX_L		GRF_REG(0x0)
#define DES_GRF_GPIO0A_IOMUX_H		GRF_REG(0x4)
#define DES_GRF_GPIO0B_IOMUX_L		GRF_REG(0x8)
#define DES_GRF_GPIO0B_IOMUX_H		GRF_REG(0xC)
#define DES_GRF_GPIO0C_IOMUX_L		GRF_REG(0x10)
#define DES_GRF_GPIO0C_IOMUX_H		GRF_REG(0x14)
#define DES_GRF_GPIO0A_PULL_EN		GRF_REG(0x20)
#define DES_GRF_GPIO0B_PULL_EN		GRF_REG(0x24)
#define DES_GRF_GPIO0C_PULL_EN		GRF_REG(0x28)
#define DES_GRF_GPIO1A_IOMUX		GRF_REG(0x80)
#define DES_GRF_GPIO1B_IOMUX		GRF_REG(0x84)
#define DES_GRF_GPIO1C_IOMUX		GRF_REG(0x88)
#define DES_GRF_GPIO1A_PULL_CFG		GRF_REG(0x90)
#define DES_GRF_GPIO1B_PULL_CFG		GRF_REG(0x94)
#define DES_GRF_GPIO1C_PULL_CFG		GRF_REG(0x98)
#define DES_GRF_SOC_CON2		GRF_REG(0x108)
#define DES_GRF_SOC_STATUS0		GRF_REG(0x160)

enum {
	/* GPIO0A_IOMUX_H */
	GPIO0A7_SHIFT	= 12,
	GPIO0A7_MASK	= GENMASK(14, 12),
	GPIO0A7_GPIO	= 0,
	GPIO0A7_SPI_MISO_M,
	GPIO0A7_SPI_MISO_S,
	GPIO0A7_UART1_TX_M,
	GPIO0A7_UART1_TX_S,
	GPIO0A7_GPO_2,
	GPIO0A7_GPI_2,
	GPIO0A7_PWM_0,

	GPIO0A6_SHIFT	= 8,
	GPIO0A6_MASK	= GENMASK(10, 8),
	GPIO0A6_GPIO	= 0,
	GPIO0A6_SPI_MOSI_M,
	GPIO0A6_SPI_MOSI_S,
	GPIO0A6_UART0_RX_M,
	GPIO0A6_UART0_RX_S,
	GPIO0A6_GPO_1,
	GPIO0A6_GPI_1,
	GPIO0A6_I2C_DEBUG_SDA,

	GPIO0A5_SHIFT	= 4,
	GPIO0A5_MASK	= GENMASK(6, 4),
	GPIO0A5_GPIO	= 0,
	GPIO0A5_SPI_CLK_M,
	GPIO0A5_SPI_CLK_S,
	GPIO0A5_UART0_TX_M,
	GPIO0A5_UART0_TX_S,
	GPIO0A5_GPO_0,
	GPIO0A5_GPI_0,
	GPIO0A5_I2C_DEBUG_SCL,

	GPIO0A4_SHIFT	= 0,
	GPIO0A4_MASK	= GENMASK(2, 0),
	GPIO0A4_GPIO	= 0,
	GPIO0A4_INT_RX,
	GPIO0A4_INT_TX,

	/* GPIO0B_IOMUX_L */
	GPIO0B3_SHIFT	= 12,
	GPIO0B3_MASK	= GENMASK(14, 12),
	GPIO0B3_GPIO	= 0,
	GPIO0B3_I2S_SDO0,
	GPIO0B3_GPI_4,
	GPIO0B3_GPO_4,
	GPIO0B3_TP2,

	GPIO0B2_SHIFT	= 8,
	GPIO0B2_MASK	= GENMASK(10, 8),
	GPIO0B2_GPIO	= 0,
	GPIO0B2_I2S_LRCK_M,
	GPIO0B2_I2S_LRCK_S,
	GPIO0B2_TP1,

	GPIO0B1_SHIFT	= 4,
	GPIO0B1_MASK	= GENMASK(6, 4),
	GPIO0B1_GPIO	= 0,
	GPIO0B1_I2S_SCLK_M,
	GPIO0B1_I2S_SCLK_S,
	GPIO0B1_TP0,

	GPIO0B0_SHIFT	= 0,
	GPIO0B0_MASK	= GENMASK(2, 0),
	GPIO0B0_GPIO	= 0,
	GPIO0B0_SPI_CSN_M,
	GPIO0B0_SPI_CSN_S,
	GPIO0B0_UART1_RX_M,
	GPIO0B0_UART1_RX_S,
	GPIO0B0_GPO_3,
	GPIO0B0_GPI_3,
	GPIO0B0_PWM_1,

	/* GPIO0B_IOMUX_H */
	GPIO0B7_SHIFT	= 12,
	GPIO0B7_MASK	= GENMASK(14, 12),
	GPIO0B7_GPIO	= 0,
	GPIO0B7_I2S_MCLK,
	GPIO0B7_TEST_CLK_OUT,
	GPIO0B7_TP6,

	GPIO0B6_SHIFT	= 8,
	GPIO0B6_MASK	= GENMASK(10, 8),
	GPIO0B6_GPIO	= 0,
	GPIO0B6_I2S_SDO3,
	GPIO0B6_I2S_SDI0,
	GPIO0B6_TP5,

	GPIO0B5_SHIFT	= 4,
	GPIO0B5_MASK	= GENMASK(6, 4),
	GPIO0B5_GPIO	= 0,
	GPIO0B5_I2S_SDO2,
	GPIO0B5_GPI_6,
	GPIO0B5_GPO_6,
	GPIO0B5_I2C1_SDA_M,
	GPIO0B5_I2C1_SDA_S,
	GPIO0B5_TP4,

	GPIO0B4_SHIFT	= 0,
	GPIO0B4_MASK	= GENMASK(2, 0),
	GPIO0B4_GPIO	= 0,
	GPIO0B5_I2S_SDO1,
	GPIO0B5_GPI_5,
	GPIO0B5_GPO_5,
	GPIO0B5_I2C1_SCL_M,
	GPIO0B5_I2C1_SCL_S,
	GPIO0B5_PWM2,
	GPIO0B5_TP3,

	/* GPIO0C_IOMUX_L */
	GPIO0C4_SHIFT	= 12,
	GPIO0C4_MASK	= GENMASK(14, 12),
	GPIO0C4_GPIO	= 0,
	GPIO0C4_LCDC_D0,
	GPIO0C4_CIF_D0,
	GPIO0C4_TP11,

	GPIO0C3_SHIFT	= 9,
	GPIO0C3_MASK	= GENMASK(11, 9),
	GPIO0C3_GPIO	= 0,
	GPIO0C3_LCDC_DEN,
	GPIO0C3_TP10,

	GPIO0C2_SHIFT	= 6,
	GPIO0C2_MASK	= GENMASK(8, 6),
	GPIO0C2_GPIO	= 0,
	GPIO0C2_LCDC_HSYNC,
	GPIO0C2_CIF_HSYNC,
	GPIO0C2_TP9,

	GPIO0C1_SHIFT	= 3,
	GPIO0C1_MASK	= GENMASK(5, 3),
	GPIO0C1_GPIO	= 0,
	GPIO0C1_LCDC_VSYNC,
	GPIO0C1_CIF_VSYNC,
	GPIO0C1_TP8,

	GPIO0C0_SHIFT	= 0,
	GPIO0C0_MASK	= GENMASK(2, 0),
	GPIO0C0_GPIO	= 0,
	GPIO0C0_LCDC_CLK,
	GPIO0C0_CIF_CLK,
	GPIO0C0_TP7,

	/* GPIO0C_IOMUX_H */
	GPIO0C7_SHIFT	= 6,
	GPIO0C7_MASK	= GENMASK(8, 6),
	GPIO0C7_GPIO	= 0,
	GPIO0C7_LCDC_D3,
	GPIO0C7_CIF_D3,
	GPIO0C7_TP14,

	GPIO0C6_SHIFT	= 3,
	GPIO0C6_MASK	= GENMASK(5, 3),
	GPIO0C6_GPIO	= 0,
	GPIO0C6_LCDC_D2,
	GPIO0C6_CIF_D2,
	GPIO0C6_TP13,

	GPIO0C5_SHIFT	= 0,
	GPIO0C5_MASK	= GENMASK(2, 0),
	GPIO0C5_GPIO	= 0,
	GPIO0C5_LCDC_D1,
	GPIO0C5_CIF_D1,
	GPIO0C5_TP12,

	/* GPIO1A_IOMUX */
	GPIO1A7_SHIFT	= 14,
	GPIO1A7_MASK	= GENMASK(15, 14),
	GPIO1A7_GPIO	= 0,
	GPIO1A7_LCDC_D11,
	GPIO1A7_CIF_D11,

	GPIO1A6_SHIFT	= 12,
	GPIO1A6_MASK	= GENMASK(13, 12),
	GPIO1A6_GPIO	= 0,
	GPIO1A6_LCDC_D10,
	GPIO1A6_CIF_D10,

	GPIO1A5_SHIFT	= 10,
	GPIO1A5_MASK	= GENMASK(11, 10),
	GPIO1A5_GPIO	= 0,
	GPIO1A5_LCDC_D9,
	GPIO1A5_CIF_D9,

	GPIO1A4_SHIFT	= 8,
	GPIO1A4_MASK	= GENMASK(9, 8),
	GPIO1A4_GPIO	= 0,
	GPIO1A4_LCDC_D8,
	GPIO1A4_CIF_D8,

	GPIO1A3_SHIFT	= 6,
	GPIO1A3_MASK	= GENMASK(7, 6),
	GPIO1A3_GPIO	= 0,
	GPIO1A3_LCDC_D7,
	GPIO1A3_CIF_D7,

	GPIO1A2_SHIFT	= 4,
	GPIO1A2_MASK	= GENMASK(5, 4),
	GPIO1A2_GPIO	= 0,
	GPIO1A2_LCDC_D6,
	GPIO1A2_CIF_D6,

	GPIO1A1_SHIFT	= 2,
	GPIO1A1_MASK	= GENMASK(3, 2),
	GPIO1A1_GPIO	= 0,
	GPIO1A1_LCDC_D5,
	GPIO1A1_CIF_D5,

	GPIO1A0_SHIFT	= 0,
	GPIO1A0_MASK	= GENMASK(1, 0),
	GPIO1A0_GPIO	= 0,
	GPIO1A0_LCDC_D4,
	GPIO1A0_CIF_D4,

	/* GPIO1B_IOMUX */
	GPIO1B7_SHIFT	= 14,
	GPIO1B7_MASK	= GENMASK(15, 14),
	GPIO1B7_GPIO	= 0,
	GPIO1B7_LCDC_D19,

	GPIO1B6_SHIFT	= 12,
	GPIO1B6_MASK	= GENMASK(13, 12),
	GPIO1B6_GPIO	= 0,
	GPIO1B6_LCDC_D18,

	GPIO1B5_SHIFT	= 10,
	GPIO1B5_MASK	= GENMASK(11, 10),
	GPIO1B5_GPIO	= 0,
	GPIO1B5_LCDC_D17,

	GPIO1B4_SHIFT	= 8,
	GPIO1B4_MASK	= GENMASK(9, 8),
	GPIO1B4_GPIO	= 0,
	GPIO1B4_LCDC_D16,

	GPIO1B3_SHIFT	= 6,
	GPIO1B3_MASK	= GENMASK(7, 6),
	GPIO1B3_GPIO	= 0,
	GPIO1B3_LCDC_D15,
	GPIO1B3_CIF_D15,

	GPIO1B2_SHIFT	= 4,
	GPIO1B2_MASK	= GENMASK(5, 4),
	GPIO1B2_GPIO	= 0,
	GPIO1B2_LCDC_D14,
	GPIO1B2_CIF_D14,

	GPIO1B1_SHIFT	= 2,
	GPIO1B1_MASK	= GENMASK(3, 2),
	GPIO1B1_GPIO	= 0,
	GPIO1B1_LCDC_D13,
	GPIO1B1_CIF_D13,

	GPIO1B0_SHIFT	= 0,
	GPIO1B0_MASK	= GENMASK(1, 0),
	GPIO1B0_GPIO	= 0,
	GPIO1B0_LCDC_D12,
	GPIO1B0_CIF_D12,

	/* GPIO1C_IOMUX */
	GPIO1C3_SHIFT	= 6,
	GPIO1C3_MASK	= GENMASK(7, 6),
	GPIO1C3_GPIO	= 0,
	GPIO1C3_LCDC_D23,

	GPIO1C2_SHIFT	= 4,
	GPIO1C2_MASK	= GENMASK(5, 4),
	GPIO1C2_GPIO	= 0,
	GPIO1C2_LCDC_D22,

	GPIO1C1_SHIFT	= 2,
	GPIO1C1_MASK	= GENMASK(3, 2),
	GPIO1C1_GPIO	= 0,
	GPIO1C1_LCDC_D21,

	GPIO1C0_SHIFT	= 0,
	GPIO1C0_MASK	= GENMASK(1, 0),
	GPIO1C0_GPIO	= 0,
	GPIO1C0_LCDC_D20,
};

#define DES_GRF_SOC_CON0		GRF_REG(0x100)
#define DES_GRF_SOC_CON1		GRF_REG(0x104)
#define DES_GRF_SOC_CON2		GRF_REG(0x108)
#define DES_GRF_SOC_CON3		GRF_REG(0x10C)
#define DES_GRF_SOC_CON4		GRF_REG(0x110)
#define DES_GRF_SOC_CON5		GRF_REG(0x114)
#define DES_GRF_SOC_CON6		GRF_REG(0x118)
#define DES_GRF_SOC_CON7		GRF_REG(0x11C)
#define DES_GRF_IRQ_EN			GRF_REG(0x140)
#define DES_GRF_IRQ_STATUS		GRF_REG(0x150)

enum {
	/* SOC_CON0 */
	LVDS_ALIGN_EN_SHIFT	= 14,
	LVDS_ALIGN_EN_MASK	= GENMASK(15, 14),
	LVDS_ALIGN_DISABLE	= 0,
	LVDS_ALIGN_EN,

	/* SOC_CON2 */
	LVDS1_LINK_SEL_SHIFT	= 14,
	LVDS1_LINK_SEL_MASK	= GENMASK(14, 14),
	/* enable lvds source from pattern generation */
	LINK_SEL_PG_DISABLE = 0,
	LINK_SEL_PG_EN	= 1,

	LVDS0_LINK_SEL_SHIFT	= 13,
	LVDS0_LINK_SEL_MASK	= GENMASK(13, 13),

	DSI0_LINK_SEL_SHIFT	= 12,
	DSI0_LINK_SEL_MASK	= GENMASK(12, 12),

	LVDS1_MSB_SHIFT		= 5,
	LVDS1_MSB_MASK		= GENMASK(5, 5),
	LVDS_LSB		= 0,
	LVDS_MSB,

	LVDS1_FORMAT_SHIFT	= 4,
	LVDS1_FORMAT_MASK	= GENMASK(4, 3),
	LVDS_FORMAT_VESA_24BIT	= 0,
	LVDS_FORMAT_JEIDA_24BIT,
	LVDS_FORMAT_JEIDA_18BIT,
	LVDS_FORMAT_VESA_18BIT,

	LVDS0_MSB_SHIFT		= 2,
	LVDS0_MSB_MASK		= GENMASK(2, 2),

	LVDS0_FORMAT_SHIFT	= 0,
	LVDS0_FORMAT_MASK	= GENMASK(1, 0),

	/* SOC_CON3 */

	/* SOC_CON4 */
	PMA1_EN_SHIFT		= 11,
	PMA1_EN_MASK		= HIWORD_MASK(11, 11),
	PMA1_EN			= HIWORD_UPDATE(1, BIT(11), 11),
	PMA1_DISABLE		= HIWORD_UPDATE(0, BIT(11), 11),

	PMA0_EN_SHIFT		= 10,
	PMA0_EN_MASK		= HIWORD_MASK(10, 10),
	PMA0_EN			= HIWORD_UPDATE(1, BIT(10), 10),
	PMA0_DISABLE		= HIWORD_UPDATE(0, BIT(10), 10),

	RGB_DCLK_BYPASS_SHIFT	= 9,
	RGB_DCLK_BYPASS_MASK	= GENMASK(9, 9),

	RGB_DCLK_DCLK_DLY_SHIFT	= 1,
	RGB_DCLK_DCLK_DLY_MASK	= GENMASK(8, 1),

	RGB_DCLK_INV_SHIFT	= 0,
	RGB_DCLK_INV_MASK	= GENMASK(0, 0),

	/* SOC_CON5 */
	MIPI_PHY0_MODE_SEL_SHIFT	= 4,
	MIPI_PHY0_MODE_SEL_MASK		= GENMASK(7, 4),
	MIPI_PHY0_MODE_DSI		= 0,
	MIPI_PHY0_MODE_CSI,

	/* SOC_CON6 */
	LVDS0_CLK_SOURCE_SHIFT	= 0,
	LVDS0_CLK_SOURCE_MASK	= GENMASK(3, 0),

	/* SOC_CON7 */
	LVDS1_CLK_SOURCE_SHIFT	= 4,
	LVDS1_CLK_SOURCE_MASK	= GENMASK(15, 4),

	DSI0_DPI_UPDATE_CFG_SHIFT	= 2,
	DSI0_DPI_UPDATE_CFG_MASK	= GENMASK(2, 2),

	DSI0_DPI_REDUCED_COLOR_SHIFT	= 1,
	DSI0_DPI_REDUCED_COLOR_MASK	= GENMASK(1, 1),

	DSI0_DPI_DISABLE_SHIFT	= 0,
	DSI0_DPI_DISABLE_MASK	= GENMASK(0, 0),

	/* SOC_CON8 */

	LDO_PLC_SEL_SHIFT	= 8,
	LDO_PLC_SEL_MASK	= GENMASK(8, 8),
	LDO_PLC_170		= 0,
	LDO_PLC_270,

	LDO_VOL_SEL_SHIFT	= 4,
	LDO_VOL_SEL_MASK	= GENMASK(7, 4),
	LDO_VOL_110		= 0,
	LDO_PLC_115,

	LDO_BG_TRIM_SHIFT	= 4,
	LDO_BG_TRIM_MASK	= GENMASK(7, 4),
	LDO_BG_TRIM_OUT		= 0,
	LDO_BG_TRIM_OUT_55_N	= 0,
	LDO_BG_TRIM_OUT_110_N,

	/* SOC_CON9 */

	/* DES_GRF_IRQ_EN */
	DES_IRQ_OTHER_LANE_EN		= HIWORD_UPDATE(1, BIT(15), 15),
	DES_IRQ_OTHER_LANE_DIS		= HIWORD_UPDATE(0, BIT(15), 15),

	DES_IRQ_EXT_EN			= HIWORD_UPDATE(1, BIT(14), 14),
	DES_IRQ_EXT_DIS			= HIWORD_UPDATE(0, BIT(14), 14),

	DES_IRQ_LINK_EN			= HIWORD_UPDATE(1, BIT(13), 13),
	DES_IRQ_LINK_DIS		= HIWORD_UPDATE(0, BIT(13), 13),

	DES_IRQ_DVP_TX_EN		= HIWORD_UPDATE(1, BIT(12), 12),
	DES_IRQ_DVP_TX_DIS		= HIWORD_UPDATE(0, BIT(12), 12),

	DES_IRQ_PWM_EN			= HIWORD_UPDATE(1, BIT(11), 11),
	DES_IRQ_PWM_DIS			= HIWORD_UPDATE(0, BIT(11), 11),

	DES_IRQ_REMOTE_EN		= HIWORD_UPDATE(1, BIT(10), 10),
	DES_IRQ_REMOTE_DIS		= HIWORD_UPDATE(0, BIT(10), 10),

	DES_IRQ_PMA_ADAPT1_EN		= HIWORD_UPDATE(1, BIT(9), 9),
	DES_IRQ_PMA_ADAPT1_DIS		= HIWORD_UPDATE(0, BIT(9), 9),

	DES_IRQ_PMA_ADAPT0_EN		= HIWORD_UPDATE(1, BIT(8), 8),
	DES_IRQ_PMA_ADAPT0_DIS		= HIWORD_UPDATE(0, BIT(8), 8),

	DES_IRQ_MIPI_DSI_HOST_EN	= HIWORD_UPDATE(1, BIT(7), 7),
	DES_IRQ_MIPI_DSI_HOST_DIS	= HIWORD_UPDATE(0, BIT(7), 7),

	DES_IRQ_CSITX1_EN		= HIWORD_UPDATE(1, BIT(6), 6),
	DES_IRQ_CSITX1_DIS		= HIWORD_UPDATE(0, BIT(6), 6),

	DES_IRQ_CSITX0_EN		= HIWORD_UPDATE(1, BIT(5), 5),
	DES_IRQ_CSITX0_DIS		= HIWORD_UPDATE(0, BIT(5), 5),

	DES_IRQ_GPIO1_EN		= HIWORD_UPDATE(1, BIT(4), 4),
	DES_IRQ_GPIO1_DIS		= HIWORD_UPDATE(0, BIT(4), 4),

	DES_IRQ_GPIO0_EN		= HIWORD_UPDATE(1, BIT(3), 3),
	DES_IRQ_GPIO0_DIS		= HIWORD_UPDATE(0, BIT(3), 3),

	DES_IRQ_EFUSE_EN		= HIWORD_UPDATE(1, BIT(2), 2),
	DES_IRQ_EFUSE_DIS		= HIWORD_UPDATE(0, BIT(2), 2),

	DES_IRQ_PCS1_EN			= HIWORD_UPDATE(1, BIT(1), 1),
	DES_IRQ_PCS1_DIS		= HIWORD_UPDATE(0, BIT(1), 1),

	DES_IRQ_PCS0_EN			= HIWORD_UPDATE(1, BIT(0), 0),
	DES_IRQ_PCS0_DIS		= HIWORD_UPDATE(0, BIT(0), 0),

	/* DES_GRF_IRQ_STATUS */
	DES_IRQ_PCS0			= BIT(0),
	DES_IRQ_PCS1			= BIT(1),
	DES_IRQ_EFUSE			= BIT(2),
	DES_IRQ_GPIO0			= BIT(3),
	DES_IRQ_GPIO1			= BIT(4),
	DES_IRQ_CSITX0			= BIT(5),
	DES_IRQ_CSITX1			= BIT(6),
	DES_IRQ_MIPI_DSI_HOST		= BIT(7),
	DES_IRQ_PMA_ADAPT0		= BIT(8),
	DES_IRQ_PMA_ADAPT1		= BIT(9),
	DES_IRQ_REMOTE			= BIT(10),
	DES_IRQ_PWM			= BIT(11),
	DES_IRQ_DVP_TX			= BIT(12),
	DES_IRQ_LINK			= BIT(13),
	DES_IRQ_EXT			= BIT(14),
	DES_IRQ_OTHER_LANE		= BIT(15),

	/* DES_GRF_SOC_STATUS0 */
	DES_PCS1_READY		= BIT(1),
	DES_PCS0_READY		= BIT(0),
};

#define RKX120_DVP_TX_BASE		0x01020000
#define RKX120_DSI_TX_BASE		0x01030000
#define RKX120_CSI_TX0_BASE		0x01040000
#define RKX120_CSI_TX1_BASE		0x01050000
#define RKX120_GPIO0_TX_BASE		0x01060000
#define RKX120_GPIO1_TX_BASE		0x01068000

#define RKX120_DES_RKLINK_BASE		0x01070000
#define RKX120_DES_PCS0_BASE		0x01074000
#define RKX120_DES_PCS1_BASE		0x01075000
#define RKX120_DES_PCS_OFFSET		0x00001000

#define RKX120_PWM_BASE			0x01080000
#define PWM_REG(x)			((x) + RKX120_PWM_BASE)
#define PWM_CNT(ch)			(PWM_REG(0x0000) + 0x10 * ch)
#define PWM_PERIOD_HPR(ch)		(PWM_REG(0x0004) + 0x10 * ch)
#define PWM_DUTY_LPR(ch)		(PWM_REG(0x0008) + 0x10 * ch)
#define PWM_CTRL(ch)			(PWM_REG(0x000C) + 0x10 * ch)

#define RKX120_EFUSE_BASE		0x01090000
#define RKX120_MIPI_LVDS_TX_PHY0_BASE	0x010A0000
#define RKX120_MIPI_LVDS_TX_PHY1_BASE	0x010B0000
#define RKX120_GRF_MIPI0_BASE		0x010C0000
#define RKX120_GRF_MIPI1_BASE		0x010D0000
#define RKX120_DES_PMA0_BASE		0x010E0000
#define RKX120_DES_PMA1_BASE		0x010F0000
#define RKX120_DES_PMA_OFFSET		0x00010000

#define RKX120_PATTERN_GEN_DSI_BASE	0x01100000
#define RKX120_PATTERN_GEN_LVDS0_BASE	0x01110000
#define RKX120_PATTERN_GEN_LVDS1_BASE	0x01120000

#endif
