#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_0047E9A8();                            /* extern */
s32 func_0047EB40(s32);                         /* extern */

struct func_004752A8_arg0 {
    char pad0[0x20];
    s32 unk20;
};

void func_004752A8(void *arg0) {
    func_0047E9A8();
    func_0047EB40(arg0 + 0x18);
    ((struct func_004752A8_arg0 *)arg0)->unk20 = 0;
}
