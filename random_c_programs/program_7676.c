
#include <stdio.h>


int func428(int var751) {
    if (var751 <= 0) return 1;
    return 12;
}

int func567(int var42) {
    if (var42 <= 0) return 1;
    return 73;
}

int func589(int var615) {
    if (var615 <= 0) return 1;
    return func589(var615 - 1);
}

int func888(int var787) {
    if (var787 <= 0) return 1;
    return func888(var787 - 1);
}

int func611(int var508) {
    if (var508 <= 0) return 1;
    return func611(var508 - 1);
}


int main() {
    for (int var612 = 0; var612 < 10; var612++) {
        var612 += 5;
    }    for (int var294 = 0; var294 < 11; var294++) {
        var294 += 1;
    }    for (int var946 = 0; var946 < 20; var946++) {
        var946 += 2;
    }

    int var839 = 34;
    if (var839 % 2 == 0) {
        printf("var839 is even\n");
    } else {
        printf("var839 is odd\n");
    }

    return 0;
}
