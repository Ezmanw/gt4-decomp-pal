struct Ctx { int handle; int pad[3]; };
struct Str { int p; int pad[3]; int get() const { return p; } };
extern "C" void func_002E3D18(Ctx *c);
extern "C" void func_002E3CC0(Ctx *c, int flags);
extern "C" void func_00243620(Str *s, const char *text);
extern "C" void func_002435C8(Str *s, int flags);
extern "C" void func_002E44B0(int handle, int str);

extern "C" void MTextActor__global_0083B7C8(void *self, void *unused, int argc, const char *arg)
{
    if (argc > 0) {
        Ctx c;
        func_002E3D18(&c);
        Str s;
        func_00243620(&s, arg);
        func_002E44B0(c.handle, s.get());
        func_002435C8(&s, 2);
        func_002E3CC0(&c, 2);
    }
}
