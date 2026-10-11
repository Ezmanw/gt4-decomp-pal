#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_00419308(s32);                         /* extern */
s32 func_0041C548();                            /* extern */

struct func_00419260_arg0 {
    char pad0[0x200];
    s32 unk200;
};

void func_00419260(void *arg0) {
    func_0041C548();
    func_00419308(arg0 + 0xE0);
    ((struct func_00419260_arg0 *)arg0)->unk200 = 0;
}
