
#include <stdio.h>


int func91(int var329) {
    if (var329 <= 0) return 1;
    return func91(var329 - 1);
}

int func941(int var292) {
    if (var292 <= 0) return 1;
    return func941(var292 - 1);
}


int main() {
    for (int var48 = 0; var48 < 5; var48++) {
        var48 += 3;
    }    for (int var751 = 0; var751 < 14; var751++) {
        var751 += 1;
    }    for (int var565 = 0; var565 < 5; var565++) {
        var565 += 4;
    }    int var180 = 0;
    while (var180 < 18) {
        var180 += 2;
        var180++;
    }    int var297 = 0;
    while (var297 < 10) {
        var297 += 4;
        var297++;
    }

    int var606 = 62;
    if (var606 % 2 == 0) {
        printf("var606 is even\n");
    } else {
        printf("var606 is odd\n");
    }

    int var57 = 43;
    if (var57 % 2 == 0) {
        printf("var57 is even\n");
    } else {
        printf("var57 is odd\n");
    }

    int var765 = 75;
    if (var765 % 2 == 0) {
        printf("var765 is even\n");
    } else {
        printf("var765 is odd\n");
    }

    return 0;
}
