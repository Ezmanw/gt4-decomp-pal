typedef signed char s8;

struct Struct_002A3A30 {
    char pad[0xEE];
    s8 unkEE;
    s8 unkEF;
};

extern "C" void func_002A39F8(Struct_002A3A30 *arg0);

extern "C" void func_002A3B88(Struct_002A3A30 *arg0, s8 arg1, s8 arg2) {
    arg0->unkEE = arg1;
    arg0->unkEF = arg2;
    func_002A39F8(arg0);
}
