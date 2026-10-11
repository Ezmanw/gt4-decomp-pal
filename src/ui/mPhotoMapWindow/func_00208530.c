#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_002083C8();
s32 func_0025C570(s32);
void func_00208530(s32 arg0, s32 arg1) {
    s32 p;
    s32 i;
    p = func_002083C8();
    for (i = 0; p != 0 && i != arg1; i++) {
        p = func_0025C570(p);
    }
}
