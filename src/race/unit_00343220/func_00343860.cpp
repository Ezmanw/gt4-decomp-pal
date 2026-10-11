struct Timer {
    int f0;
    int f4;
    float t;
    int fC;
    int f10;
    unsigned char paused;
};

extern char D_00620320[];
extern "C" float func_00350938(void *g);
extern "C" float func_00350970(void *g);

extern "C" void func_00343860(Timer *tm, float dt)
{
    if (tm->paused) {
        return;
    }
    if (tm->t < 0.0f) {
        tm->t += dt;
        if (tm->t >= 0.0f) {
            tm->t = -func_00350938(D_00620320);
        }
    } else {
        tm->t += dt;
    }
    if (func_00350970(D_00620320) < tm->t) {
        tm->t = func_00350970(D_00620320);
    }
}
