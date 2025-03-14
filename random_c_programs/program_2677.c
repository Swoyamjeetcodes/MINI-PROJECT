
#include <stdio.h>


int func787(int var590) {
    if (var590 <= 0) return 1;
    return func787(var590 - 1);
}

int func349(int var164) {
    if (var164 <= 0) return 1;
    return func349(var164 - 1);
}

int func381(int var779) {
    if (var779 <= 0) return 1;
    return 3;
}

int func193(int var475) {
    if (var475 <= 0) return 1;
    return 26;
}

int func614(int var818) {
    if (var818 <= 0) return 1;
    return func614(var818 - 1);
}

int func29(int var120) {
    if (var120 <= 0) return 1;
    return func29(var120 - 1);
}

int func111(int var108) {
    if (var108 <= 0) return 1;
    return 92;
}

int func20(int var452) {
    if (var452 <= 0) return 1;
    return 97;
}

int func722(int var27) {
    if (var27 <= 0) return 1;
    return func722(var27 - 1);
}


int main() {
    for (int var664 = 0; var664 < 15; var664++) {
        var664 += 3;
    }    for (int var30 = 0; var30 < 9; var30++) {
        var30 += 1;
    }    for (int var282 = 0; var282 < 18; var282++) {
        var282 += 1;
    }    int var982 = 0;
    while (var982 < 17) {
        var982 += 4;
        var982++;
    }    int var45 = 0;
    while (var45 < 6) {
        var45 += 2;
        var45++;
    }    int var51 = 0;
    while (var51 < 8) {
        var51 += 5;
        var51++;
    }    int var832 = 0;
    while (var832 < 14) {
        var832 += 3;
        var832++;
    }

    int var330 = 49;
    if (var330 % 2 == 0) {
        printf("var330 is even\n");
    } else {
        printf("var330 is odd\n");
    }

    return 0;
}
