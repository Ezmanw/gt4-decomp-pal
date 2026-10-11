#include "types.h"
#include "gt4/DynamicsConductorLicense.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void *func_0034C2F0();                   /* extern */
s32 func_003F8E20(void *, void *, s32);         /* extern */

s32 DynamicsConductorLicense__ProcessGoalLine(struct DynamicsConductorLicense *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    if (arg0->unkF81A == 2) {
        func_003F8E20(arg0, func_0034C2F0(), arg5);
        M2C_FIELD(func_0034C2F0(arg0, arg1), s32 *, 0x718) = arg4;
        return 1;
    }
    return 0;
}
