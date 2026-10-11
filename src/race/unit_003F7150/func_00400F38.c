#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00378DB0();                            /* extern */

extern char D_00686148[];
struct func_00400F38_arg0 {
    s32 unk0;
    char pad4[0x194];
    s32 unk198;
};

void func_00400F38(struct func_00400F38_arg0 *arg0) {
    func_00378DB0();
    arg0->unk198 = 0;
    arg0->unk0 = (s32)D_00686148;
}
