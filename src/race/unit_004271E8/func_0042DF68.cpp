struct Obj {
    char pad0[0x4];
    void *unk4;
};

extern "C" void func_0042DF68(Obj *arg0) {
    arg0->unk4 = (char *)arg0 + 8;
}
