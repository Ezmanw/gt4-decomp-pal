#include "types.h"

s32 func_00423088(s32 a, s32 b) {
    if (b == 0) {
        return a;
    }
    return func_00423088(b, a % b);
}
