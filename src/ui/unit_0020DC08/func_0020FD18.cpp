struct Reader;
extern "C" int func_0020FB98(Reader *r);

extern "C" void func_0020FD18(Reader *r, int depth) {
    while (depth == 0) {
        if (func_0020FB98(r) == '{')
            depth++;
    }
    while (depth > 0) {
        int c = func_0020FB98(r);
        if (c == '{')
            depth++;
        if (c == '}')
            depth--;
    }
}
