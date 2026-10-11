typedef float f32;

struct Self { char pad[0x38]; f32 m38, m3C; };
extern f32 D_0062150C;
extern "C" void func_00398190(void);

extern "C" void func_003980F0(Self *self) {
    D_0062150C = 0x1.000000p+0f / (self->m3C * self->m38);
    func_00398190();
}
