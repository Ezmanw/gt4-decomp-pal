#include "types.h"
void *memcpy(void *, const void *, unsigned int);

f32 MfloatReader__structor_5(s32);                             /* extern */

struct func_002626D0_arg0 {
    char pad0[0x44];
    f32 unk44;
};

void func_002626D0(struct func_002626D0_arg0 *arg0, s32 arg1) {
    arg0->unk44 = MfloatReader__structor_5(arg1);
}
