#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_0030A8F0();                            /* extern */

struct func_002FE2E8_arg0 {
    u8 pad0[0x10];
    s32 unk10;
};
struct func_002FE2E8_arg1 {
    u8 pad0[0x10];
    s32 unk10;
};

void *func_002FE2E8(struct func_002FE2E8_arg0 *arg0, struct func_002FE2E8_arg1 *arg1) {
    if (arg0 != arg1) {
        func_0030A8F0();
        arg0->unk10 = (s32) arg1->unk10;
    }
    return arg0;
}
