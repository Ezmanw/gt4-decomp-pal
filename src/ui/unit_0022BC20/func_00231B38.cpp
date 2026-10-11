typedef int s32;

struct Obj { char pad[0x6D0]; s32 unk6D0; };

extern "C" s32 func_00231B38(Obj *arg0) {
    return arg0->unk6D0;
}
