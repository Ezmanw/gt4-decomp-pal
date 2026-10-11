#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

void func_002114C8(void *, s32);
void func_00211860(void *);
s32 func_00213218(s32);
void func_0025A968(s32, void *);
void func_0026A270(void *, s32);
void func_0026B178(void *, s32, s32);
void mProject__virtual_94(s32 arg0, s32 arg1) {
    s32 sp[4];
    s32 temp_s0;
    func_00211860(sp);
    temp_s0 = func_00213218(sp[0]);
    func_002114C8(sp, 2);
    func_0026B178(sp, temp_s0, arg1);
    func_0025A968(arg1, sp);
    func_0026A270(sp, 2);
}
