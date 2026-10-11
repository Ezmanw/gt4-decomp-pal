typedef int s32;

struct Inner {
    char pad[0x70];
    s32 unk70;
};

struct Obj {
    Inner *inner;
};

extern "C" void func_00475B98(Obj *arg0) {
    arg0->inner->unk70 = 1;
}
