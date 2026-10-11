#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

struct func_00476180_p_unkC {
    char pad0[0x1C];
    f32 unk1C;
};
struct func_00476180_p {
    char pad0[0xC];
    struct func_00476180_p_unkC *unkC;
    char pad10[0x10];
    u32 unk20;
};

f32 func_00476180(struct func_00476180_p *p) {
    return (f32)p->unk20 / p->unkC->unk1C;
}
