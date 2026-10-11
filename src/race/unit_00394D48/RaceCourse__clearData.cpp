#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

extern "C" {
s32 func_003954C8(void *);                      /* extern */
s32 func_00396AF0(s32);                         /* extern */
s32 func_003D5D08(void *);                      /* extern */
s32 func_00463CE0(s32, s32);                /* extern */

extern char RaceCourse__model_arena_[];
struct func_00395168_arg0 {
    s32 unk0;
    s32 unk4;
};

void RaceCourse__clearData(char *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = ((struct func_00395168_arg0 *)arg0)->unk4;
    if (temp_v0 != 0) {
        func_00396AF0(temp_v0);
    }
    temp_v0_2 = ((struct func_00395168_arg0 *)arg0)->unk0;
    if (temp_v0_2 != 0) {
        func_00463CE0((s32)RaceCourse__model_arena_, temp_v0_2);
    }
    ((struct func_00395168_arg0 *)arg0)->unk4 = 0;
    ((struct func_00395168_arg0 *)arg0)->unk0 = 0;
    func_003D5D08(arg0 + 0x1C);
    func_003954C8(arg0);
}

}
