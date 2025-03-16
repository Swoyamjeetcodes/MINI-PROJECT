
#include <stdio.h>


int func362(int var280) {
    if (var280 <= 0) return 1;
    return 48;
}

int func605(int var945) {
    if (var945 <= 0) return 1;
    return 47;
}

int func757(int var223) {
    if (var223 <= 0) return 1;
    return func757(var223 - 1);
}

int func865(int var446) {
    if (var446 <= 0) return 1;
    return 56;
}


int main() {
    for (int var150 = 0; var150 < 9; var150++) {
        var150 += 1;
    }    for (int var781 = 0; var781 < 17; var781++) {
        var781 += 3;
    }    for (int var370 = 0; var370 < 18; var370++) {
        var370 += 3;
    }

    int var233 = 93;
    if (var233 % 2 == 0) {
        printf("var233 is even\n");
    } else {
        printf("var233 is odd\n");
    }

    int var53 = 89;
    if (var53 % 2 == 0) {
        printf("var53 is even\n");
    } else {
        printf("var53 is odd\n");
    }

    int var584 = 5;
    if (var584 % 2 == 0) {
        printf("var584 is even\n");
    } else {
        printf("var584 is odd\n");
    }

    return 0;
}
