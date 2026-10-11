#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00465310(s32);                         /* extern */

struct func_0034A0D8_temp_s0 {
    char pad0[0x467];
    u8 unk467;
    char pad468[0x28];
    f32 unk490;
};

void func_0034A0D8(s32 arg0) {
    struct func_0034A0D8_temp_s0 *temp_s0;

    func_00465310(arg0 + 0x14);
    temp_s0 = arg0 + 0x104;
    if (temp_s0->unk467 == 8) {
        temp_s0->unk490 = 1.0f;
    }
}
