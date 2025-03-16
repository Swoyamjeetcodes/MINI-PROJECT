
#include <stdio.h>


int func191(int var175) {
    if (var175 <= 0) return 1;
    return func191(var175 - 1);
}

int func386(int var831) {
    if (var831 <= 0) return 1;
    return func386(var831 - 1);
}

int func496(int var967) {
    if (var967 <= 0) return 1;
    return 7;
}

int func433(int var288) {
    if (var288 <= 0) return 1;
    return 31;
}

int func747(int var930) {
    if (var930 <= 0) return 1;
    return func747(var930 - 1);
}


int main() {
    for (int var167 = 0; var167 < 19; var167++) {
        var167 += 5;
    }    int var428 = 0;
    while (var428 < 8) {
        var428 += 1;
        var428++;
    }    int var351 = 0;
    while (var351 < 18) {
        var351 += 4;
        var351++;
    }

    int var904 = 28;
    if (var904 % 2 == 0) {
        printf("var904 is even\n");
    } else {
        printf("var904 is odd\n");
    }

    int var120 = 90;
    if (var120 % 2 == 0) {
        printf("var120 is even\n");
    } else {
        printf("var120 is odd\n");
    }

    return 0;
}
