extern "C" int func_0035A5C0(int b);
extern "C" void func_004014C8(int a, int b, int c);
extern "C" void func_004026A0(int a, int b, int c);

extern "C" void func_00386BC8(int a, int b, int c)
{
    switch (func_0035A5C0(b)) {
    case 0:
        break;
    case 1:
        return func_004014C8(a, b, c);
    }
    return func_004026A0(a, b, c);
}
