#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00235D58();
s32 func_0025C3F8(s32);
s32 func_00266000(s32);
s32 func_00235FC8(void) {
    s32 res = 0;
    s32 p = func_00235D58();
    while (p != 0) {
        if (func_00266000(p) != 0) res = p;
        p = func_0025C3F8(p);
    }
    return res;
}
