#include "types.h"
void *memcpy(void *, const void *, unsigned int);

struct func_0042CE30_arg0 {
    char pad0[0x8];
    s32 unk8;
};

void func_0042CE30(struct func_0042CE30_arg0 *arg0) {
    arg0->unk8 = (s32) (arg0->unk8 - 1);
}
