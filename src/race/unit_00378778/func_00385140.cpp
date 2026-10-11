struct Obj {
    float base;
    float scaled;
    float maxValue;
    float minValue;
    float gain;
    char sub[0x104];
    float limit;
    char sub2[4];
};

extern "C" float func_0036EE48(float x);
extern "C" void func_00385070(void *sub, float x);
extern "C" void func_00384EE0(void *sub, void *arg);

extern "C" void func_00385140(Obj *o, void *arg, float x, float unused, float limit) {
    o->base = x;
    o->scaled = func_0036EE48(x);
    o->maxValue = 600.0f;
    o->minValue = -60.0f;
    o->gain = 1.0f;
    o->limit = limit;
    func_00385070(o->sub, x);
    func_00384EE0(o->sub2, arg);
}
