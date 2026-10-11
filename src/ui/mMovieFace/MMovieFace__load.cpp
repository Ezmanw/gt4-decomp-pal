typedef int s32;

struct Handle {
    void *p;
    char pad[0xC];
};

extern "C" void func_0021DAD0(void *arg0, int arg1);
extern "C" void func_0021DB28(void *arg0, void *arg1);
extern "C" void func_0021FDD0(void *arg0, void *arg1, char *arg2);
extern "C" void func_0022AE20(void *arg0, int arg1);
extern "C" void func_0022AE78(void *arg0, void *arg1);
extern "C" void func_00312470(void *arg0, int arg1);
extern "C" void func_003124C8(void *arg0, void *arg1);
extern "C" char *func_00314C30(void *arg0);

extern "C" void MMovieFace__load(void *arg0, void *arg1, s32 n, void **args) {
    if (n >= 2) {
        Handle h0;
        Handle b;
        Handle c;
        Handle *pb;
        Handle *pc;
        func_0021DB28(&h0, arg1);
        pb = &b;
        func_0022AE78(pb, args);
        pc = &c;
        func_003124C8(pc, args + 1);
        {
            void *bp = pb->p;
            void *hp = h0.p;
            func_0021FDD0(hp, bp, func_00314C30(pc->p));
        }
        func_00312470(pc, 2);
        func_0022AE20(pb, 2);
        func_0021DAD0(&h0, 2);
    }
}
