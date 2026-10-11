#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00394EE0(s32);                         /* extern */
s32 func_003951D0(s32, s64);                    /* extern */

struct func_003C73C0_arg0 {
    char pad0[0x6C];
    void *unk6C;
    char pad70[0x1E5E4];
    s32 unk1E654;
};
struct func_003C73C0_temp_v0_2 {
    char pad0[0x78];
    s64 unk78;
    s32 unk80;
};

void func_003C73C0(void *arg0) {
    s32 temp_v0;
    void *temp_v0_2;

    temp_v0 = ((struct func_003C73C0_arg0 *)arg0)->unk1E654;
    if (temp_v0 != 0) {
        func_00394EE0(temp_v0);
    }
    temp_v0_2 = ((struct func_003C73C0_arg0 *)arg0)->unk6C;
    ((struct func_003C73C0_arg0 *)arg0)->unk1E654 = 0;
    func_003951D0(((struct func_003C73C0_temp_v0_2 *)temp_v0_2)->unk80, ((struct func_003C73C0_temp_v0_2 *)temp_v0_2)->unk78);
}
