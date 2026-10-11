typedef signed char s8;

struct Struct_00437E98 {
    char pad[6];
    s8 unk6;
};

extern "C" void func_00438230(struct Struct_00437E98 *arg0);

extern "C" void func_00438210(struct Struct_00437E98 *arg0, s8 arg1) {
    arg0->unk6 = arg1;
    func_00438230(arg0);
}
