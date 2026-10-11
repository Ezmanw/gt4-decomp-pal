#include "types.h"
#include "gt4/mRotateActor.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 mWidget__setRotate(s32, f32);                    /* extern */
s32 func_002CDC88();                            /* extern */
s32 func_002CDD40();                            /* extern */

void mRotateActor__update(void *arg0) {
    if (((struct mRotateActor *)arg0)->unk34 != 0) {
        func_002CDC88();
    } else {
        func_002CDD40();
    }
    mWidget__setRotate(((struct mRotateActor *)arg0)->unk14, ((struct mRotateActor *)arg0)->unk20);
}
