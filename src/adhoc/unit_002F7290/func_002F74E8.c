#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

extern char D_0069D808[];
void hFileIO__structor_0(s32, s32);
void func_002FEBD8(s32, s32 *);
s32 func_003268A8(s32, s32, void *);
void func_002F74E8(s32 arg0, s32 arg1) {
    s32 sp[4];
    s32 temp_v0;
    temp_v0 = func_003268A8(0xFC, 4, D_0069D808);
    hFileIO__structor_0(temp_v0, arg1);
    sp[0] = temp_v0;
    func_002FEBD8(arg0, sp);
}
