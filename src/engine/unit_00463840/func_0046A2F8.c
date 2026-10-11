#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

s32 *func_0046A428(void **, s32);                   /* extern */
s32 func_0046A448(void **, s32);                    /* extern */
void *func_0046A468(void **, s32);                  /* extern */
s32 func_0046B608(s32);                             /* extern */

struct func_0046A2F8_arg0 {
    s8 unk0;
    s8 unk1;
    char pad2[0x2];
    s32 unk4;
    void *unk8;
};

void func_0046A2F8(struct func_0046A2F8_arg0 *arg0, void **arg1, s32 arg2) {
    s32 *temp_v0;
    s32 temp_a0;
    void *temp_v0_2;

    if (func_0046B608(M2C_FIELD(*arg1, s32 *, 0x9C)) != 0) {
        arg0->unk4 = func_0046A448(arg1, arg2);
        arg0->unk8 = func_0046A468(arg1, arg2);
        arg0->unk0 = 1;
        arg0->unk1 = 0x40;
        return;
    }
    temp_v0 = func_0046A428(arg1, arg2);
    temp_a0 = *temp_v0;
    temp_v0_2 = temp_v0 + 1;
    arg0->unk1 = 0x28;
    arg0->unk4 = temp_a0;
    arg0->unk8 = temp_v0_2;
    arg0->unk0 = 0;
}
