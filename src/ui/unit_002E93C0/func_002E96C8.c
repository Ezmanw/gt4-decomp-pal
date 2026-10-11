#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_002664C0(s32);                         /* extern */
s32 func_002664F0(s32);                         /* extern */

struct func_002E96C8_arg0 {
    char pad0[0xC4];
    s32 unkC4;
};

void func_002E96C8(struct func_002E96C8_arg0 *arg0, s32 arg1) {
    if (arg0->unkC4 != 0) {
        func_002664F0(arg1);
        return;
    }
    func_002664C0(arg1);
}
