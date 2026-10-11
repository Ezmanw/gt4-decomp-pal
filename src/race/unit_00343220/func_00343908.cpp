typedef int s32;
typedef float f32;

struct Obj {
    s32 a;
    s32 b;
    f32 t;
};

extern char D_00620320[];
extern "C" f32 func_00350998(void *);

extern "C" s32 func_00343908(Obj *self) {
    return func_00350998(D_00620320) <= self->t;
}
