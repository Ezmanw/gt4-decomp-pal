struct Rec {
    int word;
    unsigned int pad1 : 24;
    int kind : 8;
    int pad[2];
};

extern "C" void *func_004415C0(void);
extern "C" int func_00445E60(void *self, Rec *rec);
extern "C" float func_0043E088(int id);

extern "C" float func_0043E128(void) {
    Rec rec;
    if (!func_00445E60(func_004415C0(), &rec))
        return 0.0f;
    int hidden = (rec.word >> 26) & 1;
    int on = rec.kind & 1;
    float v = func_0043E088(rec.word & 0xFFFFFF);
    return v + ((!hidden && on) ? 1.0f : 0.0f);
}
