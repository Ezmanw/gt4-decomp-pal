#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00473A10();                            /* extern */

struct func_00473238_arg0 {
    char pad0[0x14];
    s32 unk14;
};

s32 func_00473238(struct func_00473238_arg0 *arg0) {
    if (arg0->unk14 == 0) {
        func_00473A10();
    }
}
