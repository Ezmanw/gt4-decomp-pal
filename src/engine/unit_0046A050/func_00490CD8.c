#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

f32 func_00490C38(void *);
struct func_00490CD8_arg0 {
    char pad0[0x30];
    f32 unk30;
    f32 unk34;
    char pad38[0x14];
    s32 unk4C;
};

void func_00490CD8(struct func_00490CD8_arg0 *arg0, s32 arg1, s32 arg2) {
    arg0->unk30 = arg1;
    arg0->unk34 = arg2 + func_00490C38(arg0);
    arg0->unk4C = 0;
}
