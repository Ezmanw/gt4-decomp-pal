#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

extern "C" {
s32 func_004220B0(s32, f32, f32, f32);          /* extern */

struct func_00418DD8_arg0 {
    f32 unk0;
    f32 unk4;
    f32 unk8;
};

void func_00418DD8(char *arg0) {
    func_004220B0((s32)(arg0 + 0x10), ((struct func_00418DD8_arg0 *)arg0)->unk0, ((struct func_00418DD8_arg0 *)arg0)->unk4, ((struct func_00418DD8_arg0 *)arg0)->unk8);
}

}
