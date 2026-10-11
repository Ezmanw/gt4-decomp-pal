#include "types.h"
#include "gt4/NormalCarGeometry.h"
void *memcpy(void *, const void *, unsigned int);
#include "m2c_macros.h"

f32 func_0038D230(void *, f32);                     /* extern */
void *func_0038D3B8();                              /* extern */

struct NormalCarGeometry__virtual_12_temp_s0 {
    char pad0[0x8];
    f32 unk8;
};

f32 NormalCarGeometry__GetSteeringWheelCenter_Z(struct NormalCarGeometry *arg0, f32 fparg0) {
    struct NormalCarGeometry__virtual_12_temp_s0 *temp_s0;

    if (arg0->unk4 == 0) {
        return M2C_FIELD(func_0038D3B8(), f32 *, 8);
    }
    temp_s0 = func_0038D3B8();
    return temp_s0->unk8 + func_0038D230(arg0, fparg0);
}
