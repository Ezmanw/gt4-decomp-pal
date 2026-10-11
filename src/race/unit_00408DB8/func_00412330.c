#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_003868F8(s32);                             /* extern */
s32 func_00412398(void *);                      /* extern */

struct func_00412330_arg0 {
    char pad0[0x10];
    s32 unk10;
};

void func_00412330(struct func_00412330_arg0 *arg0) {
    if (func_003868F8(arg0->unk10) == 1) {
        func_00412398(arg0);
        return;
    }
    if (func_003868F8(arg0->unk10) == 4) {
        func_00412398(arg0);
    }
}
