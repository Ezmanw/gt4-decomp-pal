/* compiler: ee-gcc2.96-no-strict-aliasing */
/* Built without strict aliasing: the load of arg0's first field waits for the three float stores. */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00385EC0(s32);                             /* extern */
s32 func_00385ED0(s32);                             /* extern */
s32 func_00385EE0(s32);                             /* extern */
s32 func_00385EF0(s32);                             /* extern */
s32 func_00385F00(s32);                             /* extern */
s32 func_00385F10(s32);                             /* extern */
s32 func_00385FA0(s32);                             /* extern */
s32 func_00385FB0(s32);                             /* extern */
s32 func_00385FC0(s32);                             /* extern */
s32 func_00385FD0(s32);                             /* extern */
s32 func_003861C8(s32);                             /* extern */
s32 func_003861D0(s32);                             /* extern */
s32 func_00386318(s32 *, s32, s32);         /* extern */
s32 func_003866C0(s32);                             /* extern */
s32 func_003866D0(s32);
s32 func_003866F0(s32);
s32 func_00385E50(s32);                             /* extern */
s32 func_00386700(s32);                             /* extern */
s32 func_00386710(s32);                             /* extern */
s32 func_0040FFF8(s32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32 *, s32 *); /* extern */

struct func_004109B0_arg0 {
    s32 unk0;
    char pad4[0x4];
    s32 unk8;
    s32 *unkC;
    char pad10[0x100];
    f32 unk110;
};

void func_004109B0(struct func_004109B0_arg0 *arg0, f32 fparg0, f32 fparg1, f32 fparg2) {
    s32 sp50;
    s32 sp54;
    s32 sp58;
    s32 sp5C;
    s32 sp60;
    s32 sp64;
    s32 sp68;
    f32 temp_f20;
    f32 temp_f0;
    s32 temp_fp;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_s5;
    s32 temp_s6;
    s32 temp_s7;
    f32 *p1;
    f32 *p2;
    f32 *p3;
    f32 *p4;
    f32 *p5;
    f32 k;
    k = 0x1.0C152p-3f;
    sp50 = func_003861C8(*arg0->unkC);
    sp54 = func_003861D0(*arg0->unkC);
    temp_f20 = arg0->unk110;
    sp58 = func_00385EC0(arg0->unk0);
    sp5C = func_00385EE0(arg0->unk0);
    sp60 = func_00385F00(arg0->unk0);
    sp64 = func_003866C0(arg0->unk8);
    sp68 = func_00385FA0(arg0->unk0);
    temp_s7 = func_00385FC0(arg0->unk0);
    temp_fp = func_00386700(arg0->unk8);
    temp_s6 = func_00385ED0(arg0->unk0);
    temp_s5 = func_00385EF0(arg0->unk0);
    temp_s4 = func_00385F10(arg0->unk0);
    temp_s3 = func_003866D0(arg0->unk8);
    temp_s2 = func_00385FB0(arg0->unk0);
    temp_s1 = func_00385FD0(arg0->unk0);
    func_0040FFF8(0, fparg0, fparg1, temp_f20, fparg2, 0, sp58, sp5C, sp60, sp64, sp68, temp_s7, temp_fp, temp_s6, temp_s5, temp_s4, temp_s3, temp_s2, temp_s1, func_00386710(arg0->unk8), &sp50, &sp54);
    p1 = (f32 *)func_00385ED0(arg0->unk0);
    p2 = (f32 *)func_00385EF0(arg0->unk0);
    p3 = (f32 *)func_003866D0(arg0->unk8);
    p4 = (f32 *)func_003866F0(arg0->unk8);
    p5 = (f32 *)func_00385E50(arg0->unk0);
    temp_f0 = (*p4 - *p5) + k;
    *p3 = temp_f0;
    *p2 = temp_f0;
    *p1 = temp_f0;
    *(s32 *)func_00385F10(arg0->unk0) = 0;
    func_00386318(arg0->unkC, 0, sp50);
    func_00386318(arg0->unkC, 1, sp54);
}
