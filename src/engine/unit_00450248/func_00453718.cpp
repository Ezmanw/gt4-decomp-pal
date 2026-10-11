struct Inner {
    char pad[0x18];
    void *target;
};

struct Ctrl {
    Inner *inner;
    char pad[0x2C];
    int value;
};

extern "C" void *func_004513F8(Ctrl *c);
extern "C" void func_004556D8(void *target, int value, void *ctx);

extern "C" void func_00453718(Ctrl *c, int value)
{
    if (c->inner) {
        void *target = c->inner->target;
        void *ctx = func_004513F8(c);
        if (target && ctx) {
            c->value = value;
            func_004556D8(target, value, ctx);
        }
    }
}
