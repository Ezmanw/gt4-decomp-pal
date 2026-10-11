#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_00267B08();                            /* extern */

struct func_00267918_arg0 {
    char pad0[0x68];
    s32 unk68;
    char pad6C[0x2C];
    s32 unk98;
};

s32 func_00267918(struct func_00267918_arg0 *arg0) {
    if (arg0->unk98 & 0x200000) {
        func_00267B08();
    }
    return arg0->unk68 != 0;
}
