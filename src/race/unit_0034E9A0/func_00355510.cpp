struct Font {
    char pad0[0x150];
    short size;
    char pad152[3];
    unsigned char id;
};

struct Layout {
    int v[4];
};

extern "C" void func_00355168(Font *f, const char *text, Layout *out, int flags);
extern "C" void func_003553E8(int id, Layout *layout, int x, int y);

extern "C" void func_00355510(Font *f, const char *text, short size, int x, int y)
{
    Layout layout;
    short saved = f->size;
    f->size = size;
    func_00355168(f, text, &layout, 0);
    func_003553E8(f->id, &layout, x, y);
    f->size = saved;
}
