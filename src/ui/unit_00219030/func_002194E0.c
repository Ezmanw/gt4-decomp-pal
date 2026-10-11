#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

void func_003267B8(s32);
void func_00327A80(s32);
struct func_002194E0_arg0 {
    char pad0[0x28];
    s32 unk28;
    s32 unk2C;
};

void func_002194E0(struct func_002194E0_arg0 *arg0) {
    s32 temp_v0;
    func_00327A80(arg0->unk2C);
    temp_v0 = arg0->unk28;
    if (temp_v0 != 0) {
        func_003267B8(temp_v0);
        arg0->unk28 = 0;
    }
}
