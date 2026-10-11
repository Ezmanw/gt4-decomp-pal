typedef int s32;

struct Buf002839C8 {
    void *unk0;
    char pad[0xC];
};

extern "C" void func_00283860(struct Buf002839C8 *arg0);
extern "C" void func_00284308(void *arg0, s32 arg1);
extern "C" void func_00283808(struct Buf002839C8 *arg0, int arg1);

extern "C" void MChaseActor__doStop(void) {
    struct Buf002839C8 buf;

    func_00283860(&buf);
    func_00284308(buf.unk0, 1);
    func_00283808(&buf, 2);
}
