#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_00444E00();                                /* extern */
s32 func_00444F00(s32);                             /* extern */
s32 func_00444F80(s32);                             /* extern */
s32 func_00445018(s32);                             /* extern */
s32 func_004450B0(s32);                             /* extern */
s32 func_00445148(s32);                             /* extern */
s32 func_00445358(s32);                             /* extern */
s32 func_00445450(s32);                             /* extern */
s32 func_00445518(s32);                             /* extern */
s32 func_00445598(s32);                             /* extern */
s32 func_004455A8(s32);                             /* extern */

s32 func_00444D38(s32 arg0) {
    s32 var_v0;

    var_v0 = func_00444E00();
    if (var_v0 != 0) {
        var_v0 = func_00444F00(arg0);
        if (var_v0 != 0) {
            var_v0 = func_00444F80(arg0);
            if (var_v0 != 0) {
                var_v0 = func_00445018(arg0);
                if (var_v0 != 0) {
                    var_v0 = func_004450B0(arg0);
                    if (var_v0 != 0) {
                        var_v0 = func_00445148(arg0);
                        if (var_v0 != 0) {
                            var_v0 = func_00445358(arg0);
                            if (var_v0 != 0) {
                                var_v0 = func_00445450(arg0);
                                if (var_v0 != 0) {
                                    var_v0 = func_00445518(arg0);
                                    if (var_v0 != 0) {
                                        var_v0 = func_00445598(arg0);
                                        if (var_v0 != 0) {
                                            var_v0 = func_004455A8(arg0) != 0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return var_v0;
}
