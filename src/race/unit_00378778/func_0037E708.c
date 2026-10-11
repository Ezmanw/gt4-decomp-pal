#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00378DB0();                            /* extern */

extern char D_0067AF48[];
struct func_0037E708_arg0 {
    s32 unk0;
    char pad4[0x188];
    s32 unk18C;
};

void func_0037E708(struct func_0037E708_arg0 *arg0) {
    func_00378DB0();
    arg0->unk18C = 0;
    arg0->unk0 = (s32)D_0067AF48;
}
