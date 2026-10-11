typedef int s32;

struct Obj {
    s32 a;
    s32 h;
    s32 pad[2];
    s32 w;
    s32 x;
    s32 y;
    s32 z;
    s32 bpp;
};

extern "C" void func_00331130(s32, s32, s32, s32, s32);

extern "C" void func_003312C8(Obj *o) {
    func_00331130(o->h, o->w * o->bpp, o->x, o->y * o->z, 0x10);
}
