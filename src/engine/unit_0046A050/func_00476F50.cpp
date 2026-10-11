typedef int s32;
typedef float f32;

struct Val { s32 type; f32 v; };
extern "C" void func_00476C98(Val *);

extern "C" void func_00476F50(Val *self, f32 v) {
    s32 type = 6;
    func_00476C98(self);
    self->type = type;
    self->v = v;
}
