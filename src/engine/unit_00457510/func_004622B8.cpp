extern "C" void func_00576788(void *m);
extern "C" void func_005767C0(void *m);
extern "C" void func_00460398(float v);
extern "C" void func_004619F8(float v);

extern char D_00846918[];
extern int D_00623A20;
extern float D_00623A24;
extern float D_00623A30;

extern "C" float func_004622B8(float v)
{
    func_00576788(D_00846918);
    float old = D_00623A24;
    D_00623A24 = v;
    v *= D_00623A30;
    switch (D_00623A20) {
    case 1:
        func_00460398(v);
        break;
    case 2:
        func_004619F8(v);
        break;
    }
    func_005767C0(D_00846918);
    return old;
}
