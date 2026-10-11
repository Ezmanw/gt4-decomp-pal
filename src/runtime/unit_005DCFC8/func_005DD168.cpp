struct Node {
    Node *unk0;
    void *unk4;
};
struct Obj {
    char pad0[4];
    Node *unk4;
};

extern "C" void func_003268F0(void *, int, int, int);
extern "C" int *func_005DD7F0(void);
extern "C" void func_0028E4D0(void *, int);

extern "C" void func_005DD168(Obj *arg0) {
    Node *v0 = arg0->unk4;
    Node *s1 = v0->unk0;
    if (s1 != v0) {
        do {
            Node *s0 = s1;
            s1 = s1->unk0;
            func_0028E4D0((char *)s0 + 8, 2);
            func_003268F0(s0, 0xC, 4, *func_005DD7F0());
            v0 = arg0->unk4;
            s0 = s1;
        } while (s1 != v0);
    }
    v0->unk0 = v0;
    v0 = arg0->unk4;
    v0->unk4 = v0;
}
