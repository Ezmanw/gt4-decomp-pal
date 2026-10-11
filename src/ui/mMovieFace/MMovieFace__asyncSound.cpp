struct Name {
    const char *str;
    Name(const char *s) __asm__("func_002FCA20");
    ~Name() __asm__("func_002FC9C8");
};

extern "C" int func_002FE3A8(const char *s);
extern "C" int D_00618EE8;

extern "C" void MMovieFace__asyncSound(void *self, int count, const char *s) {
    int ok = 1;
    if (count > 0) {
        Name n(s);
        ok = func_002FE3A8(n.str) != 0;
    }
    D_00618EE8 = ok;
}
