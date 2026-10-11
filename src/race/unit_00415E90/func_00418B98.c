#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_004896D8(void *, s32);                 /* extern */

struct func_00418B98_arg1 {
    f32 unk0;
    f32 unk4;
    f32 unk8;
};

struct func_00418B98_arg0 {
    f32 unk0;
    f32 unk4;
    f32 unk8;
};

void func_00418B98(void *arg0, struct func_00418B98_arg1 *arg1) {
    func_004896D8(arg1, arg0 + 0x10);
    arg1->unk0 = (f32) (arg1->unk0 + ((struct func_00418B98_arg0 *)arg0)->unk0);
    arg1->unk4 = (f32) (arg1->unk4 + ((struct func_00418B98_arg0 *)arg0)->unk4);
    arg1->unk8 = (f32) (arg1->unk8 + ((struct func_00418B98_arg0 *)arg0)->unk8);
}
