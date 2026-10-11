typedef int s32;

struct B { char pad[0x24]; s32 arr[1]; };

extern "C" void func_002511A0(struct B *arg0, s32 arg1, s32 arg2) {
    arg0->arr[arg1] = arg2;
}
