typedef int s32;

extern "C" void func_00329260(s32 arg0, void *arg1);

extern "C" void func_003295F0(void *arg0) {
    s32 *vtbl = *(s32 **)((char *)arg0 - 4);
    func_00329260(*vtbl, arg0);
}
