typedef int s32;

extern "C" void func_001DC638(void *arg0, s32 arg1);
extern "C" void func_001DC690(void *arg0);
extern "C" void func_001F1400(s32 *arg0, s32 arg1);
extern "C" void func_00312470(s32 *arg0, s32 arg1);
extern "C" void func_00328700(s32 arg0);
extern "C" void func_00328750(s32 arg0);

extern "C" void MNetwork__getLastErrorCode(s32 *arg0) {
    s32 sp[4];
    s32 sp10[4];
    s32 *p1;
    s32 temp_a0;
    s32 temp_s0;

    func_001DC690(sp);
    p1 = sp10;
    func_001F1400(p1, sp[0]);
    if (arg0 != p1) {
        temp_s0 = *p1;
        if (temp_s0 != 0) {
            func_00328700(temp_s0);
        }
        temp_a0 = *arg0;
        if (temp_a0 != 0) {
            func_00328750(temp_a0);
        }
        *arg0 = temp_s0;
    }
    func_00312470(p1, 2);
    func_001DC638(sp, 2);
}
