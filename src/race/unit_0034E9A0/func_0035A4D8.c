#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

void * func_003596A8(void *);
s32 func_00344FA0(void *, u8, f32);             /* extern */

void func_0035A4D8(void *arg0, s32 arg1, f32 fparg0) {
    func_00344FA0(arg0, M2C_FIELD((func_003596A8(arg0) + arg1), u8 *, 0xC), fparg0);
}
