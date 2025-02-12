/* SPDX-License-Identifier: GPL-2.0 */
// Copyright (c) 2020 Nuvoton Technology corporation.

#ifndef _DT_BINDINGS_NPCM8XX_RESET_H
#define _DT_BINDINGS_NPCM8XX_RESET_H

#define NPCM8XX_RESET_IPSRST1		0x20
#define NPCM8XX_RESET_IPSRST2		0x24
#define NPCM8XX_RESET_IPSRST3		0x34
#define NPCM8XX_RESET_IPSRST4		0x74

/* Reset lines on IP1 reset module (NPCM8XX_RESET_IPSRST1) */
#define NPCM8XX_RESET_GDMA0		3
#define NPCM8XX_RESET_UDC1		5
#define NPCM8XX_RESET_GMAC3		6
#define NPCM8XX_RESET_UART_2_3		7
#define NPCM8XX_RESET_UDC2		8
#define NPCM8XX_RESET_PECI		9
#define NPCM8XX_RESET_AES		10
#define NPCM8XX_RESET_UART_0_1		11
#define NPCM8XX_RESET_MC		12
#define NPCM8XX_RESET_SMB2		13
#define NPCM8XX_RESET_SMB3		14
#define NPCM8XX_RESET_SMB4		15
#define NPCM8XX_RESET_SMB5		16
#define NPCM8XX_RESET_PWM_M0		18
#define NPCM8XX_RESET_TIMER_0_4		19
#define NPCM8XX_RESET_TIMER_5_9		20
#define NPCM8XX_RESET_GMAC4		21
#define NPCM8XX_RESET_UDC4		22
#define NPCM8XX_RESET_UDC5		23
#define NPCM8XX_RESET_UDC6		24
#define NPCM8XX_RESET_UDC3		25
#define NPCM8XX_RESET_ADC		27
#define NPCM8XX_RESET_SMB6		28
#define NPCM8XX_RESET_SMB7		29
#define NPCM8XX_RESET_SMB0		30
#define NPCM8XX_RESET_SMB1		31

/* Reset lines on IP2 reset module (NPCM8XX_RESET_IPSRST2) */
#define NPCM8XX_RESET_MFT0		0
#define NPCM8XX_RESET_MFT1		1
#define NPCM8XX_RESET_MFT2		2
#define NPCM8XX_RESET_MFT3		3
#define NPCM8XX_RESET_MFT4		4
#define NPCM8XX_RESET_MFT5		5
#define NPCM8XX_RESET_MFT6		6
#define NPCM8XX_RESET_MFT7		7
#define NPCM8XX_RESET_MMC		8
#define NPCM8XX_RESET_GFX_SYS		10
#define NPCM8XX_RESET_AHB_PCIBRG	11
#define NPCM8XX_RESET_VDMA		12
#define NPCM8XX_RESET_ECE		13
#define NPCM8XX_RESET_VCD		14
#define NPCM8XX_RESET_VIRUART1		16
#define NPCM8XX_RESET_VIRUART2		17
#define NPCM8XX_RESET_SIOX1		18
#define NPCM8XX_RESET_SIOX2		19
#define NPCM8XX_RESET_BT		20
#define NPCM8XX_RESET_3DES		21
#define NPCM8XX_RESET_PSPI2		23
#define NPCM8XX_RESET_GMAC2		25
#define NPCM8XX_RESET_USBH1		26
#define NPCM8XX_RESET_GMAC1		28
#define NPCM8XX_RESET_CP1		31

/* Reset lines on IP3 reset module (NPCM8XX_RESET_IPSRST3) */
#define NPCM8XX_RESET_PWM_M1		0
#define NPCM8XX_RESET_SMB12		1
#define NPCM8XX_RESET_SPIX		2
#define NPCM8XX_RESET_SMB13		3
#define NPCM8XX_RESET_UDC0		4
#define NPCM8XX_RESET_UDC7		5
#define NPCM8XX_RESET_UDC8		6
#define NPCM8XX_RESET_UDC9		7
#define NPCM8XX_RESET_USBHUB		8
#define NPCM8XX_RESET_PCI_MAILBOX	9
#define NPCM8XX_RESET_GDMA1		10
#define NPCM8XX_RESET_GDMA2		11
#define NPCM8XX_RESET_SMB14		12
#define NPCM8XX_RESET_SHA		13
#define NPCM8XX_RESET_SEC_ECC		14
#define NPCM8XX_RESET_PCIE_RC		15
#define NPCM8XX_RESET_TIMER_10_14	16
#define NPCM8XX_RESET_RNG		17
#define NPCM8XX_RESET_SMB15		18
#define NPCM8XX_RESET_SMB8		19
#define NPCM8XX_RESET_SMB9		20
#define NPCM8XX_RESET_SMB10		21
#define NPCM8XX_RESET_SMB11		22
#define NPCM8XX_RESET_ESPI		23
#define NPCM8XX_RESET_USBPHY1		24
#define NPCM8XX_RESET_USBPHY2		25

/* Reset lines on IP4 reset module (NPCM8XX_RESET_IPSRST4) */
#define NPCM8XX_RESET_SMB16		0
#define NPCM8XX_RESET_SMB17		1
#define NPCM8XX_RESET_SMB18		2
#define NPCM8XX_RESET_SMB19		3
#define NPCM8XX_RESET_SMB20		4
#define NPCM8XX_RESET_SMB21		5
#define NPCM8XX_RESET_SMB22		6
#define NPCM8XX_RESET_SMB23		7
#define NPCM8XX_RESET_I3C0		8
#define NPCM8XX_RESET_I3C1		9
#define NPCM8XX_RESET_I3C2		10
#define NPCM8XX_RESET_I3C3		11
#define NPCM8XX_RESET_I3C4		12
#define NPCM8XX_RESET_I3C5		13
#define NPCM8XX_RESET_UART4		16
#define NPCM8XX_RESET_UART5		17
#define NPCM8XX_RESET_UART6		18
#define NPCM8XX_RESET_PCIMBX2		19
#define NPCM8XX_RESET_SMB24		22
#define NPCM8XX_RESET_SMB25		23
#define NPCM8XX_RESET_SMB26		24
#define NPCM8XX_RESET_USBPHY3		25
#define NPCM8XX_RESET_PCIRCPHY		27
#define NPCM8XX_RESET_PWM_M2		28
#define NPCM8XX_RESET_JTM1		29
#define NPCM8XX_RESET_JTM2		30
#define NPCM8XX_RESET_USBH2		31

/* Reset Control Registers offset */
#define WD0RCR		0x38
#define WD1RCR		0x3c
#define WD2RCR		0x40
#define SWRSTC1		0x44
#define SWRSTC2		0x48
#define SWRSTC3		0x4c
#define TIPRSTC		0x50
#define CORSTC		0x5c
#define WD0RCRB		0x80
#define WD1RCRB		0x84
#define WD2RCRB		0x88
#define SWRSTC1B	0x8c
#define SWRSTC2B	0x90
#define SWRSTC3B	0x94
#define TIPRSTCB	0x98
#define CORSTCB		0x9c

#endif
