typedef int s32;

struct SomeStruct {
    char pad[4];
    s32 unk4;
};

extern void func_003E7670(s32);

extern "C" void func_003E7720(struct SomeStruct *arg0) {
    s32 temp_v0 = arg0->unk4;
    if (temp_v0 != 0) {
        func_003E7670(temp_v0);
    }
}
