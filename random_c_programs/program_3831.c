
#include <stdio.h>


int func486(int var13) {
    if (var13 <= 0) return 1;
    return func486(var13 - 1);
}

int func855(int var598) {
    if (var598 <= 0) return 1;
    return func855(var598 - 1);
}

int func282(int var877) {
    if (var877 <= 0) return 1;
    return func282(var877 - 1);
}


int main() {
    for (int var123 = 0; var123 < 14; var123++) {
        var123 += 2;
    }    int var24 = 0;
    while (var24 < 19) {
        var24 += 1;
        var24++;
    }    for (int var714 = 0; var714 < 5; var714++) {
        var714 += 1;
    }

    int var429 = 86;
    if (var429 % 2 == 0) {
        printf("var429 is even\n");
    } else {
        printf("var429 is odd\n");
    }

    int var908 = 90;
    if (var908 % 2 == 0) {
        printf("var908 is even\n");
    } else {
        printf("var908 is odd\n");
    }

    return 0;
}
