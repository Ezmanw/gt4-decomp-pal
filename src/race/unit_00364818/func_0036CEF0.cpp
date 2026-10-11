extern "C" float func_0036CE40(float);

extern "C" float func_0036CEF0(float a, float b)
{
    float d = func_0036CE40(a) - func_0036CE40(b);
    if (d >= 3.14159274101257324f) d -= 6.28318548202514648f;
    else if (d < -3.14159274101257324f) d += 6.28318548202514648f;
    return d;
}
