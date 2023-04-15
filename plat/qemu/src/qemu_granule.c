/*
 * SPDX-License-Identifier: BSD-3-Clause
 * SPDX-FileCopyrightText: Copyright TF-RMM Contributors.
 */

#include <assert.h>
#include <qemu_private.h>
#include <utils_def.h>

COMPILER_ASSERT(RMM_MAX_GRANULES >= QEMU_NR_GRANULES);

unsigned long plat_granule_addr_to_idx(unsigned long addr)
{
	if (!(GRANULE_ALIGNED(addr) &&
				(addr < (QEMU_DRAM0_BASE + QEMU_DRAM0_SIZE))) &&
				(addr >= QEMU_DRAM0_BASE)) {
		return UINT64_MAX;
	}

	return (addr - QEMU_DRAM0_BASE) / GRANULE_SIZE;
}

unsigned long plat_granule_idx_to_addr(unsigned long idx)
{
	assert(idx < QEMU_NR_GRANULES);
	return QEMU_DRAM0_BASE + (idx * GRANULE_SIZE);
}
