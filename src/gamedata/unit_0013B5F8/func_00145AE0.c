#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_00441210(s32);                             /* extern */
s32 func_00441610(s32, s32);                /* extern */

struct func_00145AE0_arg0 {
    char pad0[0x14];
    s32 unk14;
};

s32 func_00145AE0(struct func_00145AE0_arg0 *arg0) {
    s32 temp_s1;

    temp_s1 = func_00441210(arg0->unk14);
    func_00441610(arg0->unk14, 0);
    return temp_s1;
}
