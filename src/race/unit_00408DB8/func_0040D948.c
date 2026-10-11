extern float *func_00386680(int);
struct S { char pad[8]; int h; };
int func_0040D948(struct S *s) { float *p = func_00386680(s->h); if (0.0f < *p) return 0; return 1; }
