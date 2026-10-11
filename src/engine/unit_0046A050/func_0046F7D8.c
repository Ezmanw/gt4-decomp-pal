#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_0046F690();                            /* extern */

struct func_0046F7D8_arg0 {
    char pad0[0x4];
    s32 unk4;
    s32 unk8;
    char padC[0x4];
    s32 unk10;
    s32 unk14;
    s32 unk18;
};

void func_0046F7D8(struct func_0046F7D8_arg0 *arg0, s32 arg1, s32 arg2) {
    func_0046F690();
    if ((arg0->unk4 - arg0->unk8) < (arg2 + 8)) {
        arg0->unk14 = 1;
        arg0->unk18 = 1;
        return;
    }
    memcpy(arg0->unk10, arg1, arg2);
    arg0->unk10 = (s32) (arg0->unk10 + arg2);
    arg0->unk8 = (s32) (arg0->unk8 + arg2);
}
