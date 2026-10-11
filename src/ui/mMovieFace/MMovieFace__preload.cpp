typedef unsigned int u32;

struct StringRep {
    u32 len;
    u32 res;
    u32 ref;
    u32 selfish;
    char *data() { return (char *)(this + 1); }
    char &operator[](u32 s) { return data()[s]; }
};

extern const char D_00697EE8[]; /* "" */

/* gcc 2.96 bastring.h basic_string<char>: c_str() terminates the data unless it is empty. */
struct String {
    char *dat;
    StringRep *rep() const { return (StringRep *)dat - 1; }
    u32 length() const { return rep()->len; }
    const char *data() const { return dat; }
    void terminate() const { (*rep())[length()] = 0; }
    const char *c_str() const
    {
        if (length() == 0)
            return D_00697EE8;
        terminate();
        return data();
    }
};

struct Handle {
    void *p;
    int pad[3];
};

extern "C" void func_003124C8(Handle *h, void *arg);
extern "C" void func_00312470(Handle *h, int in_chrg);
extern "C" String *func_00314A78(void *p);
extern "C" void func_001FD4E8(const char *fmt, ...);
extern const char D_00618E40[];

extern "C" void MMovieFace__preload(void *self, int count, void *arg)
{
    if (count > 0) {
        Handle h;
        func_003124C8(&h, arg);
        func_001FD4E8(D_00618E40, func_00314A78(h.p)->c_str());
        func_00312470(&h, 2);
    }
}
