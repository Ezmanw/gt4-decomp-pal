#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_004386B8(s32);                             /* extern */

struct func_00438978_arg0 {
    char pad0[0x8];
    s32 unk8;
};

u32 func_00438978(struct func_00438978_arg0 *arg0) {
    return (u32) ~func_004386B8(arg0->unk8) >> 0x1F;
}
