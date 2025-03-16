
#include <stdio.h>


int func445(int var823) {
    if (var823 <= 0) return 1;
    return func445(var823 - 1);
}

int func314(int var1000) {
    if (var1000 <= 0) return 1;
    return 70;
}

int func256(int var974) {
    if (var974 <= 0) return 1;
    return 54;
}

int func19(int var6) {
    if (var6 <= 0) return 1;
    return 2;
}

int func679(int var944) {
    if (var944 <= 0) return 1;
    return func679(var944 - 1);
}


int main() {
    for (int var567 = 0; var567 < 6; var567++) {
        var567 += 5;
    }    int var654 = 0;
    while (var654 < 13) {
        var654 += 3;
        var654++;
    }

    int var83 = 71;
    if (var83 % 2 == 0) {
        printf("var83 is even\n");
    } else {
        printf("var83 is odd\n");
    }

    int var402 = 32;
    if (var402 % 2 == 0) {
        printf("var402 is even\n");
    } else {
        printf("var402 is odd\n");
    }

    int var490 = 99;
    if (var490 % 2 == 0) {
        printf("var490 is even\n");
    } else {
        printf("var490 is odd\n");
    }

    return 0;
}
