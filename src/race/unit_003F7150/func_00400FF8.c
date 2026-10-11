#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_0036F730(s32);                         /* extern */
s32 func_00378F88();                            /* extern */

struct func_00400FF8_arg0 {
    char pad0[0x198];
    s32 unk198;
};

void func_00400FF8(void *arg0, s32 arg1) {
    func_00378F88();
    func_0036F730(arg0 + 0x180);
    ((struct func_00400FF8_arg0 *)arg0)->unk198 = arg1;
}
