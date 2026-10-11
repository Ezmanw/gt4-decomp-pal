typedef int s32;

struct Obj {
    s32 unk0;
};

extern "C" void func_004522B8(void *arg0, s32 arg1, s32 arg2);

extern "C" void RaceCarModel__virtual_25(Obj *arg0, s32 arg1) {
    func_004522B8((char *)arg0 + 0x18, arg0->unk0, arg1);
}
