extern "C" void func_0046F570(void *s, int nbits, unsigned int v);

extern "C" void func_0046F638(void *s, int nbits, unsigned int v)
{
    if (nbits > 8) {
        func_0046F570(s, nbits - 8, v >> 8);
        nbits = 8;
    }
    func_0046F570(s, nbits, v);
}
