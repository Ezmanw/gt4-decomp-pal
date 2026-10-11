typedef short s16;
typedef int s32;

struct VEntry {
    s16 delta;
    s16 index;
    s32 (*fn)(void *self, s32 a, s32 b);
};

struct Obj {
    s32 handle;
    s32 pad4[2];
    VEntry *vtbl;
};

extern "C" s32 func_004386B8(s32 handle, s32 key);

extern "C" s32 func_00438818(Obj *self, s32 key, s32 value) {
    s32 r = func_004386B8(self->handle, key);
    VEntry *e = &self->vtbl[6];
    return e->fn((char *)self + e->delta, r, value);
}
