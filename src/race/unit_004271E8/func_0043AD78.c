#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_00430390(s32);                             /* extern */
s32 func_004377A0(s32);                             /* extern */
s32 func_0043A700(s32);                             /* extern */
s32 func_0043B3C8(s32);                             /* extern */

void func_0043AD78(s32 arg0) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;

    temp_s0 = func_0043A700(0x10);
    temp_s0_2 = temp_s0 + func_0043B3C8(arg0 + 0x348);
    temp_s0_3 = temp_s0_2 + func_004377A0(arg0 + 0x38CB0);
    func_0043A700(temp_s0_3 + func_00430390(arg0 + 0x3A368));
}
