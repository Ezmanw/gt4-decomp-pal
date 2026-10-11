typedef int s32;

extern "C" void func_00460540();
extern "C" void func_00460B08();
extern "C" void func_00461E90();

extern "C" void func_00460E00(s32 arg0) {
    switch (arg0) {
        case 1:
            func_00461E90();
            return;
        case 2:
            func_00460540();
            return;
        case 3:
            func_00460B08();
            return;
    }
}
