#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_004864C0(f32, s32, s32);               /* extern */
s32 func_00486580(s32, f32);                    /* extern */
s32 func_00486760(s32, s32, s32);                   /* extern */

struct func_0042DF78_arg0 {
    s32 unk0;
    s32 unk4;
};

void func_0042DF78(void *arg0, f32 fparg0) {
    s32 temp_s1;
    s32 temp_v0;

    temp_s1 = arg0 + 8;
    temp_v0 = func_00486760(temp_s1, ((struct func_0042DF78_arg0 *)arg0)->unk0, ((struct func_0042DF78_arg0 *)arg0)->unk4);
    ((struct func_0042DF78_arg0 *)arg0)->unk4 = temp_v0;
    if (temp_v0 != 0) {
        func_00486580(temp_v0, fparg0);
        return;
    }
    ((struct func_0042DF78_arg0 *)arg0)->unk4 = temp_s1;
    func_004864C0(fparg0, temp_s1, ((struct func_0042DF78_arg0 *)arg0)->unk0);
}
