typedef int s32;

struct Handle { s32 p; s32 pad[3]; };
extern s32 D_00618EF0;
extern "C" void func_002FCA20(Handle *, s32);
extern "C" s32 func_002FE3A8(s32);
extern "C" void func_002FC9C8(Handle *, s32);

extern "C" void MMovieFace__expandAlpha(void *self, s32 n, s32 x) {
    if (n > 0) {
        Handle h;
        func_002FCA20(&h, x);
        s32 r = func_002FE3A8(h.p);
        D_00618EF0 = r != 0;
        func_002FC9C8(&h, 2);
    }
}
