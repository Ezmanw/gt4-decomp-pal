struct Writer;

extern "C" void func_0046F750(Writer *w, int v);
extern "C" void func_0046F6D8(Writer *w, int v);
extern int D_006ABCB8[64];

struct Encoder {
    char pad[0x85C];
    char writer[1];
};

extern "C" void func_0046CCB0(Encoder *e, const int *table, int id) {
    Writer *w = (Writer *)e->writer;
    func_0046F750(w, 0xFFDB);
    func_0046F750(w, 0x43);
    func_0046F6D8(w, id);
    for (int i = 0; i < 64; i++)
        func_0046F6D8(w, table[D_006ABCB8[i]]);
}
