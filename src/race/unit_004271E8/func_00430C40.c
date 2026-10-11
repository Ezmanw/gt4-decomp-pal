#include "types.h"
void *memcpy(void *, const void *, unsigned int);

struct func_00430C40_arg0 {
    char pad0[0x4C];
    s32 unk4C;
};

s32 func_00430C40(struct func_00430C40_arg0 *arg0) {
    return ((s32) arg0->unk4C >> 1) & 1;
}
