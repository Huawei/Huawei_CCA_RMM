/*
 * SPDX-License-Identifier: BSD-3-Clause
 * SPDX-FileCopyrightText: Copyright TF-RMM Contributors.
 */

#ifndef QEMU_PRIVATE_H
#define QEMU_PRIVATE_H

/* Default number of CPUs per cluster */
#define	QEMU_MAX_CPUS_PER_CLUSTER	4

/* Default number of threads per CPU */
#define	QEMU_MAX_PE_PER_CPU		1

#define QEMU_UART_BAUDRATE		115200
#define QEMU_UART_CLK_IN_HZ		1

/* Base address and size for the DRAM0 (allocating 2GB of space) */
#define QEMU_DRAM0_BASE			UL(0x40000000)
#define QEMU_DRAM0_SIZE			UL(0x80000000)

/* Total number of granules on the current platform */
#define QEMU_NR_GRANULES			(QEMU_DRAM0_SIZE/GRANULE_SIZE)

#endif /* QEMU_PRIVATE_H */
