#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_0044A620(s32);                         /* extern */

struct func_00407C20_arg0 {
    char pad0[0xA8];
    s32 unkA8;
};

void func_00407C20(void *arg0) {
    func_0044A620(arg0 + 0xB0);
    ((struct func_00407C20_arg0 *)arg0)->unkA8 = 0;
}
