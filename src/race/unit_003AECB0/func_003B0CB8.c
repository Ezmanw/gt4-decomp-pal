#include "types.h"
void *memcpy(void *, const void *, unsigned int);

struct func_003B0CB8_arg1 {
    char pad0[0x690];
    f32 unk690;
};

void func_003B0CB8(f32 *arg0, struct func_003B0CB8_arg1 *arg1) {
    *arg0 = arg1->unk690;
}
