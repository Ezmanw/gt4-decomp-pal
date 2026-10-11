#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_004328C0(s32);                             /* extern */
s32 func_0043A700(s32);                         /* extern */

void func_00432968(s32 arg0) {
    s32 temp_a0;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;

    var_s0 = arg0 + 4;
    var_s1 = 0x7C;
    var_s2 = 0;
    do {
        temp_a0 = var_s0;
        var_s0 += 0x1F8;
        var_s1 -= 1;
        var_s2 += func_004328C0(temp_a0);
    } while (var_s1 >= 0);
    func_0043A700(var_s2);
}
