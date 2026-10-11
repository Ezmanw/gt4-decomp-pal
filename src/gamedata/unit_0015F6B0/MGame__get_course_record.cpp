typedef int s32;

struct Obj { char pad[0x10]; char *p10; };

extern "C" s32 *func_0015F3E8(s32 *arg0);
extern "C" void func_0015D018(s32 *arg0, void *arg1);
extern "C" void func_0015C6C0(s32 *arg0, int arg1);
extern "C" void func_0015F390(s32 *arg0, int arg1);
extern "C" void func_00328700(s32 arg0);
extern "C" void func_00328750(s32 arg0);

extern "C" void MGame__get_course_record(s32 *arg0) {
    s32 buf0[4];
    s32 buf1[4];
    s32 *p1;
    s32 newVal;
    s32 oldVal;

    func_0015F3E8(buf0);
    p1 = buf1;
    func_0015D018(p1, ((Obj *)buf0[0])->p10 + 0x14A30);
    if (arg0 != p1) {
        newVal = *p1;
        if (newVal != 0) {
            func_00328700(newVal);
        }
        oldVal = *arg0;
        if (oldVal != 0) {
            func_00328750(oldVal);
        }
        *arg0 = newVal;
    }
    func_0015C6C0(p1, 2);
    func_0015F390(buf0, 2);
}
