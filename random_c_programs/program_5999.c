
#include <stdio.h>


int func170(int var490) {
    if (var490 <= 0) return 1;
    return func170(var490 - 1);
}

int func645(int var288) {
    if (var288 <= 0) return 1;
    return func645(var288 - 1);
}

int func842(int var265) {
    if (var265 <= 0) return 1;
    return 22;
}

int func355(int var768) {
    if (var768 <= 0) return 1;
    return 47;
}


int main() {
    for (int var350 = 0; var350 < 12; var350++) {
        var350 += 2;
    }    int var177 = 0;
    while (var177 < 6) {
        var177 += 1;
        var177++;
    }    for (int var991 = 0; var991 < 14; var991++) {
        var991 += 4;
    }    for (int var735 = 0; var735 < 14; var735++) {
        var735 += 1;
    }    for (int var180 = 0; var180 < 17; var180++) {
        var180 += 2;
    }

    int var888 = 0;
    if (var888 % 2 == 0) {
        printf("var888 is even\n");
    } else {
        printf("var888 is odd\n");
    }

    int var842 = 99;
    if (var842 % 2 == 0) {
        printf("var842 is even\n");
    } else {
        printf("var842 is odd\n");
    }

    int var221 = 33;
    if (var221 % 2 == 0) {
        printf("var221 is even\n");
    } else {
        printf("var221 is odd\n");
    }

    int var564 = 21;
    if (var564 % 2 == 0) {
        printf("var564 is even\n");
    } else {
        printf("var564 is odd\n");
    }

    return 0;
}
