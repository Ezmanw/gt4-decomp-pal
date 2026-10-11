#include "types.h"
void *memcpy(void *, const void *, unsigned int);

f32 func_00344A40(s32);                             /* extern */
f32 func_00344A70(s32, f32);                        /* extern */
f32 func_00344AA0(s32, f32);                        /* extern */

struct func_003D7460_arg1 {
    char pad0[0x4];
    s32 unk4;
};
struct func_003D7460_arg0 {
    f32 unk0;
    f32 unk4;
    f32 unk8;
};

void *func_003D7460(struct func_003D7460_arg0 *arg0, struct func_003D7460_arg1 *arg1, f32 fparg0) {
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f22;

    temp_f22 = func_00344A40(arg1->unk4);
    temp_f20 = func_00344A70(arg1->unk4, fparg0);
    temp_f0 = func_00344AA0(arg1->unk4, fparg0);
    arg0->unk0 = temp_f22;
    arg0->unk4 = temp_f20;
    arg0->unk8 = temp_f0;
    return arg0;
}
