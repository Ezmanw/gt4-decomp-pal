#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_0046CBF0(s32, s32);                    /* extern */
s32 func_0046CFA0();                            /* extern */

void func_0046C7C0(s32 arg0) {
    func_0046CFA0();
    func_0046CBF0(arg0, arg0 + 0x888);
}
