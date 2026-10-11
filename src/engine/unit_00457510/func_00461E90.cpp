typedef int s32;

extern char D_008468E8[];

extern "C" void func_00576788(void *lock);
extern "C" void func_005767C0(void *lock);
extern "C" void func_00461440(s32 on);

extern "C" void func_00461E90(void) {
    func_00576788(D_008468E8);
    func_00461440(1);
    func_005767C0(D_008468E8);
}
