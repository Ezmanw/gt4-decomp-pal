struct Arg {
    int a;
    int b;
    char *p;
};

extern "C" float func_00477838(void *v);
extern "C" void func_00481378(Arg *arg, void *ctx);

extern "C" float func_0047BEC0(void *ctx, Arg *arg)
{
    float v;
    if (ctx != 0) {
        v = func_00477838(arg->p - 8);
    } else {
        v = 0.0f;
    }
    func_00481378(arg, ctx);
    if (v < 0.0f) {
        return (float)(int)(v + -0.5f);
    }
    return (float)(int)(v + 0.5f);
}
