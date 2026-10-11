/* compiler: ee-gcc2.96-nosib */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00485F00(s32, s32, s32);       /* extern */
s32 func_00485F78();                                /* extern */

extern char D_00463938[];
extern char D_00624898[];
void func_00485BA0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    func_00485F00((s32)D_00624898, func_00485F78(), (s32)D_00463938);
}
