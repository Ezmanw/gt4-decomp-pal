extern "C" int D_00623A20;
extern "C" int D_00623A2C;
extern "C" int D_00623A28;

extern "C" void func_00460560(void);
extern "C" void func_00461ED0(void);

extern "C" void func_00462150(void) {
    switch (D_00623A20) {
    case 1:
        func_00460560();
        break;
    case 2:
        func_00461ED0();
        break;
    }
    D_00623A20 = 0;
    D_00623A28 = -1;
    D_00623A2C = -1;
}
