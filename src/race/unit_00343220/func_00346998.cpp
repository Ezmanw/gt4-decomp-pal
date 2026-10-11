struct Obj {
    int f0;
    int busy;
    char buf[0x5C - 8];
    int mode;
};

extern "C" char *D_0062023C;
extern "C" void func_00345CE8(void *buf, int mode, char *end);
extern "C" void func_003469E8(Obj *o, int arg);

extern "C" void func_00346998(Obj *o, int mode) {
    o->mode = mode;
    if (o->busy == 0) {
        return func_00345CE8(o->buf, mode, D_0062023C - 8);
    }
    func_003469E8(o, 0);
}
