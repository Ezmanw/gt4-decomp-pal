typedef float f32;

struct Obj_00397CE0 {
    char pad0[0x30];
    f32 m30;
    f32 m34;
    char pad38[0x28];
    char m60[4];
};

extern "C" void func_00398210(Obj_00397CE0 *o);
extern "C" void func_003989E0(Obj_00397CE0 *o);
extern "C" void func_00398098(void *p, f32 t);
extern "C" void func_00398168(Obj_00397CE0 *o);
extern "C" void func_00398048(Obj_00397CE0 *o);
extern "C" void func_00456C88(f32 v);
extern "C" void func_00456C78(f32 v);

extern "C" void func_00397FD8(Obj_00397CE0 *o) {
    func_00398210(o);
    func_003989E0(o);
    func_00398098(o->m60, 1.0f);
    func_00398168(o);
    func_00398048(o);
    func_00456C88(o->m34);
    func_00456C78(o->m34 * o->m30);
}
