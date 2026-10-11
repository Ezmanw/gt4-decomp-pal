typedef unsigned char u8;
typedef float f32;

struct Self { char pad[4]; f32 m4; char pad2[0xC]; u8 m14; };
extern char D_00620320[];
extern "C" f32 func_003508E8(char *);

extern "C" void func_003437B0(Self *self) {
    if (self->m14 == 0) {
        self->m4 = func_003508E8(D_00620320);
    }
}
