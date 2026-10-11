#include "types.h"
void *memcpy(void *, const void *, unsigned int);

f32 func_001465E0();                                /* extern */

struct func_005C9970_arg0 {
    char pad0[0x174];
    s32 unk174;
};

f32 func_005C9970(struct func_005C9970_arg0 *arg0) {
    return (f32) arg0->unk174 / func_001465E0();
}
