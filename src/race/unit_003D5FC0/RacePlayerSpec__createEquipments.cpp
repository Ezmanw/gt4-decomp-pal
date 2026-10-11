struct Obj {
    char pad0[0x166];
    unsigned char flag;
};

extern "C" void func_004447B8(Obj *o, long a);
extern "C" void func_00445BF8(Obj *o, int b);

extern "C" void RacePlayerSpec__createEquipments(Obj *o, long a, int b, int flag) {
    func_004447B8(o, a);
    func_00445BF8(o, b);
    o->flag = flag;
}
