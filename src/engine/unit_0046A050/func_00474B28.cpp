#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00473910(s32, s32, s32, s32, s32); /* extern */
s32 func_004739E0(s32, s32, s32, s32); /* extern */
s32 func_004739F8(s32, s32, s32, s32); /* extern */

struct func_00474B28_arg0 {
    char pad0[0x6E14];
    s32 unk6E14;
    char pad6E18[0x1C];
    s32 unk6E34;
};

void func_00474B28(void *arg0) {
    ((struct func_00474B28_arg0 *)arg0)->unk6E34 = 0;
    func_004739F8(((struct func_00474B28_arg0 *)arg0)->unk6E14, 0, 0, 0);
    func_004739E0(((struct func_00474B28_arg0 *)arg0)->unk6E14, 3, 0x80, 0xFF);
    func_00473910(((struct func_00474B28_arg0 *)arg0)->unk6E14, 1, 1, 1, 1);
}
