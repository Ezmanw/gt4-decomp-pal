#include "types.h"
void *memcpy(void *, const void *, unsigned int);

s32 func_0035BDD8();                            /* extern */
s32 func_0035BF78(void *);                      /* extern */

struct func_0035BFC8_arg0 {
    char pad0[0x56A];
    s8 unk56A;
};

void func_0035BFC8(struct func_0035BFC8_arg0 *arg0) {
    if (arg0->unk56A == 2) {
        return;
    }
    func_0035BDD8();
    func_0035BF78(arg0);
}
