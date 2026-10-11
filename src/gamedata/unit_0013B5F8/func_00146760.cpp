typedef int s32;

struct S;

extern "C" s32 func_00147D88(S *arg0);
extern "C" s32 func_004415C0(s32 arg0);
extern "C" s32 func_004459C8(s32 arg0);

extern "C" s32 func_00146760(S *arg0)
{
    s32 v0 = func_00147D88(arg0);
    v0 = func_004415C0(v0);
    return func_004459C8(v0);
}
