#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_003D9E30(void *);                      /* extern */
s32 func_003F1EE0(s32, s32, s32, s32);      /* extern */

struct func_003DA0E8_arg0 {
    char pad0[0x10];
    s32 unk10;
    char pad14[0x3C];
    s32 unk50;
};

s32 func_003DA0E8(struct func_003DA0E8_arg0 *arg0) {
    s32 temp_s1;

    temp_s1 = func_003F1EE0(arg0->unk10, 5, 0, (arg0->unk50 + 1) & 1);
    func_003D9E30(arg0);
    return temp_s1 > 0;
}
