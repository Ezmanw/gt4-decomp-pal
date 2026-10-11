typedef float f32;

extern "C" f32 *func_004212F0(f32 *arg0, f32 fparg0);

extern "C" f32 *func_00421348(f32 *arg0, f32 *arg1) {
    return func_004212F0(arg0, *arg1);
}
