typedef int s32;

/* A function-local static object written out: guard D_00619CA4, object D_0083F5C0, its
   constructor func_0030BC70 and the atexit-registered destructor stub func_0030C3B8. */
extern "C" s32 D_00619CA4;
extern "C" char D_0083F5C0[];
extern "C" void *func_0030BC70(void *obj);
extern "C" void func_0030C3B8(void);
extern "C" s32 func_005A2ED0(void (*fn)(void));

extern "C" void *mLoggerControl__virtual_13(void) {
    if (D_00619CA4 == 0) {
        func_0030BC70(D_0083F5C0);
        D_00619CA4 = 1;
        func_005A2ED0(func_0030C3B8);
    }
    return D_0083F5C0;
}
