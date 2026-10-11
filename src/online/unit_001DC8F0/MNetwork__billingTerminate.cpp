typedef int s32;

struct Buf00109C40 {
    s32 unk0;
    char pad4[0xC];
};

extern "C" void func_001DC690(struct Buf00109C40 *arg0);
extern "C" void func_001F8560(s32 arg0);
extern "C" void func_001DC638(struct Buf00109C40 *arg0, s32 arg1);

extern "C" void MNetwork__billingTerminate(void) {
    struct Buf00109C40 buf;

    func_001DC690(&buf);
    func_001F8560(buf.unk0);
    func_001DC638(&buf, 2);
}
