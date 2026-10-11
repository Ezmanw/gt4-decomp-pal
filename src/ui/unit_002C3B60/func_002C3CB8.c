#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_002C3CF8();                            /* extern */
s32 func_00460B78(s32);                             /* extern */

struct func_002C3CB8_arg0 {
    char pad0[0x10];
    s32 unk10;
};

void func_002C3CB8(struct func_002C3CB8_arg0 *arg0, s32 arg1) {
    func_002C3CF8();
    arg0->unk10 = func_00460B78(arg1);
}
