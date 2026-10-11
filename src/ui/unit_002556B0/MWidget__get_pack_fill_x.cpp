typedef int s32;

struct VEntry {
    short delta;
    short index;
    s32 (*fn)(void *);
};

struct Obj {
    char pad0[4];
    char *vtbl;
};

extern "C" void func_00255210(void *arg0, int arg1);
extern "C" void func_00255268(void *arg0, void *arg1);
extern "C" s32 func_00266520(s32 arg0);
extern "C" void func_00266530(s32 arg0, s32 arg1);
extern "C" void func_002FC9C8(void *arg0, int arg1);
extern "C" void func_002FE3D0(void *arg0, s32 arg1);
extern "C" void func_00328700(s32 arg0);
extern "C" void func_00328750(s32 arg0);

extern "C" void MWidget__get_pack_fill_x(s32 *arg0, void *arg1, s32 arg2, Obj **arg3) {
    s32 buf0[4];
    if (arg2 == 0) {
        s32 buf1[4];
        s32 *p1 = buf1;
        s32 newVal;
        s32 oldVal;

        func_00255268(p1, arg1);
        func_002FE3D0(buf0, func_00266520(*p1) != 0);
        if (arg0 != buf0) {
            newVal = buf0[0];
            if (newVal != 0) {
                func_00328700(newVal);
            }
            oldVal = *arg0;
            if (oldVal != 0) {
                func_00328750(oldVal);
            }
            *arg0 = newVal;
        }
        func_002FC9C8(buf0, 2);
        func_00255210(p1, 2);
    } else if (arg2 == 1) {
        Obj *o = *arg3;
        VEntry *e = (VEntry *)(o->vtbl + 0x58);
        s32 flag = e->fn((char *)o + e->delta) != 0;
        func_00255268(buf0, arg1);
        func_00266530(buf0[0], flag);
        func_00255210(buf0, 2);
    }
}
