struct Obj {
    char pad[0x18];
    float start;
};

extern "C" float func_003DE188(Obj *o) throw();

extern "C" float func_003DE228(Obj *o, float t) {
    if (t < 0.0f)
        return t;
    if (t < o->start)
        return t;
    float len = func_003DE188(o);
    return t - len * (float)(int)(len / t);
}
