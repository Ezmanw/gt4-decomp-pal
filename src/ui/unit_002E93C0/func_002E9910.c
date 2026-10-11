#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 mWidget__getWindowW();                            /* extern */
s32 mWidget__getWindowH();                            /* extern */

struct func_002E9910_arg0 {
    char pad0[0xC4];
    s32 unkC4;
};

void func_002E9910(struct func_002E9910_arg0 *arg0) {
    if (arg0->unkC4 != 0) {
        mWidget__getWindowH();
        return;
    }
    mWidget__getWindowW();
}
