typedef int s32;

struct Sub { s32 m0; };
struct Self { char pad[0x24E5C]; Sub sub; };
extern "C" void *func_00408478(Sub *);
extern "C" void func_003EDD20(void *);

extern "C" void func_003BC998(Self *self) {
    Sub *p = &self->sub;
    if (p->m0 != 0) {
        func_003EDD20(func_00408478(p));
    }
}
