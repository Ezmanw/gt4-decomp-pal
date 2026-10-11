extern "C" float func_0036ED88(float a);
extern "C" float func_0036EE48(float a, float b);

extern "C" float func_0036EF28(float from, float to, float t)
{
    float a = func_0036ED88(from);
    float b = func_0036ED88(to);
    return a + func_0036EE48(b, a) * t;
}
