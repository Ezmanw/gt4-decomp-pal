/* compiler: ee-gcc2.96-no-strict-aliasing */
struct Bits;

struct Table {
    char pad[0x18];
    unsigned char *lens;
    unsigned char *syms;
};

struct Decoder {
    char pad[0xA70];
    Table *table;
    int done;
    Bits *bits;
};

extern "C" int func_0046F338(Bits *b, int *end);
extern "C" int func_0046F148(Bits *b, int n, int *end);
extern "C" void func_0046F408(Bits *b, int n);

extern "C" int func_00470F20(Decoder *d)
{
    Bits *b = d->bits;
    int last = 0;
    int more = 0;
    int i = func_0046F338(b, &more);
    Table *t = d->table;
    int sym = t->syms[i];
    int len = t->lens[i];
    if (more != 0) {
        int r = func_0046F148(b, len, &last);
        if (last != 0) {
            d->done = 1;
            return r;
        }
    } else {
        func_0046F408(b, len);
    }
    return sym;
}
