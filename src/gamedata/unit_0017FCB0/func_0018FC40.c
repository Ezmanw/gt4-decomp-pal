#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

void mOption__structor_0(s32);
void func_003094A0(s32, s32 *);
s32 malloc(s32);
void func_0018FC40(s32 arg0) {
    s32 sp[4];
    s32 temp_v0;
    temp_v0 = malloc(0x16D0);
    mOption__structor_0(temp_v0);
    sp[0] = temp_v0;
    func_003094A0(arg0, sp);
}
