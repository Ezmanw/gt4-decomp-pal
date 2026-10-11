#include "types.h"
#define NULL 0
extern "C" {
void func_0048F3E0(s32 *, s32 *) throw();
void func_0048F500(s32 *, s32 *) throw();
void func_0048F820(void *);
}
struct Pair { s32 *a; s32 *b; };
extern "C" void func_0048F798(Pair *self, s32 *data) {
    func_0048F820(self);
    if (data != NULL) {
        if (*data == 0x31627067) {
            func_0048F3E0(data, data);
            self->a = data;
            self->b = NULL;
        }
        if (*data == 0x32627067) {
            func_0048F500(data, data);
            self->a = NULL;
            self->b = data;
        }
    }
}
