/* compiler: ee-gcc2.96-no-strict-aliasing */
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

struct String {
    struct Rep { u32 len, res, ref, selfish; char *data() { return (char *)(this + 1); } };
    char *dat;
    Rep *rep() const { return (Rep *)dat - 1; }
    u32 length() const { return rep()->len; }
    const char *data() const { return dat; }
    void terminate() const { rep()->data()[length()] = 0; }
};
extern char D_006AD808[];
extern "C" void func_00476E70(Val *, const char *);
extern "C" void func_00477628(Val *, void *);

struct Obj { char pad[0x60]; String str; s32 f64; };

static inline const char *c_str(const String &s) {
    if (s.length() == 0)
        return D_006AD808;
    s.terminate();
    return s.data();
}

extern "C" Val func_00479968(Obj *o) {
    Val t;
    if (o->f64)
        func_00476E70(&t, c_str(o->str));
    else
        func_00477628(&t, o);
    return t;
}
