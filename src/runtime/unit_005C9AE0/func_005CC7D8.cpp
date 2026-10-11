struct S { char pad[0x10]; int unk10; };
extern void func_004373F0(int);

void func_005CC7D8(S *arg0)
{
    func_004373F0(arg0->unk10);
}
