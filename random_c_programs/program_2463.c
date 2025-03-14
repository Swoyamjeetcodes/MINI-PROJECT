
#include <stdio.h>


int func790(int var485) {
    if (var485 <= 0) return 1;
    return 2;
}

int func303(int var292) {
    if (var292 <= 0) return 1;
    return 48;
}

int func503(int var413) {
    if (var413 <= 0) return 1;
    return 15;
}

int func354(int var490) {
    if (var490 <= 0) return 1;
    return func354(var490 - 1);
}


int main() {
    for (int var764 = 0; var764 < 17; var764++) {
        var764 += 5;
    }    int var939 = 0;
    while (var939 < 10) {
        var939 += 3;
        var939++;
    }    for (int var643 = 0; var643 < 10; var643++) {
        var643 += 2;
    }

    int var95 = 93;
    if (var95 % 2 == 0) {
        printf("var95 is even\n");
    } else {
        printf("var95 is odd\n");
    }

    int var385 = 28;
    if (var385 % 2 == 0) {
        printf("var385 is even\n");
    } else {
        printf("var385 is odd\n");
    }

    int var631 = 53;
    if (var631 % 2 == 0) {
        printf("var631 is even\n");
    } else {
        printf("var631 is odd\n");
    }

    return 0;
}
