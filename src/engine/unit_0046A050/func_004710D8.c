#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00471138();                            /* extern */
s32 func_005C1628(void *);                      /* extern */

extern char D_00688978[];
struct func_004710D8_arg0 {
    char pad0[0x84C];
    s32 unk84C;
};

void func_004710D8(struct func_004710D8_arg0 *arg0, s32 arg1) {
    arg0->unk84C = (s32)D_00688978;
    func_00471138();
    if (arg1 & 1) {
        func_005C1628(arg0);
    }
}
