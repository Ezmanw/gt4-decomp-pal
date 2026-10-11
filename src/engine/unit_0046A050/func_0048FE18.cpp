struct A;
struct B;

extern A *PDISTD__global_font_manager;
extern B *D_00624984;

extern "C" void func_004905A8(A *a);
extern "C" void func_004905D8(B *b);
extern "C" void func_005C1628(void *p);

extern "C" void func_0048FE18(void) {
    A *a = PDISTD__global_font_manager;
    if (a != 0) {
        PDISTD__global_font_manager = 0;
        func_004905A8(a);
        func_005C1628(a);
    }
    B *b = D_00624984;
    if (b != 0) {
        D_00624984 = 0;
        func_004905D8(b);
        func_005C1628(b);
    }
}
