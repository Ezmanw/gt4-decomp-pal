typedef int s32;

extern char D_006184D0[];
extern char D_0068CB20[];

extern "C" void func_004A0398(s32 arg0);
extern "C" void func_00106308(void *arg0, s32 arg1);
extern "C" void func_004A13C8(void *arg0);

extern "C" void func_00107738(void) {
    func_004A0398(2);
    func_00106308(D_006184D0, 1);
    func_004A13C8(D_0068CB20);
}
