typedef float f32;

struct C { char pad[0x34]; int f34; };
extern "C" void func_0025BC70(struct C *, int *, float *, float *, int, int);

extern "C" f32 func_0025BAD0(struct C *arg0) {
    float local;
    func_0025BC70(arg0, &arg0->f34, &local, 0, 0, 0);
    return local;
}
