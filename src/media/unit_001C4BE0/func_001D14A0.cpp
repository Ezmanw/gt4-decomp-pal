typedef unsigned long long u64;

struct Key_001D1478 {
    u64 id : 56;
    u64 kind : 8;
};

extern "C" u64 func_001CD868(void *src);
extern "C" unsigned char func_001CD888(void *src);

extern "C" void func_001D14A0(Key_001D1478 *key, char *src) {
    key->id = func_001CD868(src);
    key->kind = func_001CD888(src + 0x24);
}
