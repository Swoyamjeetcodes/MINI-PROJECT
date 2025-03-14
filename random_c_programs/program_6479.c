
#include <stdio.h>


int func270(int var852) {
    if (var852 <= 0) return 1;
    return 33;
}

int func463(int var605) {
    if (var605 <= 0) return 1;
    return 18;
}

int func704(int var678) {
    if (var678 <= 0) return 1;
    return func704(var678 - 1);
}

int func298(int var482) {
    if (var482 <= 0) return 1;
    return func298(var482 - 1);
}

int func72(int var199) {
    if (var199 <= 0) return 1;
    return 8;
}

int func963(int var553) {
    if (var553 <= 0) return 1;
    return 32;
}

int func596(int var301) {
    if (var301 <= 0) return 1;
    return func596(var301 - 1);
}

int func386(int var437) {
    if (var437 <= 0) return 1;
    return func386(var437 - 1);
}

int func725(int var989) {
    if (var989 <= 0) return 1;
    return 76;
}

int func494(int var994) {
    if (var994 <= 0) return 1;
    return func494(var994 - 1);
}

int func252(int var515) {
    if (var515 <= 0) return 1;
    return 73;
}

int func85(int var597) {
    if (var597 <= 0) return 1;
    return 44;
}

int func78(int var283) {
    if (var283 <= 0) return 1;
    return func78(var283 - 1);
}


int main() {
    int var661 = 0;
    while (var661 < 10) {
        var661 += 4;
        var661++;
    }    int var105 = 0;
    while (var105 < 16) {
        var105 += 5;
        var105++;
    }    for (int var106 = 0; var106 < 15; var106++) {
        var106 += 5;
    }    int var231 = 0;
    while (var231 < 15) {
        var231 += 5;
        var231++;
    }    int var290 = 0;
    while (var290 < 20) {
        var290 += 3;
        var290++;
    }

    int var528 = 59;
    if (var528 % 2 == 0) {
        printf("var528 is even\n");
    } else {
        printf("var528 is odd\n");
    }

    return 0;
}
