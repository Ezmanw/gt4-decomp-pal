#include "types.h"
void *memcpy(void *, const void *, unsigned int);

struct func_003B0CD8_arg1 {
    char pad0[0x698];
    f32 unk698;
};

void func_003B0CD8(f32 *arg0, struct func_003B0CD8_arg1 *arg1) {
    *arg0 = arg1->unk698;
}
