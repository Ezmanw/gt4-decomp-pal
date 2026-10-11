struct Obj {
    int f0;
    int f4;
    int pad[14];
    Obj() __asm__("func_00105270");
    ~Obj() __asm__("func_001052A0");
    void setA(int a) __asm__("func_00105418");
    void setSize(int w, int h) __asm__("func_00105480");
};

extern "C" void func_001009C8(Obj *o);

extern "C" void func_001009F0(void) {
    Obj o;
    o.setA(0);
    o.f4 = 0;
    o.setSize(0x400, 0x400);
    func_001009C8(&o);
}
