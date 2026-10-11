#include "types.h"
#include "gt4/hBuiltinAttribute.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

void func_003094D0(void *, s32);
void *func_0030BC70(void *);
void hBuiltinAttribute__virtual_09(struct hBuiltinAttribute *arg0, s32 arg1, s32 arg2) {
    s32 sp[4];
    func_0030BC70(sp);
    arg0->unk10_fn(sp, arg1, 1, arg2);
    func_003094D0(sp, 2);
}
