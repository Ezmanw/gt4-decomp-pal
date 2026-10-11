#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00441330(void *, s32, s32, s32);   /* extern */
s32 func_004415C0();                                /* extern */
s32 SPEC_DATABASE__CarEquipments__getVariationOrder(s32);                             /* extern */

struct func_004412F0_arg0 {
    char pad0[0x4A0];
    s32 unk4A0;
};

void func_004412F0(void *arg0) {
    func_00441330(arg0, 0, SPEC_DATABASE__CarEquipments__getVariationOrder(func_004415C0()), ((struct func_004412F0_arg0 *)arg0)->unk4A0);
}
