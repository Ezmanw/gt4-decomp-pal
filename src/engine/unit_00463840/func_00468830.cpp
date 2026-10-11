typedef float f32;

struct Inner {
    char pad[0xFE0];
    f32 unkFE0;
};

struct Obj {
    char pad[0x10];
    Inner *unk10;
};

extern "C" f32 func_004687F0(f32 arg0);

extern "C" f32 func_00468830(Obj *arg0) {
    return func_004687F0(arg0->unk10->unkFE0);
}
