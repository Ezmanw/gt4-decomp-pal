#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_003357D0();                            /* extern */

struct func_00335790_temp_s0 {
    char pad0[0x4];
    s32 unk4;
    s32 unk8;
};

void *func_00335790(s32 arg0) {
    struct func_00335790_temp_s0 *temp_s0;

    temp_s0 = arg0 + 0x108;
    if (temp_s0->unk8 == temp_s0->unk4) {
        func_003357D0();
    }
    return temp_s0;
}
