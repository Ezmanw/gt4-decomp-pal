#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

void func_003287B8(s32);
void func_00328810(s32);
void func_002F49A0(s8 *arg0, s32 arg1) {
    s32 *h = (s32 *)(arg0 + 0x20);
    if (arg1 != 0) {
        func_003287B8(arg1);
    }
    if (*h != 0) {
        func_00328810(*h);
    }
    *h = arg1;
}
