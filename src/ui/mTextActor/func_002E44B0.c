#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_002459E8(s32);                             /* extern */

struct func_002E44B0_arg0 {
    char pad0[0x14];
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
};

void func_002E44B0(struct func_002E44B0_arg0 *arg0, s32 arg1) {
    s32 temp_v0;

    arg0->unk14 = arg1;
    temp_v0 = func_002459E8(arg1);
    arg0->unk1C = 0;
    arg0->unk18 = temp_v0;
    arg0->unk20 = 0;
}
