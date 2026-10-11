#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00472490();                            /* extern */
s32 func_005C1628(void *);                      /* extern */

extern char D_00688990[];
struct func_00472430_arg0 {
    char pad0[0x20];
    s32 unk20;
};

void func_00472430(struct func_00472430_arg0 *arg0, s32 arg1) {
    arg0->unk20 = (s32)D_00688990;
    func_00472490();
    if (arg1 & 1) {
        func_005C1628(arg0);
    }
}
