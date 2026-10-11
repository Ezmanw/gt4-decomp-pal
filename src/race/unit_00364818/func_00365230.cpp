typedef short s16;

struct Obj {
    char pad[0x14];
    s16 unk14;
};

extern "C" s16 func_00365230(Obj **arg0) {
    return (*arg0)->unk14;
}
