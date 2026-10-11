struct Key { char c[5]; };
extern "C" int func_0043A740(const Key *k, int len);

struct Base {
    virtual void v00(); virtual void v01(); virtual void v02();
    virtual int v03(int hash);
};
struct Table : Base {
    Key key;
};

extern "C" int func_004393E8(Table *t, const Key *k)
{
    t->key = *k;
    return t->v03(func_0043A740(k, 5));
}
