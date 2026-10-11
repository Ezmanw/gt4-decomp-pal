#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_0024D308();                                /* extern */
s32 func_0027AFA0(s32);                         /* extern */

s32 func_0027B4F0(s32 arg0) {
    if (func_0024D308() == 0) {
        func_0027AFA0(arg0);
        return 1;
    }
    return 0;
}
