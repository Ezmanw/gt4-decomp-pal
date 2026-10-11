#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_0049F3C0(s32, f32);                /* extern */

struct func_00451D80_arg0 {
    char pad0[0x44];
    f32 unk44;
};

void func_00451D80(void *arg0) {
    func_0049F3C0(0, 0x1.0000000000000p+0f - ((struct func_00451D80_arg0 *)arg0)->unk44);
}
