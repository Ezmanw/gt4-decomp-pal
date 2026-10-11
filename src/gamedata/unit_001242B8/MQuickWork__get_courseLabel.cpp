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

extern Rep D_00659FA8;

extern "C" char *func_005C2560(Rep *r);
extern "C" s32 func_0057F260(const char *s);
extern "C" void *func_005C2630(Str *s, s32 pos, s32 n, const char *src, s32 len);
extern "C" struct S00659988 *func_005C11A8(void);
extern "C" void func_003268F0(void *p, s32 size, s32 align, const char *name);
extern "C" void func_00312470(void *arg0, int arg1);
extern "C" void func_00314C78(void *arg0, void *arg1);
extern "C" void func_00328700(s32 arg0);
extern "C" void func_00328750(s32 arg0);
extern "C" void func_001240E0(void *arg0, int arg1);
extern "C" void func_00124138(void *arg0);
extern "C" const char *func_00127B68(s32 arg0);

extern "C" void MQuickWork__get_courseLabel(s32 *arg0) {
    s32 tmp[4];
    s32 buf0[4];
    Str s;
    Str *ps;
    s32 newVal;
    s32 oldVal;
    const char *src;
    s32 *pb;
    func_00124138(tmp);
    ps = &s;
    src = func_00127B68(tmp[0]);
    {
        Rep *r = &D_00659FA8;
        char *d;
        if (r->sel != 0) {
            d = func_005C2560(r);
        } else {
            d = (char *)(r + 1);
            r->ref++;
        }
        ps->p = d;
    }
    func_005C2630(ps, 0, -1, src, func_0057F260(src));
    pb = buf0;
    func_00314C78(pb, ps);
    if (arg0 != pb) {
        newVal = *pb;
        if (newVal != 0) {
            func_00328700(newVal);
        }
        oldVal = *arg0;
        if (oldVal != 0) {
            func_00328750(oldVal);
        }
        *arg0 = newVal;
    }
    func_00312470(pb, 2);
    {
        Rep *q = (Rep *)(ps->p - 0x10);
        if (--q->ref == 0) {
            s32 cap = q->cap + 0x10;
            func_003268F0(q, cap, 4, func_005C11A8()->name);
        }
    }
    func_001240E0(tmp, 2);
}
