
#include <stdio.h>


int func245(int var492) {
    if (var492 <= 0) return 1;
    return func245(var492 - 1);
}

int func321(int var136) {
    if (var136 <= 0) return 1;
    return func321(var136 - 1);
}

int func287(int var614) {
    if (var614 <= 0) return 1;
    return func287(var614 - 1);
}

int func140(int var384) {
    if (var384 <= 0) return 1;
    return 46;
}

int func106(int var311) {
    if (var311 <= 0) return 1;
    return 10;
}

int func339(int var108) {
    if (var108 <= 0) return 1;
    return func339(var108 - 1);
}

int func701(int var570) {
    if (var570 <= 0) return 1;
    return func701(var570 - 1);
}


int main() {
    for (int var579 = 0; var579 < 12; var579++) {
        var579 += 4;
    }    for (int var123 = 0; var123 < 11; var123++) {
        var123 += 5;
    }    int var99 = 0;
    while (var99 < 20) {
        var99 += 3;
        var99++;
    }    for (int var55 = 0; var55 < 17; var55++) {
        var55 += 2;
    }    for (int var841 = 0; var841 < 16; var841++) {
        var841 += 1;
    }

    int var252 = 40;
    if (var252 % 2 == 0) {
        printf("var252 is even\n");
    } else {
        printf("var252 is odd\n");
    }

    int var657 = 25;
    if (var657 % 2 == 0) {
        printf("var657 is even\n");
    } else {
        printf("var657 is odd\n");
    }

    return 0;
}
