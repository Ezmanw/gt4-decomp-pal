typedef int s32;

struct Obj00245240 {
    char pad[0x104];
    s32 unk104;
};

extern "C" void func_002B7328(void *arg0, s32 arg1);

extern "C" void *func_00245398(void *arg0, struct Obj00245240 *arg1) {
    void *s0 = arg0;

    func_002B7328(arg0, arg1->unk104);
    return s0;
}
