#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_00335F30(void *, s32);                 /* extern */
s32 func_004273A8(void *);                      /* extern */

struct func_00337B70_var_s0 {
    char pad0[0x198];
    s32 unk198;
};

void func_00337B70(s32 arg0) {
    s32 var_s1;
    void *temp_a0;
    void *var_s0;

    var_s0 = arg0 + 0xE50C;
    var_s1 = 5;
    do {
        var_s1 -= 1;
        func_00335F30(var_s0, ((struct func_00337B70_var_s0 *)var_s0)->unk198 != 0);
        temp_a0 = var_s0;
        var_s0 += 0x214;
        func_004273A8(temp_a0);
    } while (var_s1 >= 0);
}
