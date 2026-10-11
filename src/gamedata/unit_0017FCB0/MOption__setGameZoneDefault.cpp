typedef int s32;

struct Inner {
    char pad0[0x10];
    s32 unk10;
};

struct Buf {
    struct Inner *ptr;
    char pad4[0xC];
};

extern "C" void func_0017FAF8(void *arg0, int arg1);
extern "C" s32 func_0017FB50(void *arg0);
extern "C" void func_004360C0(s32 arg0);

extern "C" void MOption__setGameZoneDefault(void) {
    struct Buf buf;
    struct Inner *p;

    func_0017FB50(&buf);
    p = buf.ptr;
    func_004360C0(p->unk10 + 0x11C8);
    func_0017FAF8(&buf, 2);
}
