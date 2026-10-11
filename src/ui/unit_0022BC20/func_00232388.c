#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_00231B18();                                /* extern */
s32 mKeyPressEvent__structor_4(s32, s32, void *, s32);       /* extern */

struct func_00232388_arg0 {
    char pad0[0x1D58];
    s32 unk1D58;
};

void func_00232388(struct func_00232388_arg0 *arg0, s32 arg1) {
    s32 temp_s1;

    temp_s1 = arg0->unk1D58;
    mKeyPressEvent__structor_4(temp_s1, arg1, arg0, func_00231B18());
}
