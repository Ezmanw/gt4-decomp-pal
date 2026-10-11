struct Mat {
    char pad[0x20];
    float w;
};

extern "C" void func_0048DA58(Mat *out, int row, Mat *a, Mat *b);

extern "C" void func_0048DE08(Mat *out, Mat *a, Mat *b) {
    func_0048DA58(out, 0, a, b);
    func_0048DA58(out, 1, a, b);
    out->w = a->w + b->w;
}
