typedef int s32;

extern "C" void func_00460560();
extern "C" void func_00460B58();
extern "C" void func_00461ED0();

extern "C" void func_00460E68(s32 arg0) {
    switch (arg0) {
        case 1:
            func_00461ED0();
            return;
        case 2:
            func_00460560();
            return;
        case 3:
            func_00460B58();
            return;
    }
}
