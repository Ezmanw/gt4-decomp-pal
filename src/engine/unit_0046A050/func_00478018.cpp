typedef int s32;

struct Val;
extern "C" void func_00476C98(Val *);
extern "C" Val *func_00476B40(Val *, const Val *);

struct Val {
    s32 type;
    s32 v;
    Val() : type(1) {}
    Val(const Val &o) { func_00476B40(this, &o); }
    ~Val() { func_00476C98(this); }
};
struct Ctx { char pad[0x164]; s32 f164; };

extern "C" void func_00476DE0(Val *);
extern "C" Val func_00484D60(s32 v, s32 x, s32 y, Val *self, s32 z, s32 w, Ctx *ctx);
extern "C" Val func_0047BC88(s32 *v, s32 x, s32 z, s32 w, Ctx *ctx);
extern "C" Val func_0047CEE0(s32 *v, s32 x, s32 c, s32 z);
extern "C" Val func_0047C7A0(s32 x, s32 c, s32 z);
extern "C" Val func_0047CB50(s32 *v, s32 x, s32 c, s32 z);
extern "C" Val func_0047D218(Val *self, s32 x, s32 c, s32 z);

extern "C" Val func_00478018(Val *self, s32 x, s32 y, s32 z, s32 w, Ctx *ctx) {
    switch (self->type) {
    case 7:
        return func_00484D60(self->v, x, y, self, z, w, ctx);
    case 10:
        return func_0047BC88(&self->v, x, z, w, ctx);
    case 11:
        return func_0047CEE0(&self->v, x, ctx->f164, z);
    case 8:
        return func_0047C7A0(x, ctx->f164, z);
    case 9:
        return func_0047CB50(&self->v, x, ctx->f164, z);
    case 3:
    case 4:
        return func_0047D218(self, x, ctx->f164, z);
    default: {
        Val tmp;
        func_00476DE0(&tmp);
        return tmp;
    }
    }
}
