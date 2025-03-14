
#include <stdio.h>


int func769(int var686) {
    if (var686 <= 0) return 1;
    return 93;
}

int func615(int var474) {
    if (var474 <= 0) return 1;
    return func615(var474 - 1);
}

int func451(int var606) {
    if (var606 <= 0) return 1;
    return 70;
}

int func525(int var392) {
    if (var392 <= 0) return 1;
    return func525(var392 - 1);
}

int func578(int var14) {
    if (var14 <= 0) return 1;
    return func578(var14 - 1);
}


int main() {
    for (int var114 = 0; var114 < 18; var114++) {
        var114 += 2;
    }    int var939 = 0;
    while (var939 < 16) {
        var939 += 4;
        var939++;
    }

    int var433 = 90;
    if (var433 % 2 == 0) {
        printf("var433 is even\n");
    } else {
        printf("var433 is odd\n");
    }

    int var830 = 37;
    if (var830 % 2 == 0) {
        printf("var830 is even\n");
    } else {
        printf("var830 is odd\n");
    }

    int var211 = 99;
    if (var211 % 2 == 0) {
        printf("var211 is even\n");
    } else {
        printf("var211 is odd\n");
    }

    return 0;
}
