typedef int s32;

extern "C" void func_00329E08(s32 *arg0, s32 arg1);

extern "C" s32 func_0032A918(s32 arg0, s32 arg1) {
    s32 local = arg1;

    func_00329E08(&local, arg0);
    return local;
}
