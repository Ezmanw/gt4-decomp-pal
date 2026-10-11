struct Obj;
extern "C" float func_00355EF0(Obj *o);
extern "C" void func_00355FB0(Obj *o, float d);
extern "C" void func_00355ED0(Obj *o, float v);

extern "C" float func_00356078(Obj *o, float x) {
    float have = func_00355EF0(o);
    func_00355FB0(o, -x);
    if (have < x) {
        float d = x - have;
        have = 0.0f;
        x -= d;
    } else {
        have -= x;
    }
    func_00355ED0(o, have);
    return x;
}
