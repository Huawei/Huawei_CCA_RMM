#
# SPDX-License-Identifier: BSD-3-Clause
# SPDX-FileCopyrightText: Copyright TF-RMM Contributors.
#

add_library(rmm-lib-arch)

target_link_libraries(rmm-lib-arch
    PRIVATE rmm-lib-common
            rmm-lib-smc)

target_include_directories(rmm-lib-arch
    PUBLIC "include"
	   "include/${RMM_ARCH}")

target_sources(rmm-lib-arch
        PRIVATE "src/arch_features.c"
                "src/fpu_helpers.c"
                "src/pmu.c")

if(NOT RMM_ARCH STREQUAL fake_host)
    target_sources(rmm-lib-arch
        PRIVATE "src/aarch64/cache_helpers.S"
                "src/aarch64/fpu_helpers.S")
else()
    target_sources(rmm-lib-arch
        PRIVATE "src/fake_host/cache_wrappers.c"
                "src/fake_host/fpu_helpers_host.c")
endif()
