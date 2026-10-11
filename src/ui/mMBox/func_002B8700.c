#include "types.h"
void *memcpy(void *, const void *, unsigned int);

struct func_002B8700_arg0 {
    char pad0[0xC8];
    f32 unkC8;
};

void func_002B8700(struct func_002B8700_arg0 *arg0, f32 fparg0) {
    arg0->unkC8 = fparg0;
}
