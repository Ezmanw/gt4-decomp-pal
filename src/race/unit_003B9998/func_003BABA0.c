#include "types.h"
void *memcpy(void *, const void *, unsigned int);

struct func_003BABA0_arg0 {
    char pad0[0x2469C];
    s32 unk2469C;
};

void func_003BABA0(struct func_003BABA0_arg0 *arg0, s32 arg1) {
    arg0->unk2469C = arg1;
}
