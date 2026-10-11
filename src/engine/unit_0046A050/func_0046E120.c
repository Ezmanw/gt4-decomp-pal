#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_0046DB48(void *);                          /* extern */
s32 func_0046ECF8(void *, s32);                 /* extern */
s32 func_0046EDE0(void *);                          /* extern */

struct func_0046E120_temp_s1 {
    char pad0[0x10];
    s32 unk10;
};

struct func_0046E120_arg0 {
    char pad0[0xAD4];
    s32 unkAD4;
    s32 unkAD8;
};

void func_0046E120(void *arg0) {
    s32 temp_s2;
    struct func_0046E120_temp_s1 *temp_s1;

    temp_s1 = arg0 + 0xA88;
    temp_s2 = func_0046EDE0(temp_s1) - 2;
    if (func_0046DB48(arg0) != 0) {
        ((struct func_0046E120_arg0 *)arg0)->unkAD8 = temp_s2;
        ((struct func_0046E120_arg0 *)arg0)->unkAD4 = (s32) temp_s1->unk10;
        func_0046ECF8(temp_s1, temp_s2);
        func_0046DB48(arg0);
    }
}
