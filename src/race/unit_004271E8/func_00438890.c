#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_004386B8(s32);                             /* extern */

struct func_00438890_arg0 {
    char pad0[0x4];
    s32 unk4;
};

u32 func_00438890(struct func_00438890_arg0 *arg0) {
    return (u32) ~func_004386B8(arg0->unk4) >> 0x1F;
}
