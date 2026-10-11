extern int func_00266520(int);
extern int func_00266550(int);

struct func_002E96F8_arg0 {
    char pad0[0xC4];
    int unkC4;
};

int func_002E96F8(void *arg0, int arg1)
{
    if (((struct func_002E96F8_arg0 *)arg0)->unkC4 != 0) {
        return func_00266520(arg1);
    }
    return func_00266550(arg1);
}
