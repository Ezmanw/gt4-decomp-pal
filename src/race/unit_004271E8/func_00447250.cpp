typedef long long s64;

struct Obj {
    char pad0[0xF0];
    s64 unkF0;
};

extern "C" void func_004471D8(s64 arg0);

extern "C" void func_00447250(Obj *arg0) {
    func_004471D8(arg0->unkF0);
}
