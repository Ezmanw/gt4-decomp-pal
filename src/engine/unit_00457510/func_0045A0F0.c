#include "types.h"
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 func_00365080(s32, s32);                    /* extern */

struct func_0045A0F0_arg0 {
    char pad0[0x4];
    s32 unk4;
};

void func_0045A0F0(void *arg0, s32 arg1) {
    func_00365080(((struct func_0045A0F0_arg0 *)arg0)->unk4, M2C_FIELD(((arg1 * 0x10) + arg0), s32 *, 0x1C));
}
