typedef int s32;
typedef unsigned char u8;

struct Obj {
    char pad[0x23];
    u8 unk23;
};

extern "C" s32 func_0035A060(u8 arg0);

extern "C" s32 func_0035A088(Obj *arg0) {
    return func_0035A060(arg0->unk23);
}
