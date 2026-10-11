/* compiler: ee-gcc2.96-no-strict-aliasing */
typedef int s32;

struct Val;
extern "C" void func_00476C98(Val *);
extern "C" Val *func_00476B40(Val *, const Val *);

/* the script value: type 1 is nil */
struct Val {
    s32 type;
    s32 v;
    Val() : type(1) {}
    Val(const Val &o) { func_00476B40(this, &o); }
    ~Val() { func_00476C98(this); }
};

struct Obj_0047B5E0 {
    char pad0[0x5C];
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual void v10();
};

extern "C" void func_00481378(void *a, void *b);

Val func_0047B9B8(Obj_0047B5E0 *obj, void *x, void *y) {
    func_00481378(y, x);
    obj->v10();
    return Val();
}
