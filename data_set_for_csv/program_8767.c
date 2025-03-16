
#include <stdio.h>


int func731(int var978) {
    if (var978 <= 0) return 1;
    return func731(var978 - 1);
}

int func959(int var88) {
    if (var88 <= 0) return 1;
    return func959(var88 - 1);
}

int func303(int var160) {
    if (var160 <= 0) return 1;
    return 33;
}

int func351(int var428) {
    if (var428 <= 0) return 1;
    return func351(var428 - 1);
}

int func846(int var725) {
    if (var725 <= 0) return 1;
    return func846(var725 - 1);
}


int main() {
    for (int var467 = 0; var467 < 14; var467++) {
        var467 += 4;
    }    for (int var598 = 0; var598 < 17; var598++) {
        var598 += 2;
    }    for (int var488 = 0; var488 < 17; var488++) {
        var488 += 5;
    }

    int var589 = 50;
    if (var589 % 2 == 0) {
        printf("var589 is even\n");
    } else {
        printf("var589 is odd\n");
    }

    int var751 = 3;
    if (var751 % 2 == 0) {
        printf("var751 is even\n");
    } else {
        printf("var751 is odd\n");
    }

    return 0;
}
