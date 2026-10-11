#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_0044A620();                            /* extern */
s32 func_005C1628(void *);                      /* extern */

extern char D_00688338[];
struct func_0044A0F0_arg0 {
    char pad0[0x10];
    s32 unk10;
};

void func_0044A0F0(struct func_0044A0F0_arg0 *arg0, s32 arg1) {
    arg0->unk10 = (s32)D_00688338;
    func_0044A620();
    if (arg1 & 1) {
        func_005C1628(arg0);
    }
}
