typedef int s32;

struct Struct_003446B8;

struct Obj {
    char pad[4];
    struct Struct_003446B8 *unk4;
};

extern "C" s32 func_00344810(struct Struct_003446B8 *arg0);

extern "C" s32 func_003D7850(struct Obj *arg0) {
    return func_00344810(arg0->unk4) != 0;
}
