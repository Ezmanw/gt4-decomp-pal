struct Zoom {
    char pad[0x1C];
    float dist;
};

extern "C" float func_00370048(Zoom *z);

extern "C" void func_003704F0(Zoom *z, int in)
{
    float d = z->dist;
    float mx = func_00370048(z);
    if (in) {
        d *= 0x1.11eb84p+0f;
    } else {
        d /= 0x1.11eb84p+0f;
    }
    if (d < 20.0f) {
        d = 20.0f;
    }
    if (d > 1000.0f) {
        d = 1000.0f;
    }
    if (d > mx) {
        d = mx;
    }
    z->dist = d;
}
