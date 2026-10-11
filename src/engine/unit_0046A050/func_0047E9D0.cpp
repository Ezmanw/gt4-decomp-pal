/* compiler: ee-gcc2.96-no-strict-aliasing */
struct Vec2 { float x, y; };
extern "C" void func_0047E230(float *out, const float *a, const float *b, float t);

extern "C" void func_0047E9D0(Vec2 *out, const Vec2 *a, const Vec2 *b, float t)
{
    func_0047E230(&out->x, &a->x, &b->x, t);
    func_0047E230(&out->y, &a->y, &b->y, t);
}
