struct C { char pad[0x34]; int f34; };
extern "C" void func_0025BC70(struct C *, int *, int, int, int, int);

extern "C" void func_0025BBF8(struct C *arg0, int arg1, int arg2, int arg3, int arg4) {
    func_0025BC70(arg0, &arg0->f34, arg1, arg2, arg3, arg4);
}
