#include "types.h"
void *memcpy(void *, const void *, unsigned int);

f32 MfloatReader__structor_5(s32);                             /* extern */

struct func_002626A0_arg0 {
    char pad0[0x48];
    f32 unk48;
};

void func_002626A0(struct func_002626A0_arg0 *arg0, s32 arg1) {
    arg0->unk48 = MfloatReader__structor_5(arg1);
}
