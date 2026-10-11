typedef signed char s8;

struct Struct_002A39F0 {
    char pad[0xEC];
    s8 unkEC;
    s8 unkED;
};

extern "C" void func_002A39F8(Struct_002A39F0 *arg0);

extern "C" void func_002A3B48(Struct_002A39F0 *arg0, s8 arg1, s8 arg2) {
    arg0->unkEC = arg1;
    arg0->unkED = arg2;
    func_002A39F8(arg0);
}
