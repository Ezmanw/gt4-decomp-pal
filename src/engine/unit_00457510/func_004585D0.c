#include "types.h"
void *memcpy(void *, const void *, unsigned int);

struct func_004585D0_arg0 {
    char pad0[0x34];
    s32 unk34;
};

s32 func_004585D0(struct func_004585D0_arg0 *arg0, s32 arg1) {
    return arg0->unk34 + (arg1 * 0x10);
}
