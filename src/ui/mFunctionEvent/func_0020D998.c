#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_00328700(s32);                         /* extern */
s32 func_00328750(s32);                         /* extern */

struct func_0020D998_arg0 {
    char pad0[0x20];
    s32 unk20;
};

void func_0020D998(void *arg0, s32 *arg1) {
    s32 temp_s0;
    s32 temp_v0;

    if ((arg0 + 0x20) != arg1) {
        temp_s0 = *arg1;
        if (temp_s0 != 0) {
            func_00328700(temp_s0);
        }
        temp_v0 = ((struct func_0020D998_arg0 *)arg0)->unk20;
        if (temp_v0 != 0) {
            func_00328750(temp_v0);
        }
        ((struct func_0020D998_arg0 *)arg0)->unk20 = temp_s0;
    }
}
