typedef int s32;

extern "C" void func_00322A38(s32 *buf);
extern "C" s32 *func_003231D8(s32 h);
extern "C" void func_00328700(s32 obj);
extern "C" void func_00328750(s32 obj);
extern "C" void func_003229E0(s32 *buf, s32 flags);

extern "C" void ThreadGroup__getCurrent(s32 *ret)
{
    s32 buf[4];

    func_00322A38(buf);
    s32 *src = func_003231D8(buf[0]);
    if (ret != src) {
        s32 obj = *src;
        if (obj != 0)
            func_00328700(obj);
        s32 old = *ret;
        if (old != 0)
            func_00328750(old);
        *ret = obj;
    }
    func_003229E0(buf, 2);
}
