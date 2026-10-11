typedef int s32;
typedef unsigned int u32;

extern "C" u32 func_0048F108(s32);

extern "C" s32 func_0048F290(u32 *out, s32 key) {
    u32 v = func_0048F108(key);
    if (v < 12) {
        *out = v;
        return 1;
    }
    return 0;
}
