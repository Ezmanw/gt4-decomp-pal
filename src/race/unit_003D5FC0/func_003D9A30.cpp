struct Obj {
    char pad[0x1C];
    int active;
    int busy;
};

extern "C" unsigned int func_00426E78(void *pad);
extern "C" void func_003D9F30(Obj *o, int what);

extern "C" void func_003D9A30(Obj *o, void *pad) {
    if (o->active == 0 || o->busy != 0)
        return;
    unsigned int mask = 0x3800E;
    unsigned int buttons = func_00426E78(pad);
    if (buttons & 1)
        func_003D9F30(o, 1);
    if (buttons & mask)
        func_003D9F30(o, 2);
}
