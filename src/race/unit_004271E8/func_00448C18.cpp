typedef short s16;

struct Obj { char pad[0xC]; s16 unkC; };

extern "C" s16 func_00448C18(Obj *arg0) {
    return arg0->unkC;
}
