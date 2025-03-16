
#include <stdio.h>


int func370(int var200) {
    if (var200 <= 0) return 1;
    return func370(var200 - 1);
}

int func984(int var468) {
    if (var468 <= 0) return 1;
    return func984(var468 - 1);
}

int func394(int var992) {
    if (var992 <= 0) return 1;
    return func394(var992 - 1);
}


int main() {
    for (int var951 = 0; var951 < 10; var951++) {
        var951 += 4;
    }    for (int var713 = 0; var713 < 11; var713++) {
        var713 += 1;
    }    int var262 = 0;
    while (var262 < 5) {
        var262 += 3;
        var262++;
    }    for (int var631 = 0; var631 < 20; var631++) {
        var631 += 1;
    }    for (int var146 = 0; var146 < 6; var146++) {
        var146 += 2;
    }    for (int var921 = 0; var921 < 7; var921++) {
        var921 += 3;
    }

    int var760 = 2;
    if (var760 % 2 == 0) {
        printf("var760 is even\n");
    } else {
        printf("var760 is odd\n");
    }

    int var618 = 98;
    if (var618 % 2 == 0) {
        printf("var618 is even\n");
    } else {
        printf("var618 is odd\n");
    }

    int var236 = 76;
    if (var236 % 2 == 0) {
        printf("var236 is even\n");
    } else {
        printf("var236 is odd\n");
    }

    int var96 = 100;
    if (var96 % 2 == 0) {
        printf("var96 is even\n");
    } else {
        printf("var96 is odd\n");
    }

    int var133 = 52;
    if (var133 % 2 == 0) {
        printf("var133 is even\n");
    } else {
        printf("var133 is odd\n");
    }

    return 0;
}
