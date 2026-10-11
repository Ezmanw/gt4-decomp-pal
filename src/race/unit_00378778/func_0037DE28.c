#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

extern char D_0067AE00[];
struct func_0037DE28_arg0 {
    s32 unk0;
    char pad4[0x180];
    s32 unk184;
};

void *func_0037DE28(struct func_0037DE28_arg0 *arg0) {
    func_00378DB0(arg0);
    arg0->unk184 = -1;
    arg0->unk0 = (s32)D_0067AE00;
    return (void *)-1;
}
