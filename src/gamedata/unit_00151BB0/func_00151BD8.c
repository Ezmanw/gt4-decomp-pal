#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00151820(s32, void *);                 /* extern */
s32 func_00154B10(void *, s32);             /* extern */
s32 func_001575B0(void *);                      /* extern */

s32 func_00151BD8(s32 arg0) {
    s8 sp[0x10];
    func_001575B0(sp);
    func_00151820(arg0, sp);
    func_00154B10(sp, 2);
    return arg0;
}
