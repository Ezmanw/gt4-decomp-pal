#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00231B18();                          /* extern */
s32 mOSKeyboard__open(s32, void *, s32, f32, f32, f32, f32); /* extern */

struct func_00232278_arg0 {
    char pad0[0x1D58];
    s32 unk1D58;
};

void func_00232278(struct func_00232278_arg0 *arg0, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3) {
    s32 temp_s0;

    if (func_00231B18() != 0) {
        temp_s0 = arg0->unk1D58;
        mOSKeyboard__open(temp_s0, arg0, func_00231B18(arg0), fparg0, fparg1, fparg2, fparg3);
    }
}
