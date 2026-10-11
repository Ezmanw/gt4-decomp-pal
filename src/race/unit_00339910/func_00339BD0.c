#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_0041B5E8(s32);                             /* extern */
s32 func_0041B6D8(s32, s32);                    /* extern */

struct func_00339BD0_arg0 {
    char pad0[0x8];
    s32 unk8;
};

void func_00339BD0(struct func_00339BD0_arg0 *arg0, s32 arg1) {
    s32 temp_s2;

    temp_s2 = func_0041B5E8(arg1);
    func_0041B6D8(arg1, arg0->unk8);
    arg0->unk8 = (s32) (arg0->unk8 + temp_s2);
}
