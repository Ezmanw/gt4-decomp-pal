typedef int s32;

struct Val { s32 type; s32 v; };
extern "C" void func_00476C98(Val *);
extern "C" s32 func_00476A28(const char *);

extern "C" void func_00476E70(Val *self, const char *s) {
    s32 type = 3;
    func_00476C98(self);
    self->type = type;
    self->v = func_00476A28(s);
}
