typedef int s32;

struct Buf00109C40 {
    s32 unk0;
    char pad4[0xC];
};

extern "C" void func_00304368(struct Buf00109C40 *arg0);
extern "C" void hModule__clearModuleValue(s32 arg0);
extern "C" void func_00304310(struct Buf00109C40 *arg0, s32 arg1);

extern "C" void Module__clearStatic(void) {
    struct Buf00109C40 buf;

    func_00304368(&buf);
    hModule__clearModuleValue(buf.unk0);
    func_00304310(&buf, 2);
}
