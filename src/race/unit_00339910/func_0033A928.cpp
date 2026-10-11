typedef int s32;
typedef unsigned int u32;

struct Stream_0033A7D0 {
    s32 m0;
    u32 pos;
    u32 end;
};

struct Saved_0033A7D0 {
    char data[0x10];
};

extern "C" void func_0045B9F8(Saved_0033A7D0 *s, Stream_0033A7D0 *st);
extern "C" void func_0045BB18(Saved_0033A7D0 *s, Stream_0033A7D0 *st);
extern "C" void func_0033A5E0(Stream_0033A7D0 *st, Saved_0033A7D0 *s, void *x);

extern "C" bool func_0033A928(Stream_0033A7D0 *st, void *x) {
    Saved_0033A7D0 s;
    func_0045B9F8(&s, st);
    func_0033A5E0(st, &s, x);
    func_0045BB18(&s, st);
    Stream_0033A7D0 *r = (st->end > st->pos) ? 0 : st;
    return r != 0;
}
