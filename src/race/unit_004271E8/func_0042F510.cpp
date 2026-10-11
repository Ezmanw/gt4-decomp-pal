typedef int s32;

struct LocalBuf {
    char unk0;
    char pad[0xF];
};

extern "C" void func_0042F458(s32 arg0, LocalBuf *arg1);

extern "C" void func_0042F510(s32 arg0) {
    LocalBuf local;
    local.unk0 = 0;
    func_0042F458(arg0, &local);
}
