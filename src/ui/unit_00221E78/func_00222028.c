#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

extern char D_006980E0[];
void mNetConfPS2__structor_1(s32, s32);
void func_003094A0(s32, s32 *);
s32 func_003268A8(s32, s32, void *);
void func_00222028(s32 arg0, s32 arg1) {
    s32 sp[4];
    s32 temp_v0;
    temp_v0 = func_003268A8(0x470, 4, D_006980E0);
    mNetConfPS2__structor_1(temp_v0, arg1);
    sp[0] = temp_v0;
    func_003094A0(arg0, sp);
}
