
#include <stdio.h>


int func288(int var793) {
    if (var793 <= 0) return 1;
    return 34;
}

int func375(int var938) {
    if (var938 <= 0) return 1;
    return func375(var938 - 1);
}

int func176(int var266) {
    if (var266 <= 0) return 1;
    return func176(var266 - 1);
}

int func264(int var156) {
    if (var156 <= 0) return 1;
    return 75;
}


int main() {
    int var526 = 0;
    while (var526 < 10) {
        var526 += 5;
        var526++;
    }    for (int var264 = 0; var264 < 6; var264++) {
        var264 += 2;
    }    int var862 = 0;
    while (var862 < 14) {
        var862 += 5;
        var862++;
    }    int var815 = 0;
    while (var815 < 7) {
        var815 += 2;
        var815++;
    }    for (int var615 = 0; var615 < 11; var615++) {
        var615 += 4;
    }

    int var213 = 99;
    if (var213 % 2 == 0) {
        printf("var213 is even\n");
    } else {
        printf("var213 is odd\n");
    }

    int var712 = 69;
    if (var712 % 2 == 0) {
        printf("var712 is even\n");
    } else {
        printf("var712 is odd\n");
    }

    int var150 = 47;
    if (var150 % 2 == 0) {
        printf("var150 is even\n");
    } else {
        printf("var150 is odd\n");
    }

    int var237 = 70;
    if (var237 % 2 == 0) {
        printf("var237 is even\n");
    } else {
        printf("var237 is odd\n");
    }

    return 0;
}
