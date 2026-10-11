#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_003336B8(void *, s32, s32, s32, s32, s32, f32, s32); /* extern */
s32 func_00335100();                            /* extern */
s32 func_0033ABB0(void *, s32, s32, s32);   /* extern */
s32 GT4Model__BinStreamReader__read8u(void *);                          /* extern */
s32 GT4Model__BinStreamReader__read8(void *);                          /* extern */
s32 func_0045B540(void *);                          /* extern */
s32 func_0045B5B8(void *);                          /* extern */
f32 GT4Model__BinStreamReader__readFloat(void *);                          /* extern */
void GT4Model__BinStreamReader__readArray(void *, void *, s32);     /* extern */
s32 func_0045B9F8(void *, void *);              /* extern */
s32 func_0045BB18(void *, void *);              /* extern */
s32 func_0045BB40(void *, void *, s32);     /* extern */
s32 memcpy(s32, s32, s32);               /* extern */
s32 memmove(s32, s32, s32);           /* extern */
s32 func_005CD6E8(void *, s32, s32, s8 *);      /* extern */

extern char D_0069F140;
struct func_003353A0_arg1 {
    s32 unk0;
    s32 unk4;
};
struct func_003353A0_temp_s2 {
    char pad0[0x4];
    s32 unk4;
    s32 unk8;
};

struct func_003353A0_arg0 {
    char pad0[0x118];
    s32 unk118;
    char pad11C[0x4];
    f32 unk120;
    s32 unk124;
    char pad128[0x3C];
    s32 unk164;
    s32 unk168;
};

void func_003353A0(void *arg0, struct func_003353A0_arg1 *arg1, s32 arg2, s32 arg3) {
    s8 sp[0x10];
    s8 sp10;
    f32 temp_f20;
    f32 var_f0;
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s2_2;
    s32 temp_s3;
    s32 temp_s6;
    u32 temp_a0;
    u32 temp_v1;
    struct func_003353A0_temp_s2 *temp_s2;

    temp_s2 = arg0 + 0xF8;
    func_00335100();
    temp_v1 = arg1->unk4 - arg1->unk0;
    temp_s1 = temp_s2->unk8;
    temp_s0 = temp_s2->unk4;
    temp_a0 = temp_s1 - temp_s0;
    sp10 = 0;
    if (temp_v1 < temp_a0) {
        temp_s0_2 = temp_s0 + temp_v1;
        memmove(temp_s0_2, temp_s1, 0);
        temp_s2->unk8 = (s32) (temp_s2->unk8 - (temp_s1 - temp_s0_2));
    } else {
        func_005CD6E8(temp_s2, temp_s1, temp_v1 - temp_a0, &sp10);
    }
    temp_a1 = arg1->unk0;
    memcpy(temp_s2->unk4, temp_a1, arg1->unk4 - temp_a1);
    ((struct func_003353A0_arg0 *)arg0)->unk168 = 1;
    func_0045BB40(sp, arg1, &D_0069F140);
    func_0045B9F8(sp, arg1);
    temp_s6 = GT4Model__BinStreamReader__read8u(arg1);
    temp_s3 = func_0045B540(arg1);
    temp_s2_2 = func_0045B540(arg1);
    temp_s1_2 = GT4Model__BinStreamReader__read8(arg1);
    temp_s0_3 = GT4Model__BinStreamReader__read8(arg1);
    temp_f20 = GT4Model__BinStreamReader__readFloat(arg1);
    func_003336B8(arg0, arg2, temp_s3, temp_s2_2, temp_s1_2, temp_s0_3, temp_f20, func_0045B5B8(arg1));
    ((struct func_003353A0_arg0 *)arg0)->unk118 = GT4Model__BinStreamReader__read8(arg1);
    ((struct func_003353A0_arg0 *)arg0)->unk124 = func_0045B5B8(arg1);
    if (temp_s6 >= 2) {
        var_f0 = GT4Model__BinStreamReader__readFloat(arg1);
    } else {
        var_f0 = 0x1.0000000000000p+0f;
    }
    ((struct func_003353A0_arg0 *)arg0)->unk120 = var_f0;
    GT4Model__BinStreamReader__readArray(arg1, arg0 + 0x128, 4);
    GT4Model__BinStreamReader__readArray(arg1, arg0 + 0x12C, 4);
    if (temp_s6 > 0) {
        GT4Model__BinStreamReader__readArray(arg1, arg0 + 0x130, 4);
        GT4Model__BinStreamReader__readArray(arg1, arg0 + 0x134, 4);
        GT4Model__BinStreamReader__readArray(arg1, arg0 + 0x138, 4);
        GT4Model__BinStreamReader__readArray(arg1, arg0 + 0x13C, 4);
    }
    GT4Model__BinStreamReader__readArray(arg1, arg0 + 0x144, 0x20);
    ((struct func_003353A0_arg0 *)arg0)->unk164 = 1;
    func_0045BB18(sp, arg1);
    func_0033ABB0(arg1, arg2, arg3, 0);
}
