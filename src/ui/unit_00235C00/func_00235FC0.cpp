typedef int s32;

struct S { char pad[0xEC]; s32 unkEC; };

extern "C" void func_00235FC0(S *arg0, s32 arg1) {
    arg0->unkEC = arg1;
}
