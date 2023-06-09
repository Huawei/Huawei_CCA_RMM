/*
 * SPDX-License-Identifier: BSD-3-Clause
 * SPDX-FileCopyrightText: Copyright TF-RMM Contributors.
 */

#include <smc-rmi.h>
#include <stddef.h>

COMPILER_ASSERT(sizeof(struct rmi_realm_params) == 0x1000);
COMPILER_ASSERT(offsetof(struct rmi_realm_params, features_0) == 0);
COMPILER_ASSERT(offsetof(struct rmi_realm_params, hash_algo) == 0x100);
COMPILER_ASSERT(offsetof(struct rmi_realm_params, rpv) == 0x400);
COMPILER_ASSERT(offsetof(struct rmi_realm_params, vmid) == 0x800);
COMPILER_ASSERT(offsetof(struct rmi_realm_params, rtt_base) == 0x808);
COMPILER_ASSERT(offsetof(struct rmi_realm_params, rtt_level_start) == 0x810);
COMPILER_ASSERT(offsetof(struct rmi_realm_params, rtt_num_start) == 0x818);


COMPILER_ASSERT(sizeof(struct rmi_rec_params) == 0x1000);
COMPILER_ASSERT(offsetof(struct rmi_rec_params, flags) == 0);
COMPILER_ASSERT(offsetof(struct rmi_rec_params, mpidr) == 0x100);
COMPILER_ASSERT(offsetof(struct rmi_rec_params, pc) == 0x200);
COMPILER_ASSERT(offsetof(struct rmi_rec_params, gprs) == 0x300);
COMPILER_ASSERT(offsetof(struct rmi_rec_params, num_aux) == 0x800);
COMPILER_ASSERT(offsetof(struct rmi_rec_params, aux) == 0x808);

COMPILER_ASSERT(sizeof(struct rmi_rec_entry) == 0x800);
COMPILER_ASSERT(offsetof(struct rmi_rec_entry, flags) == 0);
COMPILER_ASSERT(offsetof(struct rmi_rec_entry, gprs) == 0x200);
COMPILER_ASSERT(offsetof(struct rmi_rec_entry, gicv3_hcr) == 0x300);
COMPILER_ASSERT(offsetof(struct rmi_rec_entry, gicv3_lrs) == 0x308);


COMPILER_ASSERT(offsetof(struct rmi_rec_exit, exit_reason) == 0);
COMPILER_ASSERT(offsetof(struct rmi_rec_exit, esr) == 0x100);
COMPILER_ASSERT(offsetof(struct rmi_rec_exit, far) == 0x108);
COMPILER_ASSERT(offsetof(struct rmi_rec_exit, hpfar) == 0x110);
COMPILER_ASSERT(offsetof(struct rmi_rec_exit, gprs) == 0x200);
COMPILER_ASSERT(offsetof(struct rmi_rec_exit, gicv3_hcr) == 0x300);
COMPILER_ASSERT(offsetof(struct rmi_rec_exit, gicv3_lrs) == 0x308);
COMPILER_ASSERT(offsetof(struct rmi_rec_exit, gicv3_misr) == 0x388);
COMPILER_ASSERT(offsetof(struct rmi_rec_exit, gicv3_vmcr) == 0x390);
COMPILER_ASSERT(offsetof(struct rmi_rec_exit, cntp_ctl) == 0x400);
COMPILER_ASSERT(offsetof(struct rmi_rec_exit, cntp_cval) == 0x408);
COMPILER_ASSERT(offsetof(struct rmi_rec_exit, cntv_ctl) == 0x410);
COMPILER_ASSERT(offsetof(struct rmi_rec_exit, cntv_cval) == 0x418);
COMPILER_ASSERT(offsetof(struct rmi_rec_exit, ripas_base) == 0x500);
COMPILER_ASSERT(offsetof(struct rmi_rec_exit, ripas_size) == 0x508);
COMPILER_ASSERT(offsetof(struct rmi_rec_exit, ripas_value) == 0x510);
COMPILER_ASSERT(offsetof(struct rmi_rec_exit, imm) == 0x600);
COMPILER_ASSERT(offsetof(struct rmi_rec_exit, pmu_ovf) == 0x700);
COMPILER_ASSERT(offsetof(struct rmi_rec_exit, pmu_intr_en) == 0x708);
COMPILER_ASSERT(offsetof(struct rmi_rec_exit, pmu_cntr_en) == 0x710);

COMPILER_ASSERT(sizeof(struct rmi_rec_run) <= GRANULE_SIZE);
COMPILER_ASSERT(offsetof(struct rmi_rec_run, entry) == 0);
COMPILER_ASSERT(offsetof(struct rmi_rec_run, exit) == 0x800);
