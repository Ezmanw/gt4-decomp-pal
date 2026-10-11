#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

struct func_003ACBC0_arg0 {
    char pad0[0x28];
    s32 unk28;
    s32 unk2C;
};

void func_003ACBC0(struct func_003ACBC0_arg0 *arg0) {
    arg0->unk28 = 0;
    arg0->unk2C = 0;
}
