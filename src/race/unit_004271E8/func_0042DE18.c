#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_0042DD68(void *);
void func_0042DF78(s32, f32);
void func_0042DE18(s8 *arg0, f32 fparg0) {
    s8 *p = arg0;
    p += func_0042DD68(arg0) * 4;
    func_0042DF78(*(s32 *)(p + 0xC), fparg0);
}
