#define GT4_DECLS
#include "gt4/mWidget.h"
#include "types.h"
void *memcpy(void *, const void *, unsigned int);

f32 func_00200F08(s32);                             /* extern */
f32 func_00200F18(s32);                             /* extern */
s32 func_00206928(s32);                             /* extern */
s32 func_0025C0E8(s32);                         /* extern */
s32 func_0025C458(s32);                             /* extern */
s32 func_00265EF0(s32);                             /* extern */
s32 func_002663F8(void *);                          /* extern */
s32 func_002664D0(s32, s32);                /* extern */
s32 func_00266530(s32, s32);                /* extern */
f32 func_002E9638(s32);                             /* extern */

struct func_002C9100_arg0 {
    char pad0[0xC4];
    s32 unkC4;
};

f32 func_002C9100(struct func_002C9100_arg0 *arg0) {
    f32 var_f20;
    s32 var_s0;
    s32 var_s2;

    var_s2 = 0;
    var_f20 = func_00200F08(arg0->unkC4);
    var_s0 = func_00206928(arg0->unkC4);
    if (var_s0 != 0) {
        do {
            if (func_00265EF0(var_s0) == 0) {
                if (var_s2 > 0) {
                    var_f20 += func_002E9638(arg0->unkC4);
                }
                if (func_002663F8(arg0) == 0) {
                    func_002664D0(var_s0, 1);
                    func_00266530(var_s0, 1);
                    func_0025C0E8(var_s0);
                }
                mWidget__setWindowY(var_s0, var_f20);
                var_s2 += 1;
                var_f20 += mWidget__getWindowH(var_s0);
            }
            var_s0 = func_0025C458(var_s0);
        } while (var_s0 != 0);
    }
    return var_f20 + func_00200F18(arg0->unkC4);
}
