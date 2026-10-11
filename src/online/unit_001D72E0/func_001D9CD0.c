#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_00328700(s32);                         /* extern */
s32 func_00328750(s32);                         /* extern */

struct func_001D9CD0_arg0 {
    char pad0[0xFC];
    s32 unkFC;
    s32 unk100;
};

void func_001D9CD0(void *arg0, s32 *arg1, s32 *arg2) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_s0;
    s32 temp_s0_2;

    if ((arg0 + 0xFC) != arg1) {
        temp_s0 = *arg1;
        if (temp_s0 != 0) {
            func_00328700(temp_s0);
        }
        temp_a0 = ((struct func_001D9CD0_arg0 *)arg0)->unkFC;
        if (temp_a0 != 0) {
            func_00328750(temp_a0);
        }
        ((struct func_001D9CD0_arg0 *)arg0)->unkFC = temp_s0;
    }
    if ((arg0 + 0x100) != arg2) {
        temp_s0_2 = *arg2;
        if (temp_s0_2 != 0) {
            func_00328700(temp_s0_2);
        }
        temp_a0_2 = ((struct func_001D9CD0_arg0 *)arg0)->unk100;
        if (temp_a0_2 != 0) {
            func_00328750(temp_a0_2);
        }
        ((struct func_001D9CD0_arg0 *)arg0)->unk100 = temp_s0_2;
    }
}
