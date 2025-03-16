
#include <stdio.h>


int func392(int var270) {
    if (var270 <= 0) return 1;
    return func392(var270 - 1);
}

int func337(int var180) {
    if (var180 <= 0) return 1;
    return func337(var180 - 1);
}

int func263(int var565) {
    if (var565 <= 0) return 1;
    return 25;
}

int func158(int var510) {
    if (var510 <= 0) return 1;
    return 93;
}

int func557(int var942) {
    if (var942 <= 0) return 1;
    return func557(var942 - 1);
}


int main() {
    int var545 = 0;
    while (var545 < 17) {
        var545 += 3;
        var545++;
    }

    int var506 = 13;
    if (var506 % 2 == 0) {
        printf("var506 is even\n");
    } else {
        printf("var506 is odd\n");
    }

    int var28 = 55;
    if (var28 % 2 == 0) {
        printf("var28 is even\n");
    } else {
        printf("var28 is odd\n");
    }

    return 0;
}
