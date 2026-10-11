struct Obj { int m0; int handle; };
extern "C" void func_0044E5B8(Obj *self, int handle);
extern "C" void func_004917F0(void *sys, int arg, int a, int b, int c);
extern "C" void func_0044E720(Obj *self);
extern "C" void *PDISTD__global_font_manager;

extern "C" void GT3OLDFONT__GT3OldFontManagerClass__putstring(Obj *self, int arg)
{
    func_0044E5B8(self, self->handle);
    func_004917F0(PDISTD__global_font_manager, arg, 0, 0, 0);
    func_0044E720(self);
}
