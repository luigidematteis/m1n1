/* SPDX-License-Identifier: MIT */

#include "cpu_regs.h"
#include "utils.h"

static void init_common_blizzard(void)
{
    reg_set(SYS_IMP_APL_EHID0, EHID0_BLI_UNK32);
}

void init_m2_blizzard(void)
{
    init_common_blizzard();

    reg_mask(SYS_IMP_APL_EHID9, EHID9_BLZ_UNK6_MASK, EHID9_BLZ_UNK6(0x3c));
    reg_set(SYS_IMP_APL_EHID9, EHID9_DEV_THROTTLE_2_ENABLE);
    reg_set(SYS_IMP_APL_EHID18, EHID18_BLZ_UNK34);
}
