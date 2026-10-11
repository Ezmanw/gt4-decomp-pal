#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s64 *func_004415C0();                               /* extern */

s32 func_00603330(void) {
    return ~*func_004415C0() == 0;
}
