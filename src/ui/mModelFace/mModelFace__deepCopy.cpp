typedef int s32;
typedef short s16;
typedef float f32;

struct Rep {
    s32 len;
    s32 cap;
    s32 ref;
    s32 sel;
};

struct Str {
    char *p;
    char pad[0xC];
};

struct S00659988 {
    const char *name;
};

struct TypeEntry {
    s16 offset;
    s16 pad2;
    s32 type;
};

struct hObject {
    s32 unk0;
    TypeEntry *vtbl;
};

struct mModelFace {
    char pad0[0xA0];
    char unkA0[0x4C];
    char unkEC[0x68];
    char unk154[0x18C];
    s32 unk2E0;
    char pad2E4[0x18];
    f32 unk2FC[3];
    unsigned b0 : 1;
    unsigned b1 : 1;
    unsigned b2 : 1;
    unsigned b3 : 1;
    unsigned b4 : 1;
    unsigned b5 : 1;
    unsigned b6 : 1;
    unsigned b7 : 1;
    unsigned b8 : 1;
};

extern char mModelFace__tf[];
extern char hObject__tf[];

extern "C" void mWidget__deepCopy(mModelFace *, hObject *);
extern "C" mModelFace *GT4MC__FileGT4GameData__loadInstance(s32, void *, s32, void *, void *, void *);
extern "C" void *func_002BE950(mModelFace *);
extern "C" void func_002BE958(mModelFace *, void *);
extern "C" void func_002BEAE0(Str *, mModelFace *);
extern "C" void func_002BEB40(mModelFace *, Str *);
extern "C" struct S00659988 *func_005C11A8(void);
extern "C" void func_003268F0(void *, s32, s32, const char *);
extern "C" void *func_002BECB8(mModelFace *);
extern "C" void func_002BECC0(mModelFace *, void *);
extern "C" void *func_0021A8D8(void *);
extern "C" void func_0021A8E8(void *, void *);
extern "C" void *func_0021A908(void *);
extern "C" void func_0021A918(void *, void *);
extern "C" void func_002025B0(void *, void *);
extern "C" void func_002112C8(void *, void *);

static inline void str_release(Str *s) {
    Rep *q = (Rep *)(s->p - 0x10);
    if (--q->ref == 0) {
        s32 size = q->cap + 0x10;
        func_003268F0(q, size, 4, func_005C11A8()->name);
    }
}

extern "C" void mModelFace__deepCopy(mModelFace *self, hObject *src) {
    mModelFace *o;
    Str tmp;

    o = 0;
    mWidget__deepCopy(self, src);
    if (src != 0) {
        TypeEntry *t = src->vtbl;
        o = GT4MC__FileGT4GameData__loadInstance(t->type, mModelFace__tf, 0, (char *)src + t->offset, hObject__tf, src);
    }
    if (o != 0) {
        func_002BE958(self, func_002BE950(o));
        self->b2 = o->b2;
        self->b3 = o->b3;
        self->b4 = o->b4;
        func_002BEAE0(&tmp, o);
        func_002BEB40(self, &tmp);
        str_release(&tmp);
        self->b6 = o->b6;
        self->b7 = o->b7;
        self->b8 = o->b8;
        func_002BECC0(self, func_002BECB8(o));
        self->unk2E0 = o->unk2E0;
        func_0021A8E8(self->unkA0, func_0021A8D8(o->unkA0));
        func_0021A918(self->unkA0, func_0021A908(o->unkA0));
        {
            f32 *d = self->unk2FC;
            d[0] = o->unk2FC[0];
            d[1] = o->unk2FC[1];
            d[2] = o->unk2FC[2];
        }
        func_002025B0(self->unkEC, o->unkEC);
        func_002112C8(self->unk154, o->unk154);
    }
}
