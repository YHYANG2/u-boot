/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright (c) 2021 Nuvoton Technology Corp.
 */

#include <common.h>
#include <asm/io.h>
#include <asm/arch/rst.h>
#include <asm/arch/gcr.h>
#include <asm/arch/cpu.h>

void reset_cpu(ulong ignored)
{
	writel(0x83, 0xf000801c);    /* Watcdog reset - WTCR register set  WTE-BIT7 WTRE-BIT1 WTR-BIT0 */
    while (1);
}

void reset_misc(void)
{
	struct npcm_gcr *gcr = (struct npcm_gcr *)npcm_get_base_gcr();
	printf("clear WDC\n");
	writel(readl(&gcr->intcr2) & ~(1 << INTCR2_WDC), &gcr->intcr2);
}

enum reset_type npcm8xx_reset_reason(void)
{
	struct npcm_gcr *gcr = (struct npcm_gcr *)npcm_get_base_gcr();
	enum reset_type type = UNKNOWN_TYPE;
    u32 value = readl(&gcr->ressr);

	if (value == 0)
		value = ~readl(&gcr->intcr2);

	value &= RESSR_MASK;

	if (value & CORST)
		type = CORST;
	if (value & WD0RST)
		type = WD0RST;
	if (value & WD1RST)
		type = WD1RST;
	if (value & WD2RST)
		type = WD2RST;
	if (value & PORST)
		type = PORST;

	return type;
}