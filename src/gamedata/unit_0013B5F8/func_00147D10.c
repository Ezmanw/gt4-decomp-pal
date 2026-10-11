#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_004415C0(s32);                             /* extern */
s32 func_00445838(s32);                             /* extern */
s32 func_0044A188(void *, s32);                 /* extern */

struct func_00147D10_arg0 {
    char pad0[0x14];
    s32 unk14;
};

s32 func_00147D10(void *arg0) {
    s32 temp_v0;

    temp_v0 = ((struct func_00147D10_arg0 *)arg0)->unk14;
    if (temp_v0 != 0) {
        func_0044A188(arg0 + 0x18, func_00445838(func_004415C0(temp_v0)));
    }
}
