#include "types.h"
void *memcpy(void *, const void *, unsigned int);

struct func_0044FE30_arg0 {
    char pad0[0x80];
    f32 unk80;
};

void func_0044FE30(struct func_0044FE30_arg0 *arg0, f32 fparg0) {
    arg0->unk80 = fparg0;
}
