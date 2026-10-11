typedef long long s64;

struct Obj {
    char pad0[0x100];
    s64 unk100;
};

extern "C" void func_00447270(s64 arg0);

extern "C" void func_004472E8(Obj *arg0) {
    func_00447270(arg0->unk100);
}
