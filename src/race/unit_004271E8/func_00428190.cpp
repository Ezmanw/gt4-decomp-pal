typedef int s32;
typedef short s16;

struct Elem { char pad0[4]; s16 val4; char pad6[10]; };
struct Inner { char pad0[0x1C]; Elem *arr; };
struct Outer { char pad0[4]; Inner *inner; };

extern "C" s32 func_00428120(Outer *arg0, s16 arg1);

extern "C" s32 func_00428190(Outer *arg0, s32 arg1) {
    if (arg1 < 0) {
        return 0;
    }
    return func_00428120(arg0, arg0->inner->arr[arg1].val4);
}
