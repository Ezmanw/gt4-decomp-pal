typedef int s32;
typedef unsigned int u32;

struct VEntry {
    short delta;
    short index;
    void (*fn)(void *);
};

struct View {
    char data[0x3C];
};

struct Ring {
    View views[2];
    s32 cur;
    View *current() { return &views[cur]; }
};

struct Viewport {
    char pad0[0x18];
    float f18;          /* 0x18 */
    s32 i1C;            /* 0x1C */
    char pad20[0x1C];
    Ring ring;          /* 0x3C */
};

struct Color {
    char data[0x10];
};

extern Viewport D_006184D0;
extern Ring D_00618588;

extern "C" s32 func_00251D28(void *);
extern "C" char *func_00251D30(void *, s32);
extern "C" void func_00105398(void *, void *);
extern "C" void func_00105548(void *);
extern "C" void func_001054C0(void *, s32);
extern "C" void func_001056C0(void *);
extern "C" void func_004A29A8(s32);
extern "C" void func_004A2930(s32, s32, s32, s32);
extern "C" void func_00203180(Color *, void *);
extern "C" u32 func_00202F68(Color *, float);
extern "C" void func_002031D8(Color *, s32);
extern "C" void func_004A3078(u32);
extern "C" void func_004A3230(s32);
extern "C" void func_004AB040(s32);
extern "C" void func_004A1638(s32);
extern "C" void func_004A2808(s32, float);
extern "C" void RaceEntryCar__update(s32);
extern "C" void func_004A7454(void);
extern "C" void func_004A5A90(float, float, float, float, float, float);
extern "C" void pglFrontFace(s32);
extern "C" void mEnterEvent__structor_0(void *);
extern "C" void func_00105C68(void *, void *, s32, s32, float, float, float, float);
extern "C" void func_001055E0(void *);

extern "C" void mUpdateContextPS2__virtual_64(char *self)
{
    s32 i;
    s32 n;

    if (*(s32 *)(self + 0xE4) != 0)
        return;
    i = 0;
    n = func_00251D28(self);
    if (n > 0) {
        do {
            char *o = func_00251D30(self, i++);
            if (*(s32 *)(o + 0x6E4) != 0) {
                VEntry *e = (VEntry *)(*(char **)(o + 4) + 0x190);
                e->fn(o + e->delta);
            }
        } while (i < n);
    }
    if (*(s32 *)(self + 0x420) != 0) {
        char *rt = self + 0x3E4;
        func_00105398(rt, D_00618588.current());
        *(s32 *)(rt + 4) = 0;
        func_00105548(rt);
        func_001054C0(rt, 9);
        func_001056C0(rt);
    } else {
        func_001056C0(D_006184D0.ring.current());
    }
    func_004A29A8(0);
    if (*(s32 *)(self + 0x128) != 0) {
        Color c;
        u32 rgb;
        func_004A2930(1, 1, 1, 1);
        func_00203180(&c, self + 0x118);
        rgb = func_00202F68(&c, 1.0f);
        func_002031D8(&c, 2);
        func_004A3078((rgb & 0xFFFFFF) | 0x80000000);
        func_004A3230(1);
    } else {
        func_004A2930(0, 0, 0, 1);
        func_004A3078(0x80000000);
        func_004A3230(1);
    }
    func_004AB040(15);
    i = 0;
    func_004A1638(0x11);
    func_004A1638(6);
    func_004A2808(0x44, 1.0f);
    RaceEntryCar__update(1);
    func_004A7454();
    func_004A5A90(0.0f, 640.0f, 480.0f, 0.0f, 0.0f, 100.0f);
    RaceEntryCar__update(0);
    func_004A7454();
    pglFrontFace(0);
    func_004AB040(5);
    func_004A2930(1, 1, 1, 0);
    if (n > 0) {
        do {
            char *o = func_00251D30(self, i);
            i++;
            if (*(s32 *)(o + 0x6E4) != 0)
                mEnterEvent__structor_0(o);
        } while (i < n);
    }
    if (*(s32 *)(self + 0x420) != 0) {
        View *v = D_006184D0.ring.current();
        char *rt = self + 0x3E4;
        func_004AB040(5);
        func_00105C68(v, rt, D_006184D0.i1C, 0, D_006184D0.f18, 1.0f, 1.0f, 1.0f);
        func_001055E0(rt);
        func_001056C0(v);
    }
}
