struct S { char pad[0x10]; int unk10; };
extern void func_00436E90(int);

void func_005CC558(S *arg0)
{
    func_00436E90(arg0->unk10);
}
