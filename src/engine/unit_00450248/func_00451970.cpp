struct Obj {
    char pad0[0x80];
    int unk80;
};

extern "C" void func_00451970(Obj *arg0) {
    arg0->unk80 = 2;
}
