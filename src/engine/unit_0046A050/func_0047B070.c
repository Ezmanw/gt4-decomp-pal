#include "types.h"
void *memcpy(void *, const void *, unsigned int);

f32 func_0047DF70(s32);                             /* extern */

struct func_0047B070_arg0 {
    s32 unk0;
    f32 unk4;
};

void *func_0047B070(struct func_0047B070_arg0 *arg0, s32 arg1) {
    f32 temp_f0;

    temp_f0 = func_0047DF70(arg1);
    arg0->unk0 = 6;
    arg0->unk4 = temp_f0;
    return arg0;
}
