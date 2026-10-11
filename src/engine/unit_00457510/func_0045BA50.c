#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_0045B9A0();                            /* extern */

struct func_0045BA50_arg0 {
    char pad0[0x4];
    s32 unk4;
};
struct func_0045BA50_arg1 {
    s32 unk0;
    char pad4[0x4];
    s32 unk8;
};

void func_0045BA50(struct func_0045BA50_arg0 *arg0, struct func_0045BA50_arg1 *arg1) {
    s32 frag1;
    func_0045B9A0();
    frag1 = arg0->unk4;
    arg1->unk8 = (s32) (arg1->unk0 + frag1);
}
