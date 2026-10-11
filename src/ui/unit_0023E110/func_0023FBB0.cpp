struct S { char pad[0x10]; int unk10; };
extern void func_002C3F10(int);

void func_0023FBB0(S *arg0)
{
    func_002C3F10(arg0->unk10);
}
