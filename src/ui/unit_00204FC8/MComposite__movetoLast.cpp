struct Ctx { int handle; int pad[3]; };
struct Str { int p; int pad[3]; int get() const { return p; } };
extern "C" void func_00204E48(Ctx *c);
extern "C" void func_00204DF0(Ctx *c, int flags);
extern "C" void func_00255268(Str *s, const char *text);
extern "C" void func_00255210(Str *s, int flags);
extern "C" void func_00206F80(int handle, int str);

extern "C" void MComposite__movetoLast(void *self, void *unused, int argc, const char *arg)
{
    if (argc > 0) {
        Ctx c;
        func_00204E48(&c);
        Str s;
        func_00255268(&s, arg);
        func_00206F80(c.handle, s.get());
        func_00255210(&s, 2);
        func_00204DF0(&c, 2);
    }
}
