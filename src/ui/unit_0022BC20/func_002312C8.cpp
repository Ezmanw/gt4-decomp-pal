/* bastring.h basic_string::c_str() inline: "" when empty, else terminate() and data(). */
typedef unsigned int u32;

extern char D_006984E0[]; /* "" */

struct StringRep { u32 len; u32 res; u32 ref; u32 selfish; };

struct String {
    char *dat;
    StringRep *rep() const { return (StringRep *)dat - 1; }
    u32 length() const { return rep()->len; }
    char *data() const { return dat; }
    void terminate() const { data()[length()] = 0; }
    const char *c_str() const {
        if (length() == 0)
            return D_006984E0;
        terminate();
        return data();
    }
};

extern void *PDISTD__global_font_manager;
extern "C" int func_00231640(void *self);
extern "C" void func_00490DE0(void *mgr, const char *name, int value);

extern "C" void func_002312C8(void *self, const String &name) {
    func_00490DE0(PDISTD__global_font_manager, name.c_str(), func_00231640(self));
}
