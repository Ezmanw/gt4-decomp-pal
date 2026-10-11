#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

void func_00492288(void *);
struct func_00491078_arg0 {
    char pad0[0x7C];
    s32 unk7C;
};

void func_00491078(struct func_00491078_arg0 *arg0) {
    if (arg0->unk7C == 0) {
        func_00492288(arg0);
        arg0->unk7C = 1;
    }
}
