#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

void func_0013BD70(void *, s32);
void func_0013BDC8(void *);
s32 func_00147D88(s32);
void func_00343A80(s32);
void MCarGarage__replaceOil(void) {
    s32 sp[4];
    s32 temp_s0;
    func_0013BDC8(sp);
    temp_s0 = func_00147D88(sp[0]) + 0x4A0;
    func_0013BD70(sp, 2);
    func_00343A80(temp_s0);
}
