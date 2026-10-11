struct Obj {
    char pad[0x14];
    unsigned char locked;
};

extern "C" void func_003436D0(Obj *o, float v);
extern "C" void func_003437F0(Obj *o, float v);
extern "C" void func_00343AD0(Obj *o, float v);

extern "C" void func_00343578(Obj *o, int locked)
{
    if (!o->locked && locked) {
        func_003436D0(o, 0.0f);
        func_003437F0(o, 0.0f);
        func_00343AD0(o, 0.0f);
    }
    o->locked = locked;
}
