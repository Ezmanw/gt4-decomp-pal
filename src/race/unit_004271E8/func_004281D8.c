#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_00427AF0(s32);                             /* extern */
s32 func_00428190(void *, s32);                 /* extern */

struct func_004281D8_arg0 {
    char pad0[0x4];
    s32 unk4;
};

void func_004281D8(struct func_004281D8_arg0 *arg0) {
    func_00428190(arg0, func_00427AF0(arg0->unk4));
}
