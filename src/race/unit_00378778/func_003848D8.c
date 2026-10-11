#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

struct func_003848D8_arg0 {
    char pad0[0x148];
    s32 unk148;
    char pad14C[0x34];
    s32 unk180;
};

void func_003848D8(struct func_003848D8_arg0 *arg0, s32 arg1) {
    func_00378F88(arg0);
    arg0->unk180 = arg1;
    arg0->unk148 = 0x10;
}
