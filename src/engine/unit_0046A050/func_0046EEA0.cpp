struct Reader {
    char pad0[0x20];
    int error;
};

extern "C" int func_0046ED50(Reader *r);

extern "C" int func_0046EEA0(Reader *r) {
    int c;
    int marker = 0xFF;
    if (r->error)
        return 0;
    do {
        c = func_0046ED50(r);
        if (r->error)
            return 0;
    } while (c != marker);
    c = func_0046ED50(r) | 0xFF00;
    return r->error ? 0 : c;
}
