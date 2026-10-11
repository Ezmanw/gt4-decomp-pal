typedef int s32;

struct Buf0013FF38 {
    void *unk0;
    char pad[0xC];
};

extern "C" void func_0013BDC8(struct Buf0013FF38 *arg0);
extern "C" s32 func_00147D88(void *arg0);
extern "C" void func_004416C8(s32 arg0);
extern "C" void func_0013BD70(struct Buf0013FF38 *arg0, s32 arg1);

extern "C" void MCarGarage__endSetting(void)
{
    struct Buf0013FF38 buf;

    func_0013BDC8(&buf);
    func_004416C8(func_00147D88(buf.unk0));
    func_0013BD70(&buf, 2);
}
