typedef int s32;

struct Buf {
    s32 val;
    char pad[0xC];
};

extern "C" void func_00192A28(void *arg0, int arg1);
extern "C" void func_00192A80(void *arg0, void *arg1);
extern "C" void func_00192ED0(s32 arg0, const char *arg1);

extern "C" void func_001957D8(void *arg0, void *arg1) {
    struct Buf buf;
    func_00192A80(&buf, arg1);
    func_00192ED0(buf.val, "car");
    func_00192A28(&buf, 2);
}
