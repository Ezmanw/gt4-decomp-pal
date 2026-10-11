typedef int s32;

struct Sub { char pad[1]; };
struct S { char pad[0x104]; Sub sub; };

extern "C" Sub *func_00296650(S *arg0) {
    return &arg0->sub;
}
