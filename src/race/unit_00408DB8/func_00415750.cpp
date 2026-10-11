#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00415010();                            /* extern */
s32 func_00415140(s32, s32);                    /* extern */

void func_00415750(s32 arg0, s32 arg1) {
    func_00415010();
    func_00415140(arg0, arg1);
}
