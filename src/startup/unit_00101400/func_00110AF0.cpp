struct Mat4 {
    float m[16];
};

struct Obj {
    char pad0[0x20];
    Mat4 mat;
};

extern "C" void func_00110AF0(Obj *o, const Mat4 *m) {
    o->mat = *m;
}
