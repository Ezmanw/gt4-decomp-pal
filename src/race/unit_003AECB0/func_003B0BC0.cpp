typedef int s32;
typedef unsigned char u8;

struct Obj {
    u8 pad[0x690];
    s32 unk690;
};

extern "C" void func_003B07C8(char *arg0);
extern "C" void func_004193E8(void);

extern "C" void func_003B0BC0(Obj *arg0) {
    func_004193E8();
    func_003B07C8((char *)arg0 + 0x680);
    arg0->unk690 = 0;
}
