#include "types.h"
void *memcpy(void *, const void *, unsigned int);

f32 MfloatReader__structor_5(s32);                             /* extern */

struct func_002625D0_arg0 {
    char pad0[0x40];
    f32 unk40;
};

void func_002625D0(struct func_002625D0_arg0 *arg0, s32 arg1) {
    arg0->unk40 = MfloatReader__structor_5(arg1);
}
