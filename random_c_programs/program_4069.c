
#include <stdio.h>


int func211(int var51) {
    if (var51 <= 0) return 1;
    return 55;
}

int func477(int var910) {
    if (var910 <= 0) return 1;
    return func477(var910 - 1);
}

int func940(int var403) {
    if (var403 <= 0) return 1;
    return func940(var403 - 1);
}

int func247(int var756) {
    if (var756 <= 0) return 1;
    return func247(var756 - 1);
}

int func272(int var952) {
    if (var952 <= 0) return 1;
    return func272(var952 - 1);
}

int func294(int var315) {
    if (var315 <= 0) return 1;
    return 69;
}

int func654(int var754) {
    if (var754 <= 0) return 1;
    return func654(var754 - 1);
}

int func777(int var343) {
    if (var343 <= 0) return 1;
    return func777(var343 - 1);
}


int main() {
    int var650 = 0;
    while (var650 < 9) {
        var650 += 3;
        var650++;
    }    for (int var660 = 0; var660 < 9; var660++) {
        var660 += 2;
    }    int var196 = 0;
    while (var196 < 9) {
        var196 += 5;
        var196++;
    }    int var211 = 0;
    while (var211 < 14) {
        var211 += 4;
        var211++;
    }

    int var64 = 44;
    if (var64 % 2 == 0) {
        printf("var64 is even\n");
    } else {
        printf("var64 is odd\n");
    }

    int var830 = 45;
    if (var830 % 2 == 0) {
        printf("var830 is even\n");
    } else {
        printf("var830 is odd\n");
    }

    return 0;
}
