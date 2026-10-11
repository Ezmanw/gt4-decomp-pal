typedef int s32; typedef unsigned int u32; typedef float f32;

struct Color {
    f32 r;
    f32 g;
    f32 b;
    f32 a;
};

struct Owner {
    s32 pad0;
    char *slots;
};

struct Color *func_00203160(struct Color *);
void func_002031A8(void *, struct Color *);
void func_002031D8(struct Color *, s32);

void func_005CA708(struct Owner *self, u32 i, f32 r, f32 g, f32 b, f32 a) {
    if (i < 4) {
        struct Color c;
        func_00203160(&c);
        c.r = r;
        c.g = g;
        c.b = b;
        c.a = a;
        func_002031A8(self->slots + i * 0x54 + 0x28, &c);
        func_002031D8(&c, 2);
    }
}
