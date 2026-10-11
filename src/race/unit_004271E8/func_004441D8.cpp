extern "C" int func_00444208(int a, int b, int c);

extern "C" int func_004441D8(int a, long b) {
    return func_00444208(a, (int)(b & 0xFFFFFFFF), (int)(b >> 32));
}
