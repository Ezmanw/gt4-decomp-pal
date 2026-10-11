#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 free(s32);                         /* extern */

struct func_004077F0_arg0 {
    char pad0[0x4];
    s32 unk4;
};

void func_004077F0(struct func_004077F0_arg0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unk4;
    if (temp_v0 != 0) {
        free(temp_v0);
        arg0->unk4 = 0;
    }
}
