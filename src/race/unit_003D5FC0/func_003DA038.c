#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_003D9E30(void *);                      /* extern */
s32 func_003F1EE0(s32, s32, s32, u32);      /* extern */

struct func_003DA038_arg0 {
    char pad0[0x10];
    s32 unk10;
};

s32 func_003DA038(struct func_003DA038_arg0 *arg0, u32 arg1) {
    s32 temp_s0;

    if (arg1 < 5U) {
        temp_s0 = func_003F1EE0(arg0->unk10, 4, 0, arg1);
        func_003D9E30(arg0);
        return temp_s0 > 0;
    }
    return 0;
}
