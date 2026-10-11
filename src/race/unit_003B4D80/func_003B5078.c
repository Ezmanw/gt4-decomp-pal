typedef int s32;
void func_005A48D8(char *a, s32 b, s32 c);
s32 func_004456E8(char *a);
s32 func_004457C8(char *a);
void func_005A6AB0(char *a, s32 b, s32 c);
void func_003B5078(char *arg0) {
    char **temp_v0;
    char *id;

    func_005A48D8(arg0 + 0x348C, 0, 0x80);
    id = arg0 + 0x20;
    func_005A6AB0(arg0 + 0x348C, func_004456E8(id), 0x7F);
    func_005A48D8(arg0 + 0x350C, 0, 0x80);
    func_005A6AB0(arg0 + 0x350C, func_004457C8(id), 0x7F);
    temp_v0 = *(char ***)(arg0 + 0x2880);
    if (temp_v0 != 0) {
        *temp_v0 = arg0 + 0x2890;
    }
    *(s32 *)(arg0 + 0x3488) = 1;
}
