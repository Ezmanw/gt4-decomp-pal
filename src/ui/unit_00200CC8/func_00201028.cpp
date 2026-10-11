typedef int s32;

extern "C" s32 func_00206928(s32 arg0);
extern "C" s32 func_0025C458(s32 arg0);
extern "C" s32 func_00265EF0(s32 arg0);
extern "C" s32 func_002663F8(s32 arg0);
extern "C" void func_00266500(s32 arg0, s32 arg1);

extern "C" void func_00201028(s32 arg0, s32 arg1) {
    s32 var_s0;

    var_s0 = func_00206928(arg0);
    if (var_s0 != 0) {
        do {
            if ((func_00265EF0(var_s0) == 0) && (func_002663F8(var_s0) != 0)) {
                func_00266500(var_s0, arg1);
            }
            var_s0 = func_0025C458(var_s0);
        } while (var_s0 != 0);
    }
}
