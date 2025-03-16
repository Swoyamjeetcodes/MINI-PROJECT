
#include <stdio.h>


int func925(int var559) {
    if (var559 <= 0) return 1;
    return func925(var559 - 1);
}

int func168(int var217) {
    if (var217 <= 0) return 1;
    return 26;
}

int func10(int var971) {
    if (var971 <= 0) return 1;
    return func10(var971 - 1);
}

int func763(int var379) {
    if (var379 <= 0) return 1;
    return func763(var379 - 1);
}

int func694(int var124) {
    if (var124 <= 0) return 1;
    return func694(var124 - 1);
}


int main() {
    for (int var601 = 0; var601 < 9; var601++) {
        var601 += 3;
    }    int var10 = 0;
    while (var10 < 8) {
        var10 += 3;
        var10++;
    }

    int var788 = 90;
    if (var788 % 2 == 0) {
        printf("var788 is even\n");
    } else {
        printf("var788 is odd\n");
    }

    int var610 = 21;
    if (var610 % 2 == 0) {
        printf("var610 is even\n");
    } else {
        printf("var610 is odd\n");
    }

    return 0;
}
