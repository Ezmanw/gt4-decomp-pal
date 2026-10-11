typedef int s32;

struct Obj { char pad[0x10]; s32 m10; };
struct Guard { Obj *p; s32 pad[3]; };

extern "C" void func_0016D850(Guard *);
extern "C" void func_0016D7F8(Guard *, s32);
extern "C" void func_00435A88(s32);

extern "C" void MGarage__delAllCarExceptRidingCar(void) {
    Guard g;
    s32 v;
    func_0016D850(&g);
    v = g.p->m10;
    func_0016D7F8(&g, 2);
    func_00435A88(v);
}
