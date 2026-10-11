typedef int s32;

extern "C" void *func_00448190(void *);
extern "C" void *func_00447F30(void *);
extern "C" s32 SPEC_DATABASE__GetCarNameInfo(void *, void *);

extern "C" s32 func_00448450(void *key, void *out) {
    void *p = func_00448190(key);
    if (p == 0)
        return 0;
    return SPEC_DATABASE__GetCarNameInfo(func_00447F30(p), out);
}
