#include "gt4/mColorObject.h"
extern "C" void *hObject__structor_0(void);
extern "C" void *func_00203160(void *arg0);
extern "C" char mColorObject__vtable[];

extern "C" void *mColorObject__structor_0(void *arg0)
{
    hObject__structor_0();
    ((struct mColorObject *)arg0)->unk4 = mColorObject__vtable;
    return func_00203160((char *)arg0 + 0x10);
}
