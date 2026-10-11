typedef int s32;
typedef float f32;

struct Vec2 {
    f32 x;
    f32 y;
};

struct Param {
    char pad0[0x90];
    Vec2 pos;
};

struct Obj {
    char pad0[0x28];
    Param *cur;
};

extern "C" void func_00476988(Obj *self, f32 x, f32 y);
extern "C" void func_00475AD0(Obj *self);

extern "C" void func_00475C48(Obj *self, Param *p) {
    Vec2 *v = &p->pos;
    if (self->cur != p) {
        self->cur = p;
        func_00476988(self, v->x, v->y);
        func_00475AD0(self);
    }
}
