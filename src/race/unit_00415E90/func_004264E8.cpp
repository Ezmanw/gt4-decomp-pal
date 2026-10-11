typedef int u128 __attribute__((mode(TI)));
struct Mat {
    u128 r0, r1, r2, r3;
    Mat() {}
    Mat(const Mat &o) { r0 = o.r0; r1 = o.r1; r2 = o.r2; r3 = o.r3; }
    Mat &operator=(const Mat &o) { r0 = o.r0; r1 = o.r1; r2 = o.r2; r3 = o.r3; return *this; }
};
struct Vec;
extern "C" Mat func_00487020(const Vec *v);
extern "C" void func_004262D0(Mat *m, const Vec *v);

extern "C" void func_004264E8(Mat *out, const Vec *pos, const Vec *rot) {
    Mat m;
    *out = m = func_00487020(rot);
    func_004262D0(out, pos);
}
