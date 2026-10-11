#include "types.h"
#include "gt4/mOptionMenu.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_002084E8(s32);                             /* extern */
s32 func_00265FA8(s32, s32);                /* extern */
s32 func_002C82F0(void *, s32);                 /* extern */
s32 func_003094D0(void *, s32);             /* extern */
s32 func_0030BC70(void *);                      /* extern */
s32 func_0057CD90(void *, s32, s32);        /* extern */

void mOptionMenu__virtual_103(void *arg0, s32 arg1) {
    s8 sp[0x10];
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v1;

    func_0030BC70(sp);
    temp_v1 = ((struct mOptionMenu *)arg0)->unkC0;
    if (temp_v1 != 0) {
        func_00265FA8(temp_v1, 0);
    }
    temp_a0 = ((struct mOptionMenu *)arg0)->unkC4;
    if (temp_a0 != 0) {
        temp_v0 = func_002084E8(temp_a0);
        func_0057CD90(arg0 + 0xD8, 0, temp_v0);
        if (temp_v0 > 0) {
            func_002C82F0(arg0, arg1);
        }
    }
    ((struct mOptionMenu *)arg0)->unkFC = 0;
    func_003094D0(sp, 2);
}
