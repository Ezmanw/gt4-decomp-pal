struct func_004778D0_Rep {
    int len;
    int cap;
    int ref;
    int sel;
};

struct func_004778D0_Str {
    char *p;
    func_004778D0_Rep *rep() const { return (func_004778D0_Rep *)(p - 0x10); }
    unsigned int length() const { return rep()->len; }
    const char *c_str() const {
        if (length() == 0) return "";
        p[length()] = 0;
        return p;
    }
};

struct func_004778D0_Value {
    int type;
    union {
        float f;
        int i;
        void *p;
        char *s;
    };
};

struct func_004778D0_Node {
    int type;
    union {
        char *s;
        int *map;
        void *p;
    };
};

extern "C" unsigned int func_0057F260(const char *s);
extern "C" int func_005FBDD0(const func_004778D0_Str *self, const char *s, unsigned int pos, unsigned int n);
extern "C" func_004778D0_Value *func_00481608(void *map, const func_004778D0_Str *name);
extern "C" void func_00476B40(func_004778D0_Value *self, const func_004778D0_Value *other);
extern "C" func_004778D0_Value *func_0047AC68(void *p);
extern "C" void func_0047BB98(func_004778D0_Value *ret, void *p, const func_004778D0_Str *name);
extern "C" void func_0047CE10(func_004778D0_Value *ret, void *p, const func_004778D0_Str *name);
extern "C" void func_0047C6C8(func_004778D0_Value *ret, const func_004778D0_Str *name);
extern "C" void func_0047CA78(func_004778D0_Value *ret, const func_004778D0_Str *name);
extern "C" int func_0057D9C0(const char *fmt, ...);

static inline int compare(const func_004778D0_Str *s, const char *t) {
    return func_005FBDD0(s, t, 0, func_0057F260(t));
}

extern "C" func_004778D0_Value *func_004778D0(func_004778D0_Value *ret, func_004778D0_Node *node, const func_004778D0_Str *name) {
    switch (node->type) {
    case 7: {
        func_004778D0_Value *v = func_00481608(node->map + 1, name);
        if (v != 0) {
            func_00476B40(ret, v);
        } else {
            ret->type = 1;
        }
        break;
    }
    case 13:
        if (compare(name, "PROTOTYPE") == 0) {
            func_00476B40(ret, func_0047AC68(node->p));
            break;
        }
        func_0057D9C0("\xcc\xa4\xc4\xea\xb5\xc1\xa4\xce\xa5\xe1\xa5\xf3\xa5\xd0 %s \xa4\xac\xbb\xb2\xbe\xc8\xa4\xb5\xa4\xec\xa4\xde\xa4\xb7\xa4\xbf.\n", name->c_str());
        ret->type = 1;
        break;
    case 10:
        func_0047BB98(ret, &node->p, name);
        break;
    case 11:
        func_0047CE10(ret, &node->p, name);
        break;
    case 8:
        func_0047C6C8(ret, name);
        break;
    case 3:
        if (compare(name, "LENGTH") == 0) {
            ret->f = (float)func_0057F260(node->s + 2);
            ret->type = 6;
            break;
        }
    case 4:
        if (compare(name, "LENGTH") == 0) {
            ret->f = (float)func_0057F260(node->s);
            ret->type = 6;
            break;
        }
    case 9:
        func_0047CA78(ret, name);
        break;
    default:
        func_0057D9C0("\xcc\xa4\xc4\xea\xb5\xc1\xa4\xce\xa5\xe1\xa5\xf3\xa5\xd0 %s \xa4\xac\xbb\xb2\xbe\xc8\xa4\xb5\xa4\xec\xa4\xde\xa4\xb7\xa4\xbf.\n", name->c_str());
        ret->type = 1;
        break;
    }
    return ret;
}
