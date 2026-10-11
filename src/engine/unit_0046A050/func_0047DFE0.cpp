struct Vec2 { float x, y; };
struct Mat { float m[16]; };

struct Node {
    char pad[0x2C];
    char xform[0x2C];
    Node *parent;
};

extern "C" void func_0047E7D8(void *xform, Mat *m);
extern "C" void func_0047E590(const Mat *m, const Vec2 *in, Vec2 *out);

extern "C" void func_0047DFE0(Node *n, Vec2 *p) {
    Vec2 v = *p;
    Mat m;
    func_0047E7D8(n->xform, &m);
    func_0047E590(&m, &v, p);
    if (n->parent)
        func_0047DFE0(n->parent, p);
}
