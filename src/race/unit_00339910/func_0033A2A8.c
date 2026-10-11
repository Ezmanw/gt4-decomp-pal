#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 GT4Model__BinStreamWriter__writeArray(s32, s32, s32);           /* extern */
s32 func_0045B8B0(void *, s32, s32);        /* extern */
s32 func_0045B920(void *, s32);                 /* extern */

extern char D_0069F300[];
void func_0033A2A8(s32 arg0, s32 arg1) {
    s8 sp[0x10];
    func_0045B8B0(sp, arg0, (s32)D_0069F300);
    GT4Model__BinStreamWriter__writeArray(arg0, arg1, 0x17F4);
    func_0045B920(sp, arg0);
}
