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

struct Obj { char pad[0x74]; s32 f74; };

extern "C" Val func_0047AE80(Obj *o) {
    Val t;
    func_00476F08(&t, o->f74);
    return t;
}
