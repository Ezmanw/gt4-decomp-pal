#include "gt4/mGTShirtPS2.h"
typedef float f32;

extern "C" void func_001C3980(struct mGTShirtPS2 *arg0);

extern "C" void mGTShirtPS2__virtual_63(struct mGTShirtPS2 *arg0, f32 fparg0) {
    arg0->unk248 = fparg0;
    func_001C3980(arg0);
}
