#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

extern char D_00693A60[];
void mLoggerFace__structor_0(s32);
void func_002551E0(s32, s32 *);
s32 func_003268A8(s32, s32, void *);
void func_001BC750(s32 arg0) {
    s32 sp[4];
    s32 temp_v0;
    temp_v0 = func_003268A8(0xB0, 4, D_00693A60);
    mLoggerFace__structor_0(temp_v0);
    sp[0] = temp_v0;
    func_002551E0(arg0, sp);
}
