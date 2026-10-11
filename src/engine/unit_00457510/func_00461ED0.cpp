typedef float f32;

extern char D_008468E8[];

extern "C" void func_00576788(void *lock);
extern "C" void func_005767C0(void *lock);
extern "C" void func_004613B8(f32 v);

extern "C" void func_00461ED0(f32 v) {
    func_00576788(D_008468E8);
    func_004613B8(v);
    func_005767C0(D_008468E8);
}
