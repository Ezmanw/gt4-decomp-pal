struct Box {
    float row[2][4];
    float extra;
};

extern "C" void func_0048DA98(Box *out, int row, const Box *a, const Box *b);

extern "C" void func_0048DE78(Box *out, const Box *a, const Box *b)
{
    func_0048DA98(out, 0, a, b);
    func_0048DA98(out, 1, a, b);
    out->extra = a->extra - b->extra;
}
