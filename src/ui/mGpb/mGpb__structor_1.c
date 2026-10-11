#include "types.h"
#include "gt4/mGpb.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_0029E030(void *, s32);                 /* extern */
s32 hObject__structor_0();                            /* extern */
s32 func_0048F648(s32);                         /* extern */

extern char mGpb__vtable[];
void mGpb__structor_1(void *arg0, s32 arg1) {
    hObject__structor_0();
    ((struct mGpb *)arg0)->unk4_s32 = (s32)mGpb__vtable;
    func_0048F648(arg0 + 0x10);
    func_0029E030(arg0, arg1);
}
