#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 GT4Model__BinStreamReader__read8u(void *);                      /* extern */
s32 func_0045B600(void *);                      /* extern */
s32 func_0045B9F8(void *, void *);              /* extern */
s32 func_0045BB40(void *, void *, s32);     /* extern */

extern char D_0069F310[];
struct func_0033AB30_arg0 {
    s32 unk0;
    char pad4[0x4];
    s32 unk8;
};

void func_0033AB30(struct func_0033AB30_arg0 *arg0) {
    s32 frag1;
    s8 sp[0x10];
    s32 temp_s1;

    frag1 = arg0->unk0;
    temp_s1 = arg0->unk8 - frag1;
    func_0045BB40(sp, arg0, (s32)D_0069F310);
    func_0045B9F8(sp, arg0);
    GT4Model__BinStreamReader__read8u(arg0);
    func_0045B600(arg0);
    func_0045B600(arg0);
    GT4Model__BinStreamReader__read8u(arg0);
    arg0->unk8 = (s32) (arg0->unk0 + temp_s1);
}
