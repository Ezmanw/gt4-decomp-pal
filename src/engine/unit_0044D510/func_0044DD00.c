/* compiler: ee-gcc2.96-nosib */
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_004910B8(s32);                         /* extern */

extern char PDISTD__global_font_manager[];
void func_0044DD00(s32 *arg0) {
    if (*arg0 != 0) {
        *arg0 = 0;
        func_004910B8(*(s32 *)PDISTD__global_font_manager);
    }
}
