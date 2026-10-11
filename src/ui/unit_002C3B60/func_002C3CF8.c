#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_002C3F10();                            /* extern */
s32 func_00460C30(s32);                         /* extern */

struct func_002C3CF8_arg0 {
    char pad0[0x10];
    s32 unk10;
};

void func_002C3CF8(struct func_002C3CF8_arg0 *arg0) {
    if (arg0->unk10 != 0) {
        func_002C3F10();
        func_00460C30(arg0->unk10);
        arg0->unk10 = 0;
    }
}
