
#include <stdio.h>


int func813(int var903) {
    if (var903 <= 0) return 1;
    return func813(var903 - 1);
}

int func701(int var423) {
    if (var423 <= 0) return 1;
    return 84;
}

int func814(int var446) {
    if (var446 <= 0) return 1;
    return func814(var446 - 1);
}


int main() {
    int var370 = 0;
    while (var370 < 8) {
        var370 += 4;
        var370++;
    }    int var250 = 0;
    while (var250 < 17) {
        var250 += 1;
        var250++;
    }    int var875 = 0;
    while (var875 < 13) {
        var875 += 2;
        var875++;
    }

    int var836 = 14;
    if (var836 % 2 == 0) {
        printf("var836 is even\n");
    } else {
        printf("var836 is odd\n");
    }

    int var768 = 4;
    if (var768 % 2 == 0) {
        printf("var768 is even\n");
    } else {
        printf("var768 is odd\n");
    }

    int var982 = 14;
    if (var982 % 2 == 0) {
        printf("var982 is even\n");
    } else {
        printf("var982 is odd\n");
    }

    return 0;
}
