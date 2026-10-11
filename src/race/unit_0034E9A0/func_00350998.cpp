typedef float f32;

extern "C" void func_003507E0(f32 *arg0);

extern "C" f32 func_00350998(f32 *arg0)
{
    func_003507E0(arg0);
    return arg0[8];
}
