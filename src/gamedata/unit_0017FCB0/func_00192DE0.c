#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

extern char D_00692168[];
void mPhotoMapWindow__structor_0(s32);
void func_00200A38(s32, s32 *);
s32 func_003268A8(s32, s32, void *);
void func_00192DE0(s32 arg0) {
    s32 sp[4];
    s32 temp_v0;
    temp_v0 = func_003268A8(0x164, 4, D_00692168);
    mPhotoMapWindow__structor_0(temp_v0);
    sp[0] = temp_v0;
    func_00200A38(arg0, sp);
}
