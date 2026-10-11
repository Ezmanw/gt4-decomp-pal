typedef int s32;

extern "C" void func_0025A938(void *buf, void *arg1);
extern "C" void func_0026A9A0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
extern "C" void func_0026A270(void *buf, s32 arg1);
extern "C" void func_0021B678(void *buf, void *arg1);
extern "C" void func_00153FD0(s32 arg0, void *buf);
extern "C" void func_0021B690(void *arg0, s32 arg1);

struct ObjA {
    char pad[0x2A4];
    s32 unk2A4;
};

extern "C" void func_0013A4B0(ObjA *arg0, s32 arg1) {
    s32 buf0[4];
    s32 buf1[4];
    s32 *p1 = buf1;

    func_0025A938(p1, arg0);
    func_0026A9A0(buf0, *p1, arg1, 1, 0, 1);
    func_0026A270(p1, 2);
    if (buf0[0] != 0) {
        func_0021B678(p1, buf0);
        func_00153FD0(arg0->unk2A4, p1);
    }
    func_0021B690(buf0, 2);
}
