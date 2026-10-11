typedef int s32;

extern char D_003EC138;

struct Pair {
    s32 a;
    s32 b;
};

extern "C" void func_00474508(s32 arg0, Pair *arg1);

extern "C" void func_003EC190(s32 arg0) {
    if (arg0 != 0) {
        Pair local;
        local.b = 0;
        local.a = (s32)&D_003EC138;
        func_00474508(arg0, &local);
    }
}
