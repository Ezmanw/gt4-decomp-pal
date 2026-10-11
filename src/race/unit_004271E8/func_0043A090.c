#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

extern char D_00687DD0[];
s32 func_0043A770(s32 *);
void func_0043A090(s32 *arg0) {
    s32 i;
    func_0043A770(arg0);
    *arg0 = (s32)D_00687DD0;
    for (i = 28; i >= 0; i--) {
        arg0[1 + i] = 0;
    }
}
