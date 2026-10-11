struct Obj {
    char pad0[0x20];
    float m20;
    float m24;
};

extern "C" float func_003705C8(Obj *o, int axis, float cur, float target, float rate);

extern "C" void func_00370780(Obj *o, float x, float y) {
    float rate = 0x1.999998p-3f;
    o->m20 = func_003705C8(o, 1, o->m20, x, rate);
    o->m24 = func_003705C8(o, 0, o->m24, y, rate);
}
