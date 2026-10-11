#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_003BBB50(s32);                         /* extern */
s32 func_003BBD28(s32);                         /* extern */
s32 func_003DDA88(s32);                         /* extern */

struct func_003B5180_arg0 {
    char pad0[0x11E8];
    s32 unk11E8;
    s32 unk11EC;
};

s32 func_003B5180(void *arg0, s32 arg1) {
    func_003BBD28(arg0 + 0x1A0);
    func_003BBB50(arg0 + 0x119C);
    ((struct func_003B5180_arg0 *)arg0)->unk11EC = 0;
    ((struct func_003B5180_arg0 *)arg0)->unk11E8 = 0x157529FF;
    if (arg1 == 0) {
        func_003DDA88(arg0 + 0x11E0);
    }
}
