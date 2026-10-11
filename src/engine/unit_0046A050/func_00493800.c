#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00493800(s32 arg0, s8 *arg1) {
    if (arg1 != NULL) {
        *arg1 = arg0;
    }
    return 0;
}
