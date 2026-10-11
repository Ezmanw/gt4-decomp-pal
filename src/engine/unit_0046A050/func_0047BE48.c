#include "types.h"
void *memcpy(void *, const void *, unsigned int);

f32 func_00477838(s32);                             /* extern */
s32 func_00481378(void *, s32);                 /* extern */

struct func_0047BE48_arg1 {
    char pad0[0x8];
    s32 unk8;
};

f32 func_0047BE48(s32 arg0, struct func_0047BE48_arg1 *arg1) {
    f32 var_f1;
    f32 var_f20;

    if (arg0 != 0) {
        var_f20 = func_00477838(arg1->unk8 - 8);
    } else {
        var_f20 = 0.0f;
    }
    func_00481378(arg1, arg0);
    var_f1 = var_f20;
    if (var_f1 < 0.0f) {
        var_f1 = -var_f1;
    }
    return var_f1;
}
