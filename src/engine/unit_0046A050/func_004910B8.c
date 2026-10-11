#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00492890();                            /* extern */

struct func_004910B8_arg0 {
    char pad0[0x7C];
    s32 unk7C;
};

s32 func_004910B8(struct func_004910B8_arg0 *arg0) {
    if (arg0->unk7C != 0) {
        arg0->unk7C = 0;
        func_00492890();
    }
}
