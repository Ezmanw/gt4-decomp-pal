struct func_00438A68_State {
    unsigned char flags;
    unsigned char mode;
    signed char count;
    unsigned char pad3;
    short value;
    short pad6;
    short a;
    short b;
    short d;
    short c;
};

struct func_00438A68_Obj {
    func_00438A68_State *state;
};

extern "C" int func_00438A40(int x);

static inline bool func_00438A68_isOn(int x) { return x >= 0x4000; }

extern "C" void func_00438A68(func_00438A68_Obj *self, int mode, int type, int value) {
    func_00438A68_State *s = self->state;
    switch (type) {
    case -1:
        break;
    case 0: {
        int v = value + 4;
        int r;
        if (value < 0) v = value - 4;
        v >>= 3;
        if (v >= 0x1000) {
            r = 0x1000;
        } else if (v < -0xFFF) {
            r = -0x1000;
        } else {
            r = v;
        }
        value = r;
        if (mode == 2) {
            if (value == 0) break;
            value = -value;
        }
        s->value = value;
        s->mode = mode;
        s->flags |= 1;
        break;
    }
    case 1:
        if (func_00438A68_isOn(value)) {
            s->count--;
        }
        break;
    case 2:
        if (func_00438A68_isOn(value)) {
            s->count++;
        }
        break;
    case 3:
        value = func_00438A40(value);
        if (value != 0) {
            s->a = value;
            s->flags |= 2;
        }
        break;
    case 4:
        value = func_00438A40(value);
        if (value != 0) {
            s->b = value;
            s->flags |= 4;
        }
        break;
    case 5:
        value = func_00438A40(value);
        if (value != 0) {
            s->c = value;
            s->flags |= 0x10;
        }
        break;
    case 6: {
        int v = func_00438A40(value);
        if (v != 0) {
            s->d = v;
            s->flags |= 8;
        }
        break;
    }
    }
}
