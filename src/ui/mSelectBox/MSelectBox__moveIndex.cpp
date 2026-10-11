typedef int s32;

struct Handle {
    void *p;
    char pad[0xC];
};

extern "C" void func_002D8C08(void *arg0, int arg1);
extern "C" void func_002D8C60(void *arg0, void *arg1);
extern "C" void func_002DB1D8(void *arg0, void *arg1, char *arg2);
extern "C" void func_0022AE20(void *arg0, int arg1);
extern "C" void func_0022AE78(void *arg0, void *arg1);
extern "C" void func_002FC9C8(void *arg0, int arg1);
extern "C" void func_002FCA20(void *arg0, void *arg1);
extern "C" char *func_002FE3A8(void *arg0);

extern "C" void MSelectBox__moveIndex(void *arg0, void *arg1, s32 n, void **args) {
    if (n >= 2) {
        Handle h0;
        Handle b;
        Handle c;
        Handle *pb;
        Handle *pc;
        func_002D8C60(&h0, arg1);
        pb = &b;
        func_0022AE78(pb, args);
        pc = &c;
        func_002FCA20(pc, args + 1);
        {
            void *bp = pb->p;
            void *hp = h0.p;
            func_002DB1D8(hp, bp, func_002FE3A8(pc->p));
        }
        func_002FC9C8(pc, 2);
        func_0022AE20(pb, 2);
        func_002D8C08(&h0, 2);
    }
}
