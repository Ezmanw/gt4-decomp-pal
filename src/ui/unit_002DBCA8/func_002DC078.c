#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00206928();                             /* extern */
s32 func_00206948(s32, s32, s32);               /* extern */
s32 func_00206C40(s32, s32);                    /* extern */
s32 func_002551E0(void *, s32 *);               /* extern */
s32 func_00255210(void *, s32);             /* extern */
s32 func_0025C458(s32);                             /* extern */
s32 func_002DBFA8(s32 *, s32, s32, s32);            /* extern */

void func_002DC078(s32 arg0, s32 *arg1) {
    s8 sp[0x10];
    s32 sp10;
    s32 temp_s3;
    s32 temp_v0;
    s32 var_s0;

    if (*arg1 != 0) {
        var_s0 = func_0025C458(func_00206928());
        if (var_s0 != 0) {
            do {
                temp_s3 = func_0025C458(var_s0);
                temp_v0 = func_002DBFA8(arg1, var_s0, func_00206928(arg0), var_s0);
                if (temp_v0 != var_s0) {
                    sp10 = var_s0;
                    func_002551E0(sp, &sp10);
                    func_00206C40(arg0, var_s0);
                    func_00206948(arg0, var_s0, temp_v0);
                    func_00255210(sp, 2);
                }
                var_s0 = temp_s3;
            } while (var_s0 != 0);
        }
    }
}
