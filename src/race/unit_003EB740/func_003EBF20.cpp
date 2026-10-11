struct Query {
    float value;
    int pad4[3];
    int m10;
    int m14;
    int pad18[2];
};

struct State {
    int id;
    float value;
};

extern "C" void func_00427B78(Query *q, int id, float cur, float x);
extern "C" int func_00429F38(void *ctx, Query *q);

extern "C" void func_003EBF20(State *s, void *ctx, int arg, float x) {
    if (ctx && s->id >= 0) {
        Query q;
        func_00427B78(&q, s->id, s->value, x);
        q.m10 = 0;
        q.m14 = arg;
        if (func_00429F38(ctx, &q))
            s->value = q.value;
    }
}
