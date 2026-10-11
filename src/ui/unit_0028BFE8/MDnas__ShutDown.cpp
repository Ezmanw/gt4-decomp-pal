typedef int s32;

struct Buf00109C40 {
    s32 unk0;
    char pad4[0xC];
};

extern "C" void func_0028BF00(struct Buf00109C40 *arg0);
extern "C" void func_0028D208(s32 arg0);
extern "C" void func_0028BEA8(struct Buf00109C40 *arg0, s32 arg1);

extern "C" void MDnas__ShutDown(void) {
    struct Buf00109C40 buf;

    func_0028BF00(&buf);
    func_0028D208(buf.unk0);
    func_0028BEA8(&buf, 2);
}
