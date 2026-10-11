#include "types.h"
void *memcpy(void *, const void *, unsigned int);

struct func_003B0CC8_arg1 {
    char pad0[0x694];
    f32 unk694;
};

void func_003B0CC8(f32 *arg0, struct func_003B0CC8_arg1 *arg1) {
    *arg0 = arg1->unk694;
}
