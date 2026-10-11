typedef int s32;
typedef unsigned int u32;
typedef float f32;

struct Val;
extern "C" void func_00476C98(Val *);
extern "C" Val *func_00476B40(Val *, const Val *);

/* the script value: type 1 is nil; func_00476C98 releases the payload and sets nil */
struct Val {
    s32 type;
    s32 v;
    Val() : type(1) {}
    Val(const Val &o) { func_00476B40(this, &o); }
    ~Val() { func_00476C98(this); }
};
extern "C" void func_00476F08(Val *, s32);
extern "C" void func_00481378(void *, s32);

extern "C" Val func_0047CA20(void *self, s32 n, void *list) {
    func_00481378(list, n);
    Val t;
    func_00476F08(&t, 0);
    return t;
}
