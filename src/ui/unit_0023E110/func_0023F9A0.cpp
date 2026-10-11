#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_0023F9E8();                            /* extern */
s32 func_002C3CB8(s32, s32);                    /* extern */
s32 func_00460F48();                            /* extern */

struct func_0023F9A0_arg0 {
    char pad0[0x10];
    s32 unk10;
};

void func_0023F9A0(void *arg0, s32 arg1) {
    func_0023F9E8();
    func_00460F48();
    func_002C3CB8(((struct func_0023F9A0_arg0 *)arg0)->unk10, arg1);
}
