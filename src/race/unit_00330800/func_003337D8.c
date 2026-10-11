#include "types.h"
void *memcpy(void *, const void *, unsigned int);

struct func_003337D8_arg0 {
    char pad0[0x120];
    f32 unk120;
};

void func_003337D8(struct func_003337D8_arg0 *arg0, f32 fparg0) {
    f32 temp_f12;

    temp_f12 = fparg0 / 0.016666666f;
    arg0->unk120 = temp_f12;
    if (temp_f12 > 1.0f) {
        arg0->unk120 = 1.0f;
    }
}
