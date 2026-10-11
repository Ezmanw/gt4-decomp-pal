struct Buf {
    char *base;
    int m4;
    char *cur;
};

struct Cursor {
    int m0;
    int pos;
    int end;
    int mC;
};

extern "C" void func_0045B9F8(Cursor *c, Buf *b);
extern "C" int func_0045B720(Cursor *c, const char *tag);
extern "C" void GT4Model__BinStreamReader__readArray(Buf *b, const char *name, int len);
extern "C" void func_0045BB18(Cursor *c, Buf *b);
extern const char D_0069F300[];

extern "C" void func_0033A990(Buf *b, const char *name) {
    Cursor c;
    func_0045B9F8(&c, b);
    if (!func_0045B720(&c, D_0069F300)) {
        b->cur = b->base + c.pos;
        return;
    }
    if (name)
        GT4Model__BinStreamReader__readArray(b, name, c.end - 8);
    func_0045BB18(&c, b);
}
