#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_004796D0(s32, s32, s16 *, s32, s32, s32); /* extern */
s32 func_0047D658(s32, s32, s16 *, s32, s32, s32); /* extern */
s32 func_0047FE50(s32, s32, s16 *, s32, s32, s32); /* extern */
s32 func_00484E68(s32, s32, s16 *, s32, s32, s32); /* extern */
s32 exception__structor_0(s32);                         /* extern */

s32 func_0047D8E8(s32 arg0, s16 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    s16 temp_v1;
    s32 var_s0;

    temp_v1 = *arg1;
    switch (temp_v1) {                              /* irregular */
    case 2:
        var_s0 = exception__structor_0(0xAC);
        func_0047FE50(var_s0, arg0, arg1, arg2, arg3, arg4);
        break;
    case 5:
        var_s0 = exception__structor_0(0x68);
        func_004796D0(var_s0, arg0, arg1, arg2, arg3, arg4);
        break;
    case 6:
        var_s0 = exception__structor_0(0x9C);
        func_00484E68(var_s0, arg0, arg1, arg2, arg3, arg4);
        break;
    default:
        var_s0 = exception__structor_0(0x60);
        func_0047D658(var_s0, arg0, arg1, arg2, arg3, arg4);
        break;
    }
    return var_s0;
}
