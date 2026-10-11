#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 ShowRoomCar__structor_0(void *);                      /* extern */
s32 ShowRoomCar__structor_1(void *, s32);             /* extern */
s32 func_00364B18(void *, s32, s32);        /* extern */
f32 func_003651B0(void *);                          /* extern */

struct func_00110A20_arg0_unk60 {
    char pad0[0x8];
    s32 *unk8;
};
struct func_00110A20_arg0 {
    char pad0[0x60];
    struct func_00110A20_arg0_unk60 *unk60;
};

f32 func_00110A20(struct func_00110A20_arg0 *arg0) {
    s8 sp[0x10];
    f32 temp_f20;

    ShowRoomCar__structor_0(sp);
    func_00364B18(sp, *arg0->unk60->unk8 + 0x20, 0);
    temp_f20 = func_003651B0(sp);
    ShowRoomCar__structor_1(sp, 2);
    return temp_f20;
}
