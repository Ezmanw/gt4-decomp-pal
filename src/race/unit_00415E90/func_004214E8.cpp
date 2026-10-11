typedef float f32;

extern "C" f32 *func_00421490(f32 *arg0, f32 fparg0);

extern "C" f32 *func_004214E8(f32 *arg0, f32 *arg1) {
    return func_00421490(arg0, *arg1);
}
