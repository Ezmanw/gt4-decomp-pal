#include "types.h"
void *memcpy(void *, const void *, unsigned int);

struct func_003FA598_arg0 {
    char pad0[0xF85C];
    u8 unkF85C;
};

u8 func_003FA598(struct func_003FA598_arg0 *arg0) {
    return arg0->unkF85C;
}
