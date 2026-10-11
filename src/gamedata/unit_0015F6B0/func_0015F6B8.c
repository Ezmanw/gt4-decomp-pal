#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

extern char D_006901E0[];
void mGame__structor_0(s32, s32);
void func_003094A0(s32, s32 *);
s32 func_003268A8(s32, s32, void *);
void func_0015F6B8(s32 arg0, s32 arg1) {
    s32 sp[4];
    s32 temp_v0;
    temp_v0 = func_003268A8(0x18, 4, D_006901E0);
    mGame__structor_0(temp_v0, arg1);
    sp[0] = temp_v0;
    func_003094A0(arg0, sp);
}
