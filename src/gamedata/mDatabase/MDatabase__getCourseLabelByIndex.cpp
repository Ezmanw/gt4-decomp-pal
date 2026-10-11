typedef int s32;
typedef unsigned int u32;

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
    char pad[0xC];
};

struct OHandle {
    void *p;
    char pad[0xC];
};

struct Else {
    s32 arr0[4];
    s32 spare[4];
    Str s2;
};

union U0 {
    char buf[0x100];
    Else e;
};

union U1 {
    OHandle tmp;
    s32 arr1[4];
};

extern Rep D_00659FA8;
extern char D_00693310[];
extern char D_00693320[];

extern "C" void func_002FC9C8(void *arg0, int arg1);
extern "C" void func_002FCA20(void *arg0, void *arg1);
extern "C" int func_002FE3A8(void *arg0);
extern "C" void func_00312470(void *arg0, int arg1);
extern "C" void func_00314C78(void *arg0, void *arg1);
extern "C" void func_003268F0(void *p, s32 size, s32 align, const char *name);
extern "C" void func_00328700(s32 arg0);
extern "C" void func_00328750(s32 arg0);
extern "C" u32 func_00448948(s32 arg0, char *buf, s32 size);
extern "C" s32 func_0057F260(const char *s);
extern "C" struct S00659988 *func_005C11A8(void);
extern "C" char *func_005C2560(Rep *r);
extern "C" void *func_005C2630(Str *s, s32 pos, s32 n, const char *src, s32 len);

extern "C" void MDatabase__getCourseLabelByIndex(s32 *arg0, s32 arg1, void *arg2) {
    U0 u0;
    U1 u1;
    s32 spare2[4];
    Str s;
    Str *ps;
    Str *ps2;
    s32 newVal;
    s32 oldVal;

    if (arg1 > 0) {
        U1 *pu1 = &u1;
        s32 id;
        const char *src;
        u32 ret;
        func_002FCA20(pu1, arg2);
        id = func_002FE3A8(pu1->tmp.p);
        func_002FC9C8(pu1, 2);
        ret = func_00448948(id, u0.buf, 0x100);
        src = u0.buf;
        if (ret >= 0x100) {
            src = D_00693310;
        }
        {
            Rep *r = &D_00659FA8;
            char *d;
            ps = &s;
            if (r->sel != 0) {
                d = func_005C2560(r);
            } else {
                d = (char *)(r + 1);
                r->ref++;
            }
            ps->p = d;
        }
        func_005C2630(ps, 0, -1, src, func_0057F260(src));
        func_00314C78(pu1, ps);
        if (arg0 != pu1->arr1) {
            newVal = pu1->arr1[0];
            if (newVal != 0) {
                func_00328700(newVal);
            }
            oldVal = *arg0;
            if (oldVal != 0) {
                func_00328750(oldVal);
            }
            *arg0 = newVal;
        }
        func_00312470(pu1, 2);
        {
            Rep *q = (Rep *)(ps->p - 0x10);
            if (--q->ref == 0) {
                s32 cap = q->cap + 0x10;
                func_003268F0(q, cap, 4, func_005C11A8()->name);
            }
        }
    } else {
        const char *src = D_00693320;
        {
            Rep *r = &D_00659FA8;
            char *d;
            ps2 = &u0.e.s2;
            if (r->sel != 0) {
                d = func_005C2560(r);
            } else {
                d = (char *)(r + 1);
                r->ref++;
            }
            ps2->p = d;
        }
        func_005C2630(ps2, 0, -1, src, func_0057F260(src));
        func_00314C78(u0.e.arr0, ps2);
        if (arg0 != u0.e.arr0) {
            newVal = u0.e.arr0[0];
            if (newVal != 0) {
                func_00328700(newVal);
            }
            oldVal = *arg0;
            if (oldVal != 0) {
                func_00328750(oldVal);
            }
            *arg0 = newVal;
        }
        func_00312470(u0.e.arr0, 2);
        {
            Rep *q = (Rep *)(ps2->p - 0x10);
            if (--q->ref == 0) {
                s32 cap = q->cap + 0x10;
                func_003268F0(q, cap, 4, func_005C11A8()->name);
            }
        }
    }
}
