#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00145F60(s32);                             /* extern */
s32 func_004415C0(s32);                             /* extern */
s32 SPEC_DATABASE__CarEquipments__getDriveTrainType(s32);                             /* extern */
s32 func_00446228(s32);                             /* extern */

extern char D_0068F4F0[];
struct func_00145EF8_arg0 {
    char pad0[0x14];
    s32 unk14;
};

s32 func_00145EF8(struct func_00145EF8_arg0 *arg0) {
    if (func_00446228(func_004415C0(arg0->unk14)) == 0) {
        return (s32)D_0068F4F0;
    }
    return func_00145F60(SPEC_DATABASE__CarEquipments__getDriveTrainType(func_004415C0(arg0->unk14)));
}
