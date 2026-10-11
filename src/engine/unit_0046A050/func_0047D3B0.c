/* compiler: ee-gcc2.96-nosib */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_0047D410();                                /* extern */
s32 func_0047D458(s32, s32);                /* extern */
s32 func_0047D490(s32, s32);                /* extern */

void func_0047D3B0(s32 arg0, s32 arg1) {
    if (func_0047D410() != arg1) {
        if (arg1 != 0) {
            func_0047D458(arg0, 1);
            return;
        }
        func_0047D490(arg0, 1);
    }
}
