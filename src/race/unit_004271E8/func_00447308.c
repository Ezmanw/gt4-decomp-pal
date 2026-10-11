#include "types.h"
#define NULL 0
void *memcpy(void *, const void *, unsigned int);

s32 func_00447430();                            /* extern */
s32 func_00447438(void *);                      /* extern */

extern char D_006882D8[];
struct func_00447308_arg0 {
    char pad0[0xAC];
    s32 unkAC;
};

void func_00447308(struct func_00447308_arg0 *arg0) {
    arg0->unkAC = (s32)D_006882D8;
    func_00447430();
    func_00447438(arg0);
}
