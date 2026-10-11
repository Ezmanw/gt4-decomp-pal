typedef float f32;

extern "C" void func_004597A8(f32 *a, f32 *b);

extern "C" f32 func_004598A8(f32 a, f32 b, f32 t) {
    func_004597A8(&a, &b);
    return a * t + b * (0x1.000000p+0f - t);
}
