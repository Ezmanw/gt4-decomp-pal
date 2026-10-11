#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_00435198(s32);                         /* extern */

struct func_00435C40_arg0 {
    char pad0[0x81C8];
    s32 unk81C8;
};

void func_00435C40(void *arg0, s32 arg1, s32 arg2) {
    func_00435198(arg0 + (arg1 << 5) + 8);
    if (arg2 != 0) {
        ((struct func_00435C40_arg0 *)arg0)->unk81C8 = arg1;
    }
}
