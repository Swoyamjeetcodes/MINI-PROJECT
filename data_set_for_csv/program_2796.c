
#include <stdio.h>


int func340(int var665) {
    if (var665 <= 0) return 1;
    return func340(var665 - 1);
}

int func748(int var249) {
    if (var249 <= 0) return 1;
    return func748(var249 - 1);
}


int main() {
    int var20 = 0;
    while (var20 < 12) {
        var20 += 2;
        var20++;
    }    for (int var439 = 0; var439 < 14; var439++) {
        var439 += 2;
    }    for (int var316 = 0; var316 < 13; var316++) {
        var316 += 3;
    }    int var924 = 0;
    while (var924 < 9) {
        var924 += 4;
        var924++;
    }    int var13 = 0;
    while (var13 < 7) {
        var13 += 3;
        var13++;
    }    int var720 = 0;
    while (var720 < 16) {
        var720 += 4;
        var720++;
    }

    int var140 = 21;
    if (var140 % 2 == 0) {
        printf("var140 is even\n");
    } else {
        printf("var140 is odd\n");
    }

    int var28 = 84;
    if (var28 % 2 == 0) {
        printf("var28 is even\n");
    } else {
        printf("var28 is odd\n");
    }

    int var33 = 47;
    if (var33 % 2 == 0) {
        printf("var33 is even\n");
    } else {
        printf("var33 is odd\n");
    }

    int var227 = 89;
    if (var227 % 2 == 0) {
        printf("var227 is even\n");
    } else {
        printf("var227 is odd\n");
    }

    int var193 = 22;
    if (var193 % 2 == 0) {
        printf("var193 is even\n");
    } else {
        printf("var193 is odd\n");
    }

    return 0;
}
