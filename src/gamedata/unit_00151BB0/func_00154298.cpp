#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

extern "C" {
s32 func_0021B400(s32 *, s32);              /* extern */
s32 func_00328700(s32);                         /* extern */
s32 func_00328750(s32);                         /* extern */

struct func_00154298_arg0 {
    char pad0[0x88];
    s32 unk88;
};

void func_00154298(char *arg0, s32 *arg1) {
    s32 temp_s0;
    s32 temp_v0;

    if ((arg0 + 0x88) != (char *)arg1) {
        temp_s0 = *arg1;
        if (temp_s0 != 0) {
            func_00328700(temp_s0);
        }
        temp_v0 = ((struct func_00154298_arg0 *)arg0)->unk88;
        if (temp_v0 != 0) {
            func_00328750(temp_v0);
        }
        ((struct func_00154298_arg0 *)arg0)->unk88 = temp_s0;
    }
    func_0021B400(arg1, 2);
}

}
