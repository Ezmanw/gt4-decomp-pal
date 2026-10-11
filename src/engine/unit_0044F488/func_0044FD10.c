#include "types.h"
void *memcpy(void *, const void *, unsigned int);

struct func_0044FD10_arg0 {
    u8 pad0[0x38];
    f32 unk38;
};

void func_0044FD10(struct func_0044FD10_arg0 *arg0, f32 fparg0) {
    arg0->unk38 = fparg0;
}
