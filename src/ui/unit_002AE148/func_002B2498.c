/* compiler: ee-gcc2.96-nosib */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

f32 func_002B2138();                                /* extern */
f32 func_002B2280();                                /* extern */

struct func_002B2498_arg0 {
    char pad0[0xF8];
    f32 unkF8;
    char padFC[0x20];
    s32 unk11C;
};

f32 func_002B2498(struct func_002B2498_arg0 *arg0) {
    if (arg0->unk11C != 0) {
        return func_002B2280();
    }
    return func_002B2138() * arg0->unkF8;
}
