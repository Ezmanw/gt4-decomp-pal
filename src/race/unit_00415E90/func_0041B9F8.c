#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_0041B8C0(s32, f32);                        /* extern */

struct func_0041B9F8_arg0 {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    char padC[0x4];
    f32 unk10;
    f32 unk14;
    f32 unk18;
    f32 unk1C;
};

void func_0041B9F8(struct func_0041B9F8_arg0 *arg0, s32 arg1) {
    func_0041B8C0(func_0041B8C0(func_0041B8C0(func_0041B8C0(func_0041B8C0(func_0041B8C0(func_0041B8C0(arg1, arg0->unk0), arg0->unk4), arg0->unk8), arg0->unk10), arg0->unk14), arg0->unk18), arg0->unk1C);
}
