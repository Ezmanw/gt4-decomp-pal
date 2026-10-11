typedef int s32;

struct Buf00109C40 {
    s32 unk0;
    char pad4[0xC];
};

extern "C" void func_002E2190(struct Buf00109C40 *arg0);
extern "C" void func_002E2A48(s32 arg0);
extern "C" void func_002E2138(struct Buf00109C40 *arg0, s32 arg1);

extern "C" void MSwitchActor__end(void) {
    struct Buf00109C40 buf;

    func_002E2190(&buf);
    func_002E2A48(buf.unk0);
    func_002E2138(&buf, 2);
}
