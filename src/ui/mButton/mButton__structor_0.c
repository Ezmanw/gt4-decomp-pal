#include "types.h"
#include "gt4/mButton.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

extern char mButton__vtable[];
s32 mComposite__structor_0(void *);
void func_00266068(void *, s32);
void func_002F9C60(void *, s32 *);
void mButton__structor_0(void *arg0) {
    s32 sp[4];
    mComposite__structor_0(arg0);
    ((struct mButton *)arg0)->unk4 = (s32)mButton__vtable;
    sp[0] = 0;
    func_002F9C60((s8 *)arg0 + 0xB0, sp);
    func_00266068(arg0, 1);
}
