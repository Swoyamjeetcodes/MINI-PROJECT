
#include <stdio.h>


int func381(int var652) {
    if (var652 <= 0) return 1;
    return func381(var652 - 1);
}

int func701(int var131) {
    if (var131 <= 0) return 1;
    return func701(var131 - 1);
}

int func65(int var520) {
    if (var520 <= 0) return 1;
    return 93;
}

int func97(int var903) {
    if (var903 <= 0) return 1;
    return func97(var903 - 1);
}

int func705(int var662) {
    if (var662 <= 0) return 1;
    return 17;
}


int main() {
    int var40 = 0;
    while (var40 < 17) {
        var40 += 4;
        var40++;
    }    int var952 = 0;
    while (var952 < 7) {
        var952 += 4;
        var952++;
    }    for (int var286 = 0; var286 < 18; var286++) {
        var286 += 1;
    }    for (int var605 = 0; var605 < 6; var605++) {
        var605 += 1;
    }    int var1000 = 0;
    while (var1000 < 15) {
        var1000 += 2;
        var1000++;
    }

    int var593 = 48;
    if (var593 % 2 == 0) {
        printf("var593 is even\n");
    } else {
        printf("var593 is odd\n");
    }

    int var439 = 38;
    if (var439 % 2 == 0) {
        printf("var439 is even\n");
    } else {
        printf("var439 is odd\n");
    }

    return 0;
}
