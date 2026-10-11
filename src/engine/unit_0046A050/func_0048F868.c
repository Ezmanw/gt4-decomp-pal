#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_0048F490(s32);                             /* extern */
s32 func_0048F5B0(s32);                             /* extern */

struct func_0048F868_arg0 {
    s32 unk0;
    s32 unk4;
};

s32 func_0048F868(struct func_0048F868_arg0 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0_2 = arg0->unk0;
    if (temp_v0_2 != 0) {
        return func_0048F490(temp_v0_2);
    }
    temp_v0 = arg0->unk4;
    if (temp_v0 != 0) {
        return func_0048F5B0(temp_v0);
    }
    return 0;
}
