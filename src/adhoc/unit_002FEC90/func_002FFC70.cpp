typedef unsigned char u8;
typedef unsigned short u16;

extern "C" void func_002FFC48(void *arg0, u8 arg1);

extern "C" void func_002FFC70(void *arg0, u16 arg1) {
    func_002FFC48(arg0, arg1 & 0xFF);
    func_002FFC48(arg0, arg1 >> 8);
}
