struct Name { const char *str; int pad[3]; };

extern "C" void func_002FCA20(Name *self, const char *s);
extern "C" void func_002FC9C8(Name *self, int flags);
extern "C" int func_002FE3A8(const char *s);
extern "C" void func_001FE528(void *target, int on);
extern "C" char D_00618E40[];

extern "C" void MMovieFace__setPause(void *self, int argc, const char *arg)
{
    int on = 1;
    if (argc > 0) {
        Name n;
        func_002FCA20(&n, arg);
        on = func_002FE3A8(n.str) != 0;
        func_002FC9C8(&n, 2);
    }
    func_001FE528(D_00618E40, on);
}
