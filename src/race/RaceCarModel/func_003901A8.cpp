extern "C" {
#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_003EDD20(...) throw();
s32 func_00450E88(...) throw();
s32 func_00450EA8(...) throw();

void func_003901A8(s32 arg0, s32 arg1) {
    if (arg1 != 0) {
        func_00450E88(arg0 + 0x18);
        return;
    }
    func_00450EA8(arg0 + 0x18);
    func_003EDD20(0);
}

}
