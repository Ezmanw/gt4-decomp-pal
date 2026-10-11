struct S { char pad[0x14]; int unk14; };
extern void func_002C3EE8(int);

void func_0023FC80(S *arg0)
{
    func_002C3EE8(arg0->unk14);
}
