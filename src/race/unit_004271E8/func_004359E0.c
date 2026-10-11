#include "types.h"
void *memcpy(void *, const void *, unsigned int);

struct func_004359E0_arg0 {
    char pad0[0x81C8];
    s32 unk81C8;
};

void *func_004359E0(void *arg0) {
    s32 temp_v1;

    temp_v1 = ((struct func_004359E0_arg0 *)arg0)->unk81C8;
    return arg0 + (((temp_v1 < 0) ? 0 : temp_v1) << 5) + 8;
}
