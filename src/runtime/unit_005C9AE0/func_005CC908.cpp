struct S { char pad[0x10]; int unk10; };
extern void func_00437660(int);

void func_005CC908(S *arg0)
{
    func_00437660(arg0->unk10);
}
