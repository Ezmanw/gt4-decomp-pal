#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

extern char D_0069D080[];
void mStorageEntry__structor_1(s32, s32);
void func_003094A0(s32, s32 *);
s32 func_003268A8(s32, s32, void *);
void func_002E18E8(s32 arg0, s32 arg1) {
    s32 sp[4];
    s32 temp_v0;
    temp_v0 = func_003268A8(0xB8, 4, D_0069D080);
    mStorageEntry__structor_1(temp_v0, arg1);
    sp[0] = temp_v0;
    func_003094A0(arg0, sp);
}
