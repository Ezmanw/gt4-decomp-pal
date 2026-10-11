#define GT4_DECLS
#include "gt4/mWidget.h"
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_002661E0();                                /* extern */
s32 func_002DB458(s32, s32);                    /* extern */

s32 func_002DB2A0(s32 arg0) {
    if (func_002661E0() != 0) {
        func_002DB458(arg0, mWidget__getRootWindow(arg0));
    }
}
