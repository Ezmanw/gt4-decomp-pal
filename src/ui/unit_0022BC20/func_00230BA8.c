typedef struct { float x, y, w, h; } Rect;
Rect *func_00231600(void);
void func_00230BA8(void *self, float *x, float *y) {
    Rect *r = func_00231600();
    if (*x < r->x) *x = r->x;
    if (*y < r->y) *y = r->y;
    if (r->x + r->w < *x) *x = r->x + r->w;
    if (r->y + r->h < *y) *y = r->y + r->h;
}
