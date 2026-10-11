typedef int s32;

/* Classes named after their constructors (func_00137DC0, func_0013BDC8); their sizes are only
   bounded by the frame (the first takes 0x11-0x20 bytes, the second at most 0x10). */
struct func_00137DC0 {
    void *p;
    char data[0x1C];
    func_00137DC0(void *src);
    ~func_00137DC0() { func_00137D68(this, 2); }
    static void func_00137D68(func_00137DC0 *self, s32 flags);
};

struct func_0013BDC8 {
    void *p;
    char data[0xC];
    func_0013BDC8(void *src);
    ~func_0013BDC8() { func_0013BD70(this, 2); }
    static void func_0013BD70(func_0013BDC8 *self, s32 flags);
};

extern "C" void func_0013A9E8(void *obj, func_0013BDC8 *arg);

extern "C" void MCarFace__set_car_garage(void *self, void *a, void *b, void *c) {
    func_00137DC0 x(a);
    void *obj = x.p;
    func_0013BDC8 y(c);
    func_0013A9E8(obj, &y);
}
