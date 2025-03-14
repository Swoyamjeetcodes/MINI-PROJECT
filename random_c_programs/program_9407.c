
#include <stdio.h>


int func266(int var410) {
    if (var410 <= 0) return 1;
    return 21;
}

int func191(int var75) {
    if (var75 <= 0) return 1;
    return 8;
}

int func378(int var226) {
    if (var226 <= 0) return 1;
    return 21;
}

int func242(int var713) {
    if (var713 <= 0) return 1;
    return func242(var713 - 1);
}

int func639(int var170) {
    if (var170 <= 0) return 1;
    return 75;
}

int func272(int var125) {
    if (var125 <= 0) return 1;
    return 4;
}

int func110(int var710) {
    if (var710 <= 0) return 1;
    return 56;
}

int func966(int var741) {
    if (var741 <= 0) return 1;
    return func966(var741 - 1);
}


int main() {
    int var830 = 0;
    while (var830 < 6) {
        var830 += 3;
        var830++;
    }    int var64 = 0;
    while (var64 < 5) {
        var64 += 5;
        var64++;
    }    for (int var751 = 0; var751 < 14; var751++) {
        var751 += 4;
    }    int var319 = 0;
    while (var319 < 16) {
        var319 += 2;
        var319++;
    }

    int var740 = 8;
    if (var740 % 2 == 0) {
        printf("var740 is even\n");
    } else {
        printf("var740 is odd\n");
    }

    int var15 = 0;
    if (var15 % 2 == 0) {
        printf("var15 is even\n");
    } else {
        printf("var15 is odd\n");
    }

    return 0;
}
