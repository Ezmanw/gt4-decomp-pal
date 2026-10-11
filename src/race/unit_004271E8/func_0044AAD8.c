#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 free(s32);                         /* extern */

struct func_0044AAD8_arg0 {
    char pad0[0xC];
    s32 unkC;
};

s32 func_0044AAD8(struct func_0044AAD8_arg0 *arg0) {
    s32 temp_v0;

    temp_v0 = arg0->unkC;
    if (temp_v0 != 0) {
        free(temp_v0);
    }
}
