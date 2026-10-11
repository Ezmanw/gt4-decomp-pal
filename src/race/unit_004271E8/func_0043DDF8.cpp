typedef int s32;

struct Item { char pad[0xB8]; };
struct Self { s32 m0; Item items[2]; };
extern "C" void func_0043DBC8(Item *);

extern "C" void func_0043DDF8(Self *self) {
    Item *p = self->items;
    s32 i;
    for (i = 1; i >= 0; i--) {
        func_0043DBC8(p++);
    }
}
