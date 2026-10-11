#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_0033D610();                                /* extern */

struct func_0033D668_arg0 {
    char pad0[0x1BC];
    f32 unk1BC;
    f32 unk1C0;
};

f32 func_0033D668(struct func_0033D668_arg0 *arg0) {
    if (func_0033D610() != 0) {
        return arg0->unk1BC * arg0->unk1C0;
    }
    return 0.0f;
}
