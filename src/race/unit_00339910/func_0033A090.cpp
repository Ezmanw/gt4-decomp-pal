#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

extern "C" {
s32 func_00339D60(s32, void *, f32);            /* extern */
s32 func_003E94F0(s32, s32, s32);               /* extern */
s32 func_0045A208(s32, s32, f32);               /* extern */
s32 func_0045B8B0(void *, s32, s32);        /* extern */
s32 func_0045B920(void *, s32);                 /* extern */

extern char D_0069F2F0[];
struct func_0033A090_arg1 {
    char pad0[0x14];
    s32 unk14;
};

void func_0033A090(s32 arg0, char *arg1, s32 arg2, s32 arg3, f32 fparg0) {
    s8 sp[0x10];
    func_0045B8B0(sp, arg0, (s32)D_0069F2F0);
    func_0045A208(arg0, (s32)(arg1 + 0x2890), fparg0);
    func_00339D60(arg0, arg1, fparg0);
    if (arg3 != 0) {
        func_003E94F0(arg2 + 0x31D0, arg0, ((struct func_0033A090_arg1 *)arg1)->unk14);
    }
    func_0045B920(sp, arg0);
}

}
