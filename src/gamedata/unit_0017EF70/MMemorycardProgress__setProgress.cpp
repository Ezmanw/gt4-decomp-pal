typedef int s32;
typedef float f32;

extern f32 D_00618A38;
extern f32 D_00618A3C;

extern "C" void func_002F7D18(s32 *buf, s32 arg);
extern "C" f32 func_002F92B0(s32 arg0);
extern "C" void func_002F7CC0(s32 *buf, s32 arg1);

extern "C" void MMemorycardProgress__setProgress(s32 arg0, s32 argc, s32 argv) {
    if (argc > 0) {
        s32 buf[4];
        func_002F7D18(buf, argv);
        D_00618A38 = D_00618A3C = func_002F92B0(buf[0]);
        func_002F7CC0(buf, 2);
    }
}
