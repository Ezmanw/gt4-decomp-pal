#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 mWidget__setActive(s32, s32);                    /* extern */
s32 func_00266358(s32, s32);                    /* extern */
void *func_002B4B10(void *, s32);                   /* extern */
s32 mListBox__get_total_item_count();                                /* extern */
s32 func_002B4FD0(void *, s32, s32);            /* extern */
s32 func_002B5098(void *, s32, s32);            /* extern */
s32 mListBox__getItemActive(void *, s32);                     /* extern */
s32 func_002B56D8(void *, s32);                     /* extern */
s32 func_005769F0(s32);                     /* extern */
s32 func_00576A28(s32);                     /* extern */

extern char D_008381C8[];
struct func_002B5130_arg0 {
    char pad0[0x124];
    s32 unk124;
    char pad128[0x24];
    s32 unk14C;
};

void func_002B5130(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s1;

    if ((arg1 >= 0) && (arg1 < mListBox__get_total_item_count())) {
        if (arg3 != 0) {
            mWidget__setActive(arg3, mListBox__getItemActive(arg0, arg1));
            func_00266358(arg3, func_002B56D8(arg0, arg1));
            func_002B4FD0(arg0, arg2, arg3);
        }
        func_005769F0((s32)D_008381C8);
        temp_s1 = M2C_FIELD(func_002B4B10(arg0, arg1), s32 *, 8);
        M2C_FIELD(func_002B4B10(arg0, arg1), s32 *, 8) = arg3;
        func_00576A28((s32)D_008381C8);
        if (temp_s1 != 0) {
            func_002B5098(arg0, arg2, temp_s1);
        }
        if (arg1 == ((struct func_002B5130_arg0 *)arg0)->unk124) {
            ((struct func_002B5130_arg0 *)arg0)->unk14C = 1;
        }
    }
}
