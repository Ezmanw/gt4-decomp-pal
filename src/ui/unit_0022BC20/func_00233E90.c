#include "types.h"
void *memcpy(void *, const void *, unsigned int);

struct func_00233E90_arg0 {
    char pad0[0xE8];
    s32 unkE8;
};

s32 func_00233E90(struct func_00233E90_arg0 *arg0) {
    return ((s32) arg0->unkE8 >> 4) & 1;
}
