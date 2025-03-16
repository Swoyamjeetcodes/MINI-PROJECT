
#include <stdio.h>


int func701(int var737) {
    if (var737 <= 0) return 1;
    return 46;
}

int func736(int var851) {
    if (var851 <= 0) return 1;
    return func736(var851 - 1);
}

int func224(int var123) {
    if (var123 <= 0) return 1;
    return func224(var123 - 1);
}

int func632(int var916) {
    if (var916 <= 0) return 1;
    return 85;
}

int func180(int var363) {
    if (var363 <= 0) return 1;
    return 3;
}


int main() {
    for (int var625 = 0; var625 < 19; var625++) {
        var625 += 5;
    }    for (int var720 = 0; var720 < 6; var720++) {
        var720 += 2;
    }

    int var48 = 5;
    if (var48 % 2 == 0) {
        printf("var48 is even\n");
    } else {
        printf("var48 is odd\n");
    }

    int var404 = 96;
    if (var404 % 2 == 0) {
        printf("var404 is even\n");
    } else {
        printf("var404 is odd\n");
    }

    int var951 = 98;
    if (var951 % 2 == 0) {
        printf("var951 is even\n");
    } else {
        printf("var951 is odd\n");
    }

    return 0;
}
