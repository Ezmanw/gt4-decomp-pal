struct State {
    char pad[0x38];
    float base;
    char pad3C[0x88];
    float x;
    float y;
    float z;
};

extern "C" State *func_0038D3B8(void *o);

extern "C" float func_0038D190(void *o) {
    if (func_0038D3B8(o)->x == 0.0f && func_0038D3B8(o)->y == 0.0f && func_0038D3B8(o)->z == 0.0f)
        return 0.0f;
    return func_0038D3B8(o)->y - func_0038D3B8(o)->base;
}
