extern "C" int PDISTD__UNIT_MANAGER;
extern "C" unsigned int func_00343620(const unsigned int *ticks) {
    unsigned int v = ticks[0] / (PDISTD__UNIT_MANAGER != 1 ? 100u : 160u);
    return v < 1000000000 ? v : 999999999;
}
