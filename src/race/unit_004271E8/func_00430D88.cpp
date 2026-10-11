typedef unsigned int u32;

struct Obj { u32 unk0; };

extern "C" void func_00430D88(Obj *arg0) {
    arg0->unk0 = arg0->unk0 | 0xF000;
}
