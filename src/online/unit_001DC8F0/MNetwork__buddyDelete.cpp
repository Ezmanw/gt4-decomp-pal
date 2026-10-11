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

extern "C" void func_001DC638(void *arg0, int arg1);
extern "C" void func_001DC690(void *arg0, void *arg1);
extern "C" void *func_001F5830(void *arg0, int arg1);
extern "C" void func_002FC9C8(void *arg0, int arg1);
extern "C" void func_002FE3D0(void *arg0, void *arg1);
extern "C" void func_00328700(s32 arg0);
extern "C" void func_00328750(s32 arg0);

extern "C" void MNetwork__buddyDelete(s32 *arg0, void *arg1, s32 arg2, Obj **arg3) {
    if (arg2 > 0) {
        s32 buf0[4];
        void *buf1[4];
        void **p1 = buf1;
        s32 newVal;
        s32 oldVal;
        func_001DC690(p1, arg1);
        {
            void *h = *p1;
            Obj *o = *arg3;
            VEntry *e = (VEntry *)(o->vtbl + 0x58);
            func_002FE3D0(buf0, func_001F5830(h, e->fn((char *)o + e->delta)));
        }
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
        func_001DC638(p1, 2);
    }
}
