typedef int s32;
typedef float f32;

struct Obj {
    s32 kind;
};

extern "C" s32 func_0026F050(Obj *);
extern "C" s32 func_0026F410(Obj *, f32);

extern "C" s32 func_0026F1B8(Obj *self) {
    switch (self->kind) {
    case 0:
        return func_0026F410(self, 0.0f);
    case 1:
    case 2:
        return func_0026F050(self);
    }
    return 0;
}
