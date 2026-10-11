struct Joint;

struct Obj {
    char pad[0x7C];
    char springs[0xC];
    float strength;
};

extern "C" void DynamicsConductor__ComputeDifference(Obj *o, Joint *a, Joint *b, int *ival, float *fval);
extern "C" void func_00365810(void *springs, Joint *a, Joint *b, int ival, float fval);

extern "C" void func_003658A8(Obj *o, Joint *a, Joint *b) {
    int iv;
    float fv;
    if (o->strength == 0.0f)
        return;
    DynamicsConductor__ComputeDifference(o, a, b, &iv, &fv);
    func_00365810(o->springs, a, b, iv, fv);
    func_00365810(o->springs, b, a, -iv, -fv);
}
