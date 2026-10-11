typedef int s32;

struct H {
    char pad0[0x10];
    s32 p10;
};

extern "C" void func_0015AA70(void *arg0, int arg1);
extern "C" void *func_0015AAC8(void *arg0);
extern "C" void func_002FC9C8(void *arg0, int arg1);
extern "C" void func_002FE3D0(void *arg0, s32 arg1);
extern "C" void func_00328700(s32 arg0);
extern "C" void func_00328750(s32 arg0);
extern "C" s32 func_004337E8(s32 arg0);

static inline H *get(H **p) {
    return *p;
}

extern "C" void MCourseRecordUnit__getRankNum(s32 *arg0) {
    H *tmp[4];
    s32 buf0[4];
    s32 *pb;
    s32 v;
    s32 newVal;
    s32 oldVal;
    func_0015AAC8(tmp);
    v = func_004337E8(get(tmp)->p10);
    pb = buf0;
    func_002FE3D0(pb, v);
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
    func_002FC9C8(pb, 2);
    func_0015AA70(tmp, 2);
}
