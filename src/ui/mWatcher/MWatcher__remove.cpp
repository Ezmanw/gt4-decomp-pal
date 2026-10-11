typedef int s32;

struct Buf002542C8 {
    void *unk0;
    char pad[0xC];
};

struct Target002542C8 {
    char pad[0x10];
    s32 unk10;
};

extern "C" void func_00254268(struct Buf002542C8 *arg0);
extern "C" void func_00254210(struct Buf002542C8 *arg0, int arg1);

extern "C" void MWatcher__remove(void) {
    struct Buf002542C8 buf;
    struct Target002542C8 *p;

    func_00254268(&buf);
    p = (struct Target002542C8 *)buf.unk0;
    p->unk10 = 1;
    func_00254210(&buf, 2);
}
