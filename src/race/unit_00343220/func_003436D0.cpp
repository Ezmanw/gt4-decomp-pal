struct Limits;

extern Limits D_00620320;

extern "C" float func_00350910(Limits *l);

struct Obj {
    char pad0[4];
    float value;
    char pad[12];
    unsigned char locked;
};

extern "C" void func_003436D0(Obj *o, float v) {
    if (o->locked)
        return;
    Limits *l = &D_00620320;
    if (func_00350910(l) < v)
        o->value = func_00350910(l);
    else
        o->value = v;
}
