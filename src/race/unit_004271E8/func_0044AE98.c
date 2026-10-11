#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_0044AB68();                            /* extern */
s32 func_0044AB88(s32 *);                       /* extern */
s32 func_0044AC48(s32 *, s32);                      /* extern */
s32 func_0044ADD0(s32 *, s32, s32);                 /* extern */
s32 func_0044AF38(s32 *, s32);                  /* extern */
s32 memcpy(s32, s32, s32);               /* extern */

s32 func_0044AE98(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;
    s32 var_s1;

    func_0044AB68();
    var_s1 = 0;
    temp_v0 = func_0044ADD0(arg0, arg1, arg2);
    if (temp_v0 != -1) {
        var_s1 = 1;
        memcpy(arg3, func_0044AC48(arg0, temp_v0), *arg0);
        func_0044AF38(arg0, temp_v0);
    }
    func_0044AB88(arg0);
    return var_s1;
}
