#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_002C3F10();                            /* extern */
s32 func_00460CA0(s32, s32, void *);                /* extern */

struct func_002C3E00_arg0 {
    char pad0[0x10];
    s32 unk10;
    s32 unk14;
};

void func_002C3E00(void *arg0, s32 arg1) {
    if (((struct func_002C3E00_arg0 *)arg0)->unk10 != 0) {
        func_002C3F10();
        ((struct func_002C3E00_arg0 *)arg0)->unk14 = func_00460CA0(((struct func_002C3E00_arg0 *)arg0)->unk10, arg1, arg0 + 0x18);
    }
}
