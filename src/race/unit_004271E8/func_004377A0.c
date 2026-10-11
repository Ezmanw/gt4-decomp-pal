#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_00436210(s32);                             /* extern */
s32 func_004390E8(s32);                             /* extern */
s32 func_00439370(s32);                             /* extern */
s32 func_00439A60(s32);                             /* extern */
s32 func_00439C40(s32);                             /* extern */
s32 func_0043A700(s32);                             /* extern */
s32 func_0043DE40(s32);                             /* extern */

void func_004377A0(s32 arg0) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s0_5;
    s32 temp_s0_6;

    temp_s0 = func_0043A700(0x11C0);
    temp_s0_2 = temp_s0 + func_00436210(arg0 + 0x11C8);
    temp_s0_3 = temp_s0_2 + func_0043DE40(arg0 + 0x11D0);
    temp_s0_4 = temp_s0_3 + func_004390E8(arg0 + 0x1344);
    temp_s0_5 = temp_s0_4 + func_00439A60(arg0 + 0x13F4);
    temp_s0_6 = temp_s0_5 + func_00439C40(arg0 + 0x1650);
    func_0043A700(temp_s0_6 + func_00439370(arg0 + 0x16A4));
}
