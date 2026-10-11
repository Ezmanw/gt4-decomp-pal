#include "types.h"
#define NULL 0
f32 func_00477838(s32);
void func_00481350(void *);
void func_00481378(void *, s32);
struct func_0047C620_arg1 {
    char pad0[0x8];
    s32 unk8;
};

f32 func_0047C620(u32 n, struct func_0047C620_arg1 *arg1) {
    f32 a, b;
    if (n >= 2U) {
        a = func_00477838(arg1->unk8 - 8);
        func_00481350(arg1);
        b = func_00477838(arg1->unk8 - 8);
        func_00481378(arg1, n - 1);
        return (a < b) ? a : b;
    }
    func_00481378(arg1, n);
    return 0.0f;
}
