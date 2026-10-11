extern "C" int D_00623A20;
extern "C" int D_00623A2C;
extern "C" int D_00623A28;

extern "C" void func_00460540(void);
extern "C" void func_00461E90(void);

extern "C" void func_004620E0(void) {
    switch (D_00623A20) {
    case 1:
        func_00460540();
        break;
    case 2:
        func_00461E90();
        break;
    }
    D_00623A20 = 0;
    D_00623A28 = -1;
    D_00623A2C = -1;
}
