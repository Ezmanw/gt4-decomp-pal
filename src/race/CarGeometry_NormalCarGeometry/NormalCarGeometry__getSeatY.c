#include "types.h"
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

f32 func_0038D190(s32, f32);                        /* extern */
void *func_0038D3B8();                              /* extern */

struct func_0038D4C8_temp_s0 {
    char pad0[0x38];
    f32 unk38;
};

f32 NormalCarGeometry__getSeatY(s32 arg0, s32 arg1, f32 fparg0) {
    struct func_0038D4C8_temp_s0 *temp_s0;

    if (arg1 != 0) {
        return M2C_FIELD(func_0038D3B8(), f32 *, 0x38);
    }
    temp_s0 = func_0038D3B8();
    return temp_s0->unk38 + func_0038D190(arg0, fparg0);
}
