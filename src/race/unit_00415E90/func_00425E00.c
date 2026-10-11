#include "types.h"
void *memcpy(void *, const void *, unsigned int);

f32 func_00425BA8(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32); /* extern */

struct func_00425E00_arg0 {
    f32 unk0;
    f32 unk4;
    f32 unk8;
};
struct func_00425E00_arg1 {
    f32 unk0;
    f32 unk4;
    f32 unk8;
};
struct func_00425E00_arg2 {
    f32 unk0;
    f32 unk4;
    f32 unk8;
};
struct func_00425E00_arg3 {
    f32 unk0;
    f32 unk4;
    f32 unk8;
};

f32 func_00425E00(struct func_00425E00_arg0 *arg0, struct func_00425E00_arg1 *arg1, struct func_00425E00_arg2 *arg2, struct func_00425E00_arg3 *arg3) {
    return func_00425BA8(arg0->unk0, arg0->unk4, arg0->unk8, arg1->unk0, arg1->unk4, arg1->unk8, arg2->unk0, arg2->unk4, arg2->unk8, arg3->unk0, arg3->unk4, arg3->unk8) / 6.0f;
}
