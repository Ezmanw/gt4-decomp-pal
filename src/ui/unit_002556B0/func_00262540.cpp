typedef int s32;

struct Obj002676A8;

extern "C" void func_00262110(s32 arg0, s32 arg1);
extern "C" void func_00267800(struct Obj002676A8 *arg0, s32 arg1);

extern "C" void func_00262540(void *arg0, s32 arg1) {
    func_00262110(arg1, (s32)((char *)arg0 + 0x34));
    func_00267800((struct Obj002676A8 *)arg0, 2);
}
