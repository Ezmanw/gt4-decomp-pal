typedef int s32;
extern "C" {
void func_0035F910(void *a);
void func_003F0538(void);
}
extern "C" void DynamicsConductor__terminate(char **arg0) {
    s32 a1 = *(s32 *)(*(char **)(*(char **)arg0 + 0x84) + 0xCC8);
    if (a1 == 0) func_0035F910(arg0);
    return func_003F0538();
}
