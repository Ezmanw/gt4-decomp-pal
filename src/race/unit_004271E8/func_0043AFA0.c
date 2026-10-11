#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00329E08(void *, s32, s32, s32); /* extern */
s32 func_00436930(s32);                         /* extern */

void func_0043AFA0(s32 arg0) {
    s8 sp[0x10];
    func_00436930(arg0 + 0x38CB0);
    func_00329E08(sp, (s32)"afterGameLoadHook", 0, 0);
}
