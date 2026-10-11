struct Timer {
    int pad0;
    float time;
    char pad8[0xC];
    unsigned char paused;
};

extern char D_00620320[];
extern "C" float func_00350910(void *clock);

extern "C" void func_00343740(Timer *t, float dt)
{
    if (t->paused == 0) {
        void *clock = D_00620320;
        t->time += dt;
        if (t->time > func_00350910(clock))
            t->time = func_00350910(clock);
    }
}
