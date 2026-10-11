extern "C" void func_003BDD00(void *obj);
extern "C" void func_003BDD38(void *obj, int flags);
extern "C" void func_0057B168(void *obj, const char *name);
extern "C" char D_008442A8[];
extern "C" char D_00844340[];
extern "C" char D_006A0020[];

extern "C" void func_0038A800(int init, int prio)
{
    if (prio == 0xFFFF && init == 1)
        func_003BDD00(D_008442A8);
    if (prio == 0xFFFF && init == 1)
        func_0057B168(D_00844340, D_006A0020);
    if (prio == 0xFFFF && init == 0)
        func_003BDD38(D_008442A8, 2);
}
