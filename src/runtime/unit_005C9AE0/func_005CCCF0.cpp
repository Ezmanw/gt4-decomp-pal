struct S { char pad[0x10]; int unk10; };
extern void func_00437540(int);

void func_005CCCF0(S *arg0)
{
    func_00437540(arg0->unk10);
}
