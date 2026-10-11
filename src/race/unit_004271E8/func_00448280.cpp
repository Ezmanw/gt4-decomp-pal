typedef int s32;

struct Mgr {
    char pad[0x1E0];
    s32 f1E0;
};

struct Rec {
    s32 a;
    s32 b;
    s32 name;
    s32 pad[5];
};

extern Mgr D_006235A8;
extern char D_006A6FA8[];
extern "C" s32 func_004482C0(s32, Rec *);
extern "C" const char *func_0044A050(s32, s32);

extern "C" const char *func_00448280(s32 key) {
    Rec rec;
    const char *r;
    if (func_004482C0(key, &rec) == 0)
        r = D_006A6FA8;
    else
        r = func_0044A050(D_006235A8.f1E0, rec.name);
    return r;
}
