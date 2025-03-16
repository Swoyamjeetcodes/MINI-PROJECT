
#include <stdio.h>


int func981(int var699) {
    if (var699 <= 0) return 1;
    return func981(var699 - 1);
}

int func788(int var630) {
    if (var630 <= 0) return 1;
    return 45;
}

int func903(int var107) {
    if (var107 <= 0) return 1;
    return 96;
}


int main() {
    for (int var74 = 0; var74 < 6; var74++) {
        var74 += 4;
    }    for (int var357 = 0; var357 < 16; var357++) {
        var357 += 4;
    }    int var680 = 0;
    while (var680 < 14) {
        var680 += 1;
        var680++;
    }

    int var774 = 95;
    if (var774 % 2 == 0) {
        printf("var774 is even\n");
    } else {
        printf("var774 is odd\n");
    }

    int var291 = 26;
    if (var291 % 2 == 0) {
        printf("var291 is even\n");
    } else {
        printf("var291 is odd\n");
    }

    int var548 = 36;
    if (var548 % 2 == 0) {
        printf("var548 is even\n");
    } else {
        printf("var548 is odd\n");
    }

    int var138 = 9;
    if (var138 % 2 == 0) {
        printf("var138 is even\n");
    } else {
        printf("var138 is odd\n");
    }

    return 0;
}
