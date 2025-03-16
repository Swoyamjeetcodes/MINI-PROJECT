
#include <stdio.h>


int func562(int var79) {
    if (var79 <= 0) return 1;
    return 12;
}

int func628(int var632) {
    if (var632 <= 0) return 1;
    return 11;
}

int func87(int var45) {
    if (var45 <= 0) return 1;
    return func87(var45 - 1);
}


int main() {
    int var621 = 0;
    while (var621 < 16) {
        var621 += 4;
        var621++;
    }    for (int var681 = 0; var681 < 16; var681++) {
        var681 += 5;
    }    int var760 = 0;
    while (var760 < 6) {
        var760 += 2;
        var760++;
    }    for (int var522 = 0; var522 < 14; var522++) {
        var522 += 5;
    }    for (int var476 = 0; var476 < 13; var476++) {
        var476 += 5;
    }

    int var802 = 26;
    if (var802 % 2 == 0) {
        printf("var802 is even\n");
    } else {
        printf("var802 is odd\n");
    }

    int var1 = 3;
    if (var1 % 2 == 0) {
        printf("var1 is even\n");
    } else {
        printf("var1 is odd\n");
    }

    int var766 = 47;
    if (var766 % 2 == 0) {
        printf("var766 is even\n");
    } else {
        printf("var766 is odd\n");
    }

    int var874 = 12;
    if (var874 % 2 == 0) {
        printf("var874 is even\n");
    } else {
        printf("var874 is odd\n");
    }

    int var998 = 63;
    if (var998 % 2 == 0) {
        printf("var998 is even\n");
    } else {
        printf("var998 is odd\n");
    }

    int var280 = 26;
    if (var280 % 2 == 0) {
        printf("var280 is even\n");
    } else {
        printf("var280 is odd\n");
    }

    return 0;
}
