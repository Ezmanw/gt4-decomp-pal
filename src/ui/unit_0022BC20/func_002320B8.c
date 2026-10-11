#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00265EC8(s32, s32);                /* extern */
s32 func_00265FA8(s32, s32);                /* extern */

struct func_002320B8_arg0 {
    char pad0[0x1D10];
    s32 unk1D10;
};

s32 func_002320B8(struct func_002320B8_arg0 *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = arg0->unk1D10;
    if (temp_v0 != 0) {
        func_00265EC8(temp_v0, 0);
    }
    arg0->unk1D10 = arg1;
    if (arg1 != 0) {
        func_00265FA8(arg1, 0);
        func_00265EC8(arg0->unk1D10, 1);
    }
}
