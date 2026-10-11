extern "C" void *func_003E5240(void *self, int *key);
extern "C" void func_003E2A20(void *item, int *key);
struct Obj { char pad[0x10]; int max; };
extern "C" void *func_003E5160(Obj *self, int *key)
{
    void *item = func_003E5240(self, key);
    if (item == 0)
        return 0;
    func_003E2A20(item, key);
    if (self->max < *key)
        self->max = *key;
    return item;
}
