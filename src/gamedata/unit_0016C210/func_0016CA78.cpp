#define GT4_DECLS
#include "gt4/hObject.h"
typedef int s32;

struct Rep {
    s32 len;
    s32 cap;
    s32 ref;
    s32 sel;
};

struct S00659988 {
    const char *name;
};

struct Str {
    char *p;
};

struct VEntry {
    short delta;
    short index;
    void (*fn)(void *, Str *);
};

struct Obj {
    char pad0[4];
    char *vtbl;
};

extern Rep D_00659FA8;

extern "C" char *func_005C2560(Rep *r);
extern "C" s32 func_0057F260(const char *s);
extern "C" void *func_005C2630(Str *s, s32 pos, s32 n, const char *src, s32 len);
extern "C" struct S00659988 *func_005C11A8(void);
extern "C" void func_003268F0(void *p, s32 size, s32 align, const char *name);
extern "C" void func_002F3B88(Obj *arg0, s32 arg1);
extern "C" void func_002F3838(Obj *arg0, void *arg1, void (*arg2)(void));
extern "C" void func_002F3970(Obj *arg0, Str *arg1, void (*arg2)(void));
extern "C" void func_002F39B8(Obj *arg0, Str *arg1, void (*arg2)(void), void (*arg3)(void));
extern "C" void func_003068D8(Obj *arg0, void *arg1, void (*arg2)(void));
extern "C" void func_00306A00(Obj *arg0, Str *arg1, void (*arg2)(void));
extern char D_006909C0[];
extern char D_006909D0[];
extern char D_006909D8[];
extern char D_006909E0[];
extern char D_006909E8[];
extern char D_006909F0[];
extern char D_00690A00[];
extern char D_00823940[];
extern char D_00823938[];
extern "C" void MGameStats__global_00823940(void);
extern "C" void MGameStats__global_00823938(void);
extern "C" void MGameStats__unpack(void);
extern "C" void MGameStats__pack(void);
extern "C" void MGameStats__get_course(void);
extern "C" void MGameStats__set_course(void);
extern "C" void MGameStats__get_laps(void);
extern "C" void MGameStats__set_laps(void);
extern "C" void MGameStats__get_tournament_id(void);
extern "C" void MGameStats__set_tournament_id(void);
extern "C" void MGameStats__get_time_to_start(void);
extern "C" void MGameStats__set_time_to_start(void);

extern "C" void func_0016CA78(Obj *arg0) {
    Str s;
    {
        Str *ps = &s;
        const char *src = D_006909C0;
        Rep *r = &D_00659FA8;
        char *d;
        if (r->sel != 0) {
            d = func_005C2560(r);
        } else {
            d = (char *)(r + 1);
            r->ref++;
        }
        ps->p = d;
        func_005C2630(ps, 0, -1, src, func_0057F260(src));
        {
            VEntry *e = (VEntry *)(arg0->vtbl + 0x190);
            e->fn((char *)arg0 + e->delta, &s);
        }
        {
            Rep *q = (Rep *)(s.p - 0x10);
            if (--q->ref == 0) {
                s32 cap = q->cap + 0x10;
                func_003268F0(q, cap, 4, func_005C11A8()->name);
            }
        }
    }
    func_002F3B88(arg0, hObject__GetClassID());
    func_003068D8(arg0, D_00823940, MGameStats__global_00823940);
    func_002F3838(arg0, D_00823938, MGameStats__global_00823938);
    {
        Str *ps = &s;
        const char *src = D_006909D0;
        Rep *r = &D_00659FA8;
        char *d;
        if (r->sel != 0) {
            d = func_005C2560(r);
        } else {
            d = (char *)(r + 1);
            r->ref++;
        }
        ps->p = d;
        func_005C2630(ps, 0, -1, src, func_0057F260(src));
        func_00306A00(arg0, &s, MGameStats__unpack);
        {
            Rep *q = (Rep *)(s.p - 0x10);
            if (--q->ref == 0) {
                s32 cap = q->cap + 0x10;
                func_003268F0(q, cap, 4, func_005C11A8()->name);
            }
        }
    }
    {
        Str *ps = &s;
        const char *src = D_006909D8;
        Rep *r = &D_00659FA8;
        char *d;
        if (r->sel != 0) {
            d = func_005C2560(r);
        } else {
            d = (char *)(r + 1);
            r->ref++;
        }
        ps->p = d;
        func_005C2630(ps, 0, -1, src, func_0057F260(src));
        func_002F3970(arg0, &s, MGameStats__pack);
        {
            Rep *q = (Rep *)(s.p - 0x10);
            if (--q->ref == 0) {
                s32 cap = q->cap + 0x10;
                func_003268F0(q, cap, 4, func_005C11A8()->name);
            }
        }
    }
    {
        Str *ps = &s;
        const char *src = D_006909E0;
        Rep *r = &D_00659FA8;
        char *d;
        if (r->sel != 0) {
            d = func_005C2560(r);
        } else {
            d = (char *)(r + 1);
            r->ref++;
        }
        ps->p = d;
        func_005C2630(ps, 0, -1, src, func_0057F260(src));
        func_002F39B8(arg0, &s, MGameStats__get_course, MGameStats__set_course);
        {
            Rep *q = (Rep *)(s.p - 0x10);
            if (--q->ref == 0) {
                s32 cap = q->cap + 0x10;
                func_003268F0(q, cap, 4, func_005C11A8()->name);
            }
        }
    }
    {
        Str *ps = &s;
        const char *src = D_006909E8;
        Rep *r = &D_00659FA8;
        char *d;
        if (r->sel != 0) {
            d = func_005C2560(r);
        } else {
            d = (char *)(r + 1);
            r->ref++;
        }
        ps->p = d;
        func_005C2630(ps, 0, -1, src, func_0057F260(src));
        func_002F39B8(arg0, &s, MGameStats__get_laps, MGameStats__set_laps);
        {
            Rep *q = (Rep *)(s.p - 0x10);
            if (--q->ref == 0) {
                s32 cap = q->cap + 0x10;
                func_003268F0(q, cap, 4, func_005C11A8()->name);
            }
        }
    }
    {
        Str *ps = &s;
        const char *src = D_006909F0;
        Rep *r = &D_00659FA8;
        char *d;
        if (r->sel != 0) {
            d = func_005C2560(r);
        } else {
            d = (char *)(r + 1);
            r->ref++;
        }
        ps->p = d;
        func_005C2630(ps, 0, -1, src, func_0057F260(src));
        func_002F39B8(arg0, &s, MGameStats__get_tournament_id, MGameStats__set_tournament_id);
        {
            Rep *q = (Rep *)(s.p - 0x10);
            if (--q->ref == 0) {
                s32 cap = q->cap + 0x10;
                func_003268F0(q, cap, 4, func_005C11A8()->name);
            }
        }
    }
    {
        Str *ps = &s;
        const char *src = D_00690A00;
        Rep *r = &D_00659FA8;
        char *d;
        if (r->sel != 0) {
            d = func_005C2560(r);
        } else {
            d = (char *)(r + 1);
            r->ref++;
        }
        ps->p = d;
        func_005C2630(ps, 0, -1, src, func_0057F260(src));
        func_002F39B8(arg0, &s, MGameStats__get_time_to_start, MGameStats__set_time_to_start);
        {
            Rep *q = (Rep *)(s.p - 0x10);
            if (--q->ref == 0) {
                s32 cap = q->cap + 0x10;
                func_003268F0(q, cap, 4, func_005C11A8()->name);
            }
        }
    }
}
