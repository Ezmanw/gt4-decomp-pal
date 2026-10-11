typedef int s32;
extern "C" void func_001C53F0(char *a);
struct E { char p[0x120]; };
extern "C" void func_001C4FE0(char *arg0) {
    E *e = (E *)(arg0 + 0x1C);
    for (int i = 1; i >= 0; i--) func_001C53F0((char *)e++);
}
