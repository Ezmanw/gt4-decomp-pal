extern "C" void mPop__structor_0(int arg0);
extern "C" int func_003268A8(int arg0, int arg1, char *arg2);
extern char D_0069E298[];
extern int D_00619E34;

extern "C" int func_0031E830(int arg0)
{
    if (arg0 == 0) {
        D_00619E34 = 0;
    } else if (D_00619E34 == 0) {
        int s0 = func_003268A8(8, 4, D_0069E298);
        mPop__structor_0(s0);
        D_00619E34 = s0;
    }
    return D_00619E34;
}
