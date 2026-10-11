typedef int s32;

struct Handle {
    s32 obj;
    char pad4[0xC];
};

extern "C" void func_0013BDC8(Handle *h, void *src);
extern "C" void func_0013BD70(Handle *h, s32 flags);
extern "C" void func_00147D10(s32 obj);
extern "C" void func_00147D58(s32 obj);

extern "C" void MCarGarage__beginSetting(void *self, void *src) {
    Handle h;
    func_0013BDC8(&h, src);
    func_00147D10(h.obj);
    func_0013BD70(&h, 2);
    func_0013BDC8(&h, src);
    func_00147D58(h.obj);
    func_0013BD70(&h, 2);
}
