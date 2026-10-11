#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00106118(s32, s32, s32, s32); /* extern */
s32 func_00106278(s32, s32, s32);       /* extern */
s32 func_001063F0();                            /* extern */

void func_001063C8(s32 arg0) {
    func_001063F0();
    func_00106118(arg0, 1, 2, 1);
    func_00106278(arg0, 0x280, 0x1C0);
}
