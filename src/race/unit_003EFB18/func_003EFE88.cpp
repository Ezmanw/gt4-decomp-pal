typedef int s32;

struct Tmp { s32 pad[4]; s32 m10; s32 pad2[3]; };
struct Self { s32 m0; };
extern char D_006A3F58[];
extern "C" void func_004AE230(Tmp *, char *, s32);
extern "C" void func_004547E8(s32);

extern "C" void func_003EFE88(Self *self) {
    Tmp t;
    func_004AE230(&t, D_006A3F58, 1);
    self->m0 = t.m10;
    func_004547E8(t.m10);
}
