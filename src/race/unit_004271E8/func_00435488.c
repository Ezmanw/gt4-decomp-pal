#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_0042F840();                                /* extern */

struct func_00435488_arg0 {
    char pad0[0x10];
    s32 unk10;
};

s32 func_00435488(struct func_00435488_arg0 *arg0) {
    return (arg0->unk10 & 0xFFFFFF) + func_0042F840();
}
