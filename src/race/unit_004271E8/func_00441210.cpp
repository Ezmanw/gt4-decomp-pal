typedef int s32;

extern "C" s32 func_00441240(s32 arg0, s32 arg1);
extern "C" s32 func_00447F30(s32 arg0);

extern "C" s32 func_00441210(s32 arg0, s32 arg1) {
    return func_00441240(arg0, func_00447F30(arg1));
}
