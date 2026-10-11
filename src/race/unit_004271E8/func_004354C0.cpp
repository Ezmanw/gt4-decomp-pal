struct Node {
    char pad[0x10];
    unsigned long long offset : 24;
    unsigned long long rest : 40;
};
extern "C" unsigned int func_0042F840(Node *n);

extern "C" void func_004354C0(Node *n, unsigned int addr)
{
    n->offset = addr - func_0042F840(n);
}
