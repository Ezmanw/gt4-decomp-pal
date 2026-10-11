#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_002320B8(s32, s32);                    /* extern */
s32 func_00265FA8(s32, s32);                /* extern */
s32 func_002B4FD0(void *, s32, s32);            /* extern */
s32 func_002B5098(void *, s32, s32);            /* extern */
s32 func_005769F0(s32);                     /* extern */
s32 func_00576A28(s32);                     /* extern */

extern char D_008381C8[];
struct func_002B52E0_arg0 {
    char pad0[0x11C];
    s32 unk11C;
};

void mListBox__setDragIcon(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_s1;

    if (arg2 != 0) {
        func_00265FA8(arg2, 0);
        func_002B4FD0(arg0, arg1, arg2);
    }
    func_005769F0((s32)D_008381C8);
    temp_s1 = ((struct func_002B52E0_arg0 *)arg0)->unk11C;
    ((struct func_002B52E0_arg0 *)arg0)->unk11C = arg2;
    func_002320B8(arg1, arg2);
    func_00576A28((s32)D_008381C8);
    if (temp_s1 != 0) {
        func_002B5098(arg0, arg1, temp_s1);
    }
}
