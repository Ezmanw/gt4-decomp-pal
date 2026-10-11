typedef int s32;

struct Buf00109C40 {
    s32 unk0;
    char pad4[0xC];
};

extern "C" void func_00254268(struct Buf00109C40 *arg0);
extern "C" void func_00254948(s32 arg0);
extern "C" void func_00254210(struct Buf00109C40 *arg0, s32 arg1);

extern "C" void MWatcher__append(void) {
    struct Buf00109C40 buf;

    func_00254268(&buf);
    func_00254948(buf.unk0);
    func_00254210(&buf, 2);
}
