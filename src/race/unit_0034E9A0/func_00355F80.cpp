typedef unsigned char u8;

struct Obj00355E10 {
    u8 pad0[0x78D];
    u8 unk78D;
};

extern "C" int func_00355EB8(struct Obj00355E10 *arg0);

extern "C" void func_00355F80(struct Obj00355E10 *arg0) {
    if (func_00355EB8(arg0) != 0) {
        arg0->unk78D = 0;
    }
}
