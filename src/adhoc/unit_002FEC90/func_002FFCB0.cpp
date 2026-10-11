typedef unsigned int u32;
typedef unsigned short u16;

extern "C" void func_002FFC70(void *stream, u16 v);

extern "C" void func_002FFCB0(void *stream, u32 v) {
    func_002FFC70(stream, v);
    func_002FFC70(stream, v >> 16);
}
