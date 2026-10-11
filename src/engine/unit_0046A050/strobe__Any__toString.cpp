struct func_00477680_Any {
    unsigned int type;
    union {
        int i;
        float f;
        char *s;
    };
};

extern "C" void func_00476EC0(func_00477680_Any *self, const char *s);
extern "C" void func_00476E70(func_00477680_Any *self, const char *s);
extern "C" int func_0057DA20(char *buf, const char *fmt, ...);
extern "C" double func_0057FB50(float f);

extern "C" char *strobe__Any__toString(func_00477680_Any *self) {
    switch (self->type) {
    case 0:
        func_00476EC0(self, "Null");
        break;
    case 1:
        func_00476EC0(self, "");
        break;
    case 3:
    case 4:
        break;
    case 5:
        func_00476EC0(self, self->i ? "true" : "false");
        break;
    case 6: {
        char buf[16];
        float f = self->f;
        int i = (int)f;
        if (f == (float)i) {
            func_0057DA20(buf, "%d", i);
        } else {
            const char *fmt = "%f";
            double d = func_0057FB50(f);
            func_0057DA20(buf, fmt, d);
        }
        func_00476E70(self, buf);
        break;
    }
    case 13:
        func_00476EC0(self, "[type Function]");
        break;
    case 7:
        func_00476EC0(self, "[object Object]");
        break;
    default:
        func_00476EC0(self, "[internal object]");
        break;
    }
    if (self->type == 3) return self->s + 2;
    return self->s;
}
