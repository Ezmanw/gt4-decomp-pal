typedef int s32;
typedef long long s64;

struct Global;
extern Global D_006235A8;

extern "C" s64 func_00444178(Global *g, const char *key, s32 kind);
extern "C" s32 func_00444A08(void *out, s64 id);

extern "C" s32 func_004449B0(void *out, const char *key) {
    s64 id = func_00444178(&D_006235A8, key, 0x26);
    if (id == -1) {
        return 0;
    }
    return func_00444A08(out, id);
}
