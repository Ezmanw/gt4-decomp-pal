typedef int s32;

struct Val { s32 type; s32 v; };
extern "C" void func_00476C98(Val *);
extern "C" void *exception__structor_0(s32 size);
extern "C" void func_0047A650(void *self, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);

extern "C" void func_00476FC0(Val *self, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f) {
    s32 type = 13;
    void *o;
    func_00476C98(self);
    self->type = type;
    o = exception__structor_0(0x20);
    func_0047A650(o, a, b, c, d, e, f);
    self->v = (s32)o;
}
