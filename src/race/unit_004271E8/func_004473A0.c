#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00447430();                            /* extern */
s32 func_00447500(void *, s32);                 /* extern */

extern char D_006882D8[];
struct func_004473A0_arg0 {
    char pad0[0xAC];
    s32 unkAC;
};

void func_004473A0(struct func_004473A0_arg0 *arg0, s32 arg1) {
    arg0->unkAC = (s32)D_006882D8;
    func_00447430();
    func_00447500(arg0, arg1);
}
