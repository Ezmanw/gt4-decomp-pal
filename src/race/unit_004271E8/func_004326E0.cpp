typedef int s32;
extern "C" void func_004320F8(void *p);
struct Root { virtual ~Root(); };
struct func_0043A770 : Root {
    func_0043A770();
    virtual ~func_0043A770();
};
struct Elem { char p[0x1F8]; };
struct D_00687A60 : func_0043A770 {
    Elem a[0x7D];
    D_00687A60();
    virtual ~D_00687A60();
};
D_00687A60::D_00687A60() {
    s32 n = 0x7C;
    Elem *p = a;
    do { func_004320F8(p); p++; n--; } while (n != -1);
}
