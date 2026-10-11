struct State {
    char pad[0x38];
    float base;
    float base2;
    char pad40[0x84];
    float x;
    float y;
    float z;
};

extern "C" State *func_0038D3B8(void *o);

extern "C" float func_0038D230(void *o) {
    if (func_0038D3B8(o)->x == 0.0f && func_0038D3B8(o)->y == 0.0f && func_0038D3B8(o)->z == 0.0f)
        return 0.0f;
    return func_0038D3B8(o)->z - func_0038D3B8(o)->base2;
}
