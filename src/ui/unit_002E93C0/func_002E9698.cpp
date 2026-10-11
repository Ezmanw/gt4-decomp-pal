extern int func_002664C0(int);
extern int func_002664F0(int);

struct func_002E9698_arg0 {
    char pad0[0xC4];
    int unkC4;
};

int func_002E9698(void *arg0, int arg1)
{
    if (((struct func_002E9698_arg0 *)arg0)->unkC4 != 0) {
        return func_002664C0(arg1);
    }
    return func_002664F0(arg1);
}
