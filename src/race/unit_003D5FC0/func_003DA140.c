#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_003D9E30(void *);                      /* extern */
s32 func_003F1EE0(s32, s32, s32, s32);      /* extern */

struct func_003DA140_arg0 {
    char pad0[0x10];
    s32 unk10;
    char pad14[0x40];
    s32 unk54;
};

s32 func_003DA140(struct func_003DA140_arg0 *arg0) {
    s32 temp_s1;

    temp_s1 = func_003F1EE0(arg0->unk10, 6, 0, (arg0->unk54 + 1) & 1);
    func_003D9E30(arg0);
    return temp_s1 > 0;
}
