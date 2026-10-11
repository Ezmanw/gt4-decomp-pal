#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00208FC0(void *, s32);                 /* extern */
s32 func_00208FD8(void *, s32);             /* extern */
s32 func_0026CC38(void *, s32, s32);            /* extern */

struct func_0026D410_arg0 {
    char pad0[0x410];
    s32 unk410;
};

void func_0026D410(struct func_0026D410_arg0 *arg0, s32 arg1, s32 arg2) {
    s8 sp[0x10];
    func_00208FC0(sp, arg0->unk410 - 4);
    func_0026CC38(arg0, arg1, arg2);
    func_00208FD8(sp, 2);
}
