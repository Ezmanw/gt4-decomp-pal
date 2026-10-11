typedef int s32;

struct Sub { char pad[1]; };
struct S { char pad[0x10]; Sub sub; };

extern "C" Sub *func_003231D8(S *arg0) {
    return &arg0->sub;
}
