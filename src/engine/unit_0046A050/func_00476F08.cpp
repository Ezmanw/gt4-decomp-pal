typedef int s32;

struct Val { s32 type; s32 v; };
extern "C" void func_00476C98(Val *);

extern "C" void func_00476F08(Val *self, s32 v) {
    s32 type = 5;
    func_00476C98(self);
    self->type = type;
    self->v = v;
}
