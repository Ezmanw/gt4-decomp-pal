typedef int s32;

extern "C" s32 func_003D8F28(void *) throw();
extern "C" s32 func_003DA098(void *);
extern "C" s32 func_003DA0C0(void *);
extern "C" s32 func_003DA0E8(void *);
extern "C" s32 func_003DA140(void *);
extern "C" s32 func_00426E78(s32);

extern "C" void func_003D9B48(char *self, s32 id) {
    s32 flags;
    s32 state;

    flags = func_00426E78(id);
    if (flags & 0x3000C) {
        state = 3;
        if (func_003D8F28(self) != 0) {
            if (flags & 4) {
                state = (func_003DA0C0(self) != 0) ? 2 : 3;
            }
            if (flags & 8) {
                state = (func_003DA098(self) != 0) ? 2 : state;
            }
            if (flags & 0x10000) {
                state = (func_003DA0E8(self) != 0) ? 6 : state;
            }
            if (flags & 0x20000) {
                state = (func_003DA140(self) != 0) ? 6 : state;
            }
        }
        *(s32 *)(self + 0x9C) = state;
    }
}
