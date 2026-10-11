#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

void func_002114C8(void *, s32);
void func_00211860(void *);
s32 func_00213218(s32);
void func_00250EC0(s32, void *);
struct func_00254948_arg0 {
    char pad0[0x10];
    s32 unk10;
    s32 unk14;
    s32 unk18;
};

void func_00254948(struct func_00254948_arg0 *arg0) {
    s32 sp[4];
    s32 temp_s1;
    arg0->unk10 = 0;
    func_00211860(sp);
    temp_s1 = func_00213218(sp[0]);
    func_002114C8(sp, 2);
    arg0->unk18 = arg0->unk14;
    func_00250EC0(temp_s1, arg0);
}
