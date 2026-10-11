#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_0041B8C0(s32, f32);                        /* extern */
s32 func_0041B9F8();                                /* extern */

struct func_0041C040_arg0 {
    char pad0[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
};

void func_0041C040(struct func_0041C040_arg0 *arg0) {
    func_0041B8C0(func_0041B8C0(func_0041B8C0(func_0041B9F8(), arg0->unk30), arg0->unk34), arg0->unk38);
}
