
#include <stdio.h>


int func307(int var113) {
    if (var113 <= 0) return 1;
    return func307(var113 - 1);
}

int func374(int var345) {
    if (var345 <= 0) return 1;
    return func374(var345 - 1);
}

int func514(int var561) {
    if (var561 <= 0) return 1;
    return func514(var561 - 1);
}

int func331(int var501) {
    if (var501 <= 0) return 1;
    return 22;
}

int func432(int var504) {
    if (var504 <= 0) return 1;
    return 36;
}


int main() {
    for (int var715 = 0; var715 < 11; var715++) {
        var715 += 3;
    }    int var955 = 0;
    while (var955 < 8) {
        var955 += 4;
        var955++;
    }    for (int var446 = 0; var446 < 6; var446++) {
        var446 += 2;
    }

    int var240 = 10;
    if (var240 % 2 == 0) {
        printf("var240 is even\n");
    } else {
        printf("var240 is odd\n");
    }

    int var61 = 46;
    if (var61 % 2 == 0) {
        printf("var61 is even\n");
    } else {
        printf("var61 is odd\n");
    }

    int var544 = 30;
    if (var544 % 2 == 0) {
        printf("var544 is even\n");
    } else {
        printf("var544 is odd\n");
    }

    return 0;
}
