#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00481378(s32, s32);                    /* extern */

struct func_0047C8A0_arg0 {
    s32 unk0;
    f32 unk4;
};

void *func_0047C8A0(struct func_0047C8A0_arg0 *arg0, s32 *arg1, s32 arg2, s32 arg3) {
    f32 var_f0;

    func_00481378(arg3, arg2);
    var_f0 = -1.0f;
    if (arg1 != NULL) {
        var_f0 = (f32) *arg1;
    }
    arg0->unk4 = var_f0;
    arg0->unk0 = 6;
    return arg0;
}
