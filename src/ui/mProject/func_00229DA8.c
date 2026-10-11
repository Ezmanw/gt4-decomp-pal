#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

u16 func_00206920(void);
u16 func_0025C450(u16);
s32 func_002660C8(u16);
s32 func_00229DA8(void) {
    u16 var_s0;
    var_s0 = func_00206920();
    while (var_s0 != 0) {
        if (func_002660C8(var_s0) != 0) {
            return 1;
        }
        var_s0 = func_0025C450(var_s0);
    }
    return 0;
}
