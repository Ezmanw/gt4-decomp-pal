struct Obj {
    void *data;
};

extern "C" int func_00486320(Obj *o, void *key);
extern "C" int func_004863C8(Obj *o, int index, void *value);

extern "C" int func_00486400(Obj *o, void *key, void *value) {
    if (o->data == 0)
        return 0;
    return func_004863C8(o, func_00486320(o, key), value);
}
