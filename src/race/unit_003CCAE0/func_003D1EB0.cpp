typedef int s32;

struct Self { char pad[0x9674]; s32 m9674; s32 m9678; };
extern "C" void func_003D1DB8(Self *, s32, s32, s32);

extern "C" void func_003D1EB0(Self *self, s32 a, s32 b) {
    self->m9678 = -1;
    self->m9674 = 0;
    func_003D1DB8(self, a, b, -1);
}
