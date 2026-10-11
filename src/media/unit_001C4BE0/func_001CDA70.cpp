extern "C" int func_001CC980(int);
extern "C" void func_005A609C(int, int);
extern "C" void func_005A5DC8(int, const char *);

extern "C" int func_001CDA70(int arg0) {
    int s0 = arg0 + 0x24;
    func_005A609C(s0, func_001CC980(arg0));
    func_005A5DC8(s0, "LSTSLIDE");
    return 1;
}
