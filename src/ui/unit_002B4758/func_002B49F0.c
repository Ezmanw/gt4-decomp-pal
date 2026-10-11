#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_00328700(s32);                         /* extern */
s32 func_00328750(s32);                         /* extern */

struct func_002B49F0_arg0 {
    char pad0[0x118];
    s32 unk118;
};

void func_002B49F0(void *arg0, s32 *arg1) {
    s32 temp_s0;
    s32 temp_v0;

    if ((arg0 + 0x118) != arg1) {
        temp_s0 = *arg1;
        if (temp_s0 != 0) {
            func_00328700(temp_s0);
        }
        temp_v0 = ((struct func_002B49F0_arg0 *)arg0)->unk118;
        if (temp_v0 != 0) {
            func_00328750(temp_v0);
        }
        ((struct func_002B49F0_arg0 *)arg0)->unk118 = temp_s0;
    }
}
