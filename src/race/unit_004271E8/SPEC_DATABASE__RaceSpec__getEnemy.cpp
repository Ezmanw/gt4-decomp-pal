typedef long long s64;
struct RaceSpec;
extern "C" int SPEC_DATABASE__RaceSpec__getEnemyCode(RaceSpec *, int);
extern "C" int func_00444A08(void *, int);
extern "C" s64 func_004477D0(RaceSpec *, int);
extern "C" void func_00445BF8(void *, int);

extern "C" int SPEC_DATABASE__RaceSpec__getEnemy(RaceSpec *s, int idx, void *out)
{
    int r = func_00444A08(out, SPEC_DATABASE__RaceSpec__getEnemyCode(s, idx));
    s64 id = func_004477D0(s, idx);
    if (id != -1) func_00445BF8(out, id - 1);
    else func_00445BF8(out, -1);
    return r;
}
