#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 DynamicsConductor__CurrentLapTime_Normal(s32, void *);                 /* extern */
s32 func_003579A0(s32, void *);                 /* extern */
s32 func_0035E560(void *);                      /* extern */
s32 func_003F6458(s32);                             /* extern */

struct DynamicsConductorLicense__virtual_33_arg1 {
    char pad0[0x5B6];
    u8 unk5B6;
};

void DynamicsConductorLicense__CurrentLapTime(s32 arg0, struct DynamicsConductorLicense__virtual_33_arg1 *arg1) {
    if (arg1->unk5B6 != 0) {
        func_0035E560(arg1);
        return;
    }
    if (func_003F6458(arg0 + 0xF818) == 0) {
        DynamicsConductor__CurrentLapTime_Normal(arg0, arg1);
        return;
    }
    func_003579A0(arg0, arg1);
}
