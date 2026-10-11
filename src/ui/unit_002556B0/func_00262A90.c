#include "types.h"
void *memcpy(void *, const void *, unsigned int);

f32 MfloatReader__structor_5(s32);                             /* extern */

struct func_00262A90_arg0 {
    char pad0[0x74];
    f32 unk74;
};

void func_00262A90(struct func_00262A90_arg0 *arg0, s32 arg1) {
    arg0->unk74 = MfloatReader__structor_5(arg1);
}
