#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_0042EE80(s32);                             /* extern */
s32 func_0042F8D8(s32);                             /* extern */
s32 func_0042FBF8(s32);                             /* extern */
s32 func_004308D0(s32);                             /* extern */
s32 func_00431778(s32);                             /* extern */
s32 func_00432968(s32);                             /* extern */
s32 func_00434038(s32);                             /* extern */
s32 func_00435DE8(s32);                             /* extern */
s32 func_0043A1B0(s32);                             /* extern */
s32 func_0043A700(s32);                             /* extern */
s32 func_0043BA60(s32);                             /* extern */

void func_0043B3C8(s32 arg0) {
    s32 temp_s0;
    s32 temp_s0_10;
    s32 temp_s0_11;
    s32 temp_s0_12;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s0_5;
    s32 temp_s0_6;
    s32 temp_s0_7;
    s32 temp_s0_8;
    s32 temp_s0_9;

    temp_s0 = func_0043A700(0x218);
    temp_s0_2 = temp_s0 + func_0042F8D8(arg0 + 0x220);
    temp_s0_3 = temp_s0_2 + func_00435DE8(arg0 + 0xB8E8);
    temp_s0_4 = temp_s0_3 + func_00431778(arg0 + 0x13AE0);
    temp_s0_5 = temp_s0_4 + func_00434038(arg0 + 0x146E8);
    temp_s0_6 = temp_s0_5 + func_00434038(arg0 + 0x262F8);
    temp_s0_7 = temp_s0_6 + func_00432968(arg0 + 0x26BE8);
    temp_s0_8 = temp_s0_7 + func_0042EE80(arg0 + 0x36208);
    temp_s0_9 = temp_s0_8 + func_004308D0(arg0 + 0x38618);
    temp_s0_10 = temp_s0_9 + func_004308D0(arg0 + 0x38728);
    temp_s0_11 = temp_s0_10 + func_0043A1B0(arg0 + 0x38838);
    temp_s0_12 = temp_s0_11 + func_0042FBF8(arg0 + 0x388B0);
    func_0043A700(temp_s0_12 + func_0043BA60(arg0 + 0x38940));
}
