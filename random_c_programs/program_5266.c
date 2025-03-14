
#include <stdio.h>


int func444(int var24) {
    if (var24 <= 0) return 1;
    return func444(var24 - 1);
}

int func528(int var259) {
    if (var259 <= 0) return 1;
    return func528(var259 - 1);
}


int main() {
    for (int var647 = 0; var647 < 13; var647++) {
        var647 += 5;
    }    for (int var276 = 0; var276 < 11; var276++) {
        var276 += 2;
    }    int var469 = 0;
    while (var469 < 8) {
        var469 += 4;
        var469++;
    }    int var762 = 0;
    while (var762 < 10) {
        var762 += 4;
        var762++;
    }    for (int var379 = 0; var379 < 14; var379++) {
        var379 += 5;
    }    for (int var400 = 0; var400 < 11; var400++) {
        var400 += 1;
    }    int var715 = 0;
    while (var715 < 20) {
        var715 += 1;
        var715++;
    }

    int var55 = 68;
    if (var55 % 2 == 0) {
        printf("var55 is even\n");
    } else {
        printf("var55 is odd\n");
    }

    int var494 = 90;
    if (var494 % 2 == 0) {
        printf("var494 is even\n");
    } else {
        printf("var494 is odd\n");
    }

    return 0;
}
