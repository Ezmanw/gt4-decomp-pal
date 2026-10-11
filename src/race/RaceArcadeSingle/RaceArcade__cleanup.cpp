typedef int s32;

struct Obj;

extern "C" void RaceBasic__cleanup(Obj *arg0);
extern "C" void func_0038BAB8(Obj *arg0, s32 arg1);
extern "C" void func_0038BBD0(Obj *arg0, s32 arg1);
extern "C" void func_0038BC88(Obj *arg0, s32 arg1);
extern "C" void func_0038BD88(Obj *arg0, s32 arg1);
extern "C" void func_0038BDA8(Obj *arg0, s32 arg1);

extern "C" void RaceArcade__cleanup(Obj *arg0) {
    Obj *s0 = arg0;
    RaceBasic__cleanup(arg0);
    func_0038BAB8(s0, 0);
    func_0038BBD0(s0, 0);
    func_0038BDA8(s0, 0);
    func_0038BC88(s0, 0);
    func_0038BD88(s0, 0);
}
