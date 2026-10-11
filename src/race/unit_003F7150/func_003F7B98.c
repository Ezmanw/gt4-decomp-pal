#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_003F9BE0(void *, s32, s32);            /* extern */
s32 func_003FA070(void *, s32);                 /* extern */
s32 func_00463FB8(s32);                             /* extern */

struct func_003F7B98_arg0 {
    char pad0[0x626];
    u8 unk626;
};

void func_003F7B98(void *arg0) {
    s32 temp_v0;

    temp_v0 = func_00463FB8(arg0 + 0x14);
    func_003FA070(arg0, temp_v0);
    func_003F9BE0(arg0, temp_v0, ((struct func_003F7B98_arg0 *)arg0)->unk626 != 2);
}
