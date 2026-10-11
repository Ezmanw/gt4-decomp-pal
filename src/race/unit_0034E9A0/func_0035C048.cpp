typedef unsigned short u16;

struct Obj {
    char pad[0x5BE];
    u16 unk5BE;
};

extern "C" void func_00363108(Obj *arg0);

extern "C" void func_0035C048(Obj *arg0) {
    if (arg0->unk5BE != 0) {
        func_00363108(arg0);
    }
}
