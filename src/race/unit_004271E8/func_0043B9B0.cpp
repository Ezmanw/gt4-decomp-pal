typedef unsigned int u32;

struct BitSet {
    u32 unk0;
    u32 bits[1];
};

extern "C" void func_0043B980(BitSet *self, int a, u32 n);

extern "C" bool func_0043B9B0(BitSet *self, int a, u32 n) {
    func_0043B980(self, a, n);
    return (self->bits[n >> 5] & (1 << (n & 31))) != 0;
}
