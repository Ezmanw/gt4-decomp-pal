struct Pool { char *base; int used; char *free; };

extern "C" int func_003C1618(Pool *self);

extern "C" void func_003C2378(Pool *self)
{
    self->used = 0;
    self->free = self->base;
    int size = func_003C1618(self);
    char *p = self->free;
    for (int i = 0; i < 127; i++) {
        char *next = p + size;
        *(char **)p = next;
        p = next;
    }
    *(char **)p = 0;
}
