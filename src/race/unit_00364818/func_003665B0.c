#include "types.h"
void *memcpy(void *, const void *, unsigned int);

f32 func_003596D8(s32);                             /* extern */

struct func_003665B0_arg0 {
    char pad0[0x10];
    f32 unk10;
};

f32 func_003665B0(void *arg0) {
    return func_003596D8(arg0 + 0x24) * ((struct func_003665B0_arg0 *)arg0)->unk10;
}
