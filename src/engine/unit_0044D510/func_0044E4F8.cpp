struct Obj {
    int a;
    int b;
};

extern "C" void func_0044E5B8(Obj *self, int b);
extern "C" void func_004917F0(void *mgr, int x, int y, int one, int zero);
extern "C" void func_0044E720(Obj *self);
extern void *PDISTD__global_font_manager;

extern "C" void func_0044E4F8(Obj *self, int x, int y)
{
    func_0044E5B8(self, self->b);
    func_004917F0(PDISTD__global_font_manager, x, y, 1, 0);
    func_0044E720(self);
}
