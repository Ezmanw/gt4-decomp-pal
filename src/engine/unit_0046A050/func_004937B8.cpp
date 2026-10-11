typedef int s32;

extern "C" char D_00492398[];
extern "C" char D_00492570[];

extern "C" s32 func_004932C8(s32 arg0, void *arg1, void *arg2, s32 arg3);

extern "C" s32 func_004937B8(s32 arg0, s32 arg1, s32 arg2) {
    return func_004932C8(arg0, D_00492398, D_00492570, arg2);
}
