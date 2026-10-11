#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

extern char D_00695930[];
void mDnasInst__structor_0(s32);
void func_003094A0(s32, s32 *);
s32 func_003268A8(s32, s32, void *);
void func_001DB1B0(s32 arg0) {
    s32 sp[4];
    s32 temp_v0;
    temp_v0 = func_003268A8(0x1C, 4, D_00695930);
    mDnasInst__structor_0(temp_v0);
    sp[0] = temp_v0;
    func_003094A0(arg0, sp);
}
