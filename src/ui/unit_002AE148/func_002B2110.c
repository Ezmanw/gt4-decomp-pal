#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 mWidget__getWindowW();                            /* extern */
s32 mWidget__getWindowH();                            /* extern */

struct func_002B2110_arg0 {
    char pad0[0xB0];
    s32 unkB0;
};

void func_002B2110(struct func_002B2110_arg0 *arg0) {
    if (arg0->unkB0 == 0) {
        mWidget__getWindowH();
        return;
    }
    mWidget__getWindowW();
}
