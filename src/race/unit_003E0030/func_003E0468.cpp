#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_003E06F0(s32, s32, s32, s32, s32);     /* extern */

void func_003E0468(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    func_003E06F0(arg0 + (arg1 * 0xC0) + 0x68, arg2, arg3, arg4, arg5);
}
