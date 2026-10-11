typedef int s32;

extern "C" void func_00282ED8(s32 *buf, s32 a, s32 b);
extern "C" void func_00328700(s32 obj);
extern "C" void func_00328750(s32 obj);
extern "C" void func_00282AC0(s32 *buf, s32 flags);

extern "C" void MCancelEvent__global_00833CE0(s32 *ret)
{
    s32 buf[4];

    func_00282ED8(buf, 0, 0);
    if (ret != buf) {
        s32 obj = buf[0];
        if (obj != 0)
            func_00328700(obj);
        s32 old = *ret;
        if (old != 0)
            func_00328750(old);
        *ret = obj;
    }
    func_00282AC0(buf, 2);
}
