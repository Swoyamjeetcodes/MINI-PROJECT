
#include <stdio.h>


int func809(int var943) {
    if (var943 <= 0) return 1;
    return func809(var943 - 1);
}

int func670(int var184) {
    if (var184 <= 0) return 1;
    return func670(var184 - 1);
}

int func245(int var731) {
    if (var731 <= 0) return 1;
    return 13;
}


int main() {
    int var330 = 0;
    while (var330 < 19) {
        var330 += 1;
        var330++;
    }    for (int var681 = 0; var681 < 19; var681++) {
        var681 += 1;
    }    for (int var375 = 0; var375 < 5; var375++) {
        var375 += 3;
    }

    int var25 = 81;
    if (var25 % 2 == 0) {
        printf("var25 is even\n");
    } else {
        printf("var25 is odd\n");
    }

    int var945 = 34;
    if (var945 % 2 == 0) {
        printf("var945 is even\n");
    } else {
        printf("var945 is odd\n");
    }

    return 0;
}
