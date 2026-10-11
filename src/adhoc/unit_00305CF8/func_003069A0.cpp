typedef int s32;

extern void func_0032E850(void *, void *, void *, void *);
extern void func_00306748(void *, void *);
extern void func_0032E5A0(void *, s32);
extern char D_00306998[];

void func_003069A0(void *arg0, void *arg1, void *arg2, void *arg3)
{
    char buf[0x10];

    if (arg2 == 0) {
        arg2 = D_00306998;
    }
    if (arg3 == 0) {
        arg3 = D_00306998;
    }

    func_0032E850(buf, arg1, arg2, arg3);
    func_00306748(arg0, buf);
    func_0032E5A0(buf, 2);
}
