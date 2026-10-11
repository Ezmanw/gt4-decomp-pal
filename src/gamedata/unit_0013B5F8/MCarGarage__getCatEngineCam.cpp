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

struct S;
struct Obj;

extern Rep D_00659FA8;
extern char D_0068EE78[];

extern "C" char *func_005C2560(Rep *r);
extern "C" s32 func_0057F260(const char *s);
extern "C" void *func_005C2630(Str *s, s32 pos, s32 n, const char *src, s32 len);
extern "C" struct S00659988 *func_005C11A8(void);
extern "C" void func_003268F0(void *p, s32 size, s32 align, const char *name);
extern "C" void func_00312470(void *arg0, int arg1);
extern "C" void func_00314C78(void *arg0, void *arg1);
extern "C" void func_00328700(s32 arg0);
extern "C" void func_00328750(s32 arg0);
extern "C" void func_0013BD70(void *arg0, int arg1);
extern "C" void func_0013BDC8(void *arg0);
extern "C" Obj *func_00147D88(S *arg0);
extern "C" s32 func_004415C0(Obj *arg0);
extern "C" const char *func_00446470(s32 arg0);

extern "C" void MCarGarage__getCatEngineCam(s32 *arg0) {
    S *buf[8];
    Str s;
    Str *ps;
    s32 newVal;
    s32 oldVal;
    Obj *o;
    const char *src;
    func_0013BDC8(buf);
    o = func_00147D88(buf[0]);
    func_0013BD70(buf, 2);
    src = func_00446470(func_004415C0(o));
    ps = &s;
    if (src == 0) {
        src = D_0068EE78;
    }
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
    func_00314C78(buf, ps);
    if ((void *)arg0 != (void *)buf) {
        newVal = (s32)buf[0];
        if (newVal != 0) {
            func_00328700(newVal);
        }
        oldVal = *arg0;
        if (oldVal != 0) {
            func_00328750(oldVal);
        }
        *arg0 = newVal;
    }
    func_00312470(buf, 2);
    {
        Rep *q = (Rep *)(ps->p - 0x10);
        if (--q->ref == 0) {
            s32 cap = q->cap + 0x10;
            func_003268F0(q, cap, 4, func_005C11A8()->name);
        }
    }
}
