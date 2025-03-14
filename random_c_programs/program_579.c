
#include <stdio.h>


int func246(int var862) {
    if (var862 <= 0) return 1;
    return func246(var862 - 1);
}

int func482(int var819) {
    if (var819 <= 0) return 1;
    return func482(var819 - 1);
}


int main() {
    for (int var145 = 0; var145 < 18; var145++) {
        var145 += 5;
    }    int var114 = 0;
    while (var114 < 7) {
        var114 += 2;
        var114++;
    }    int var757 = 0;
    while (var757 < 7) {
        var757 += 4;
        var757++;
    }    int var912 = 0;
    while (var912 < 10) {
        var912 += 2;
        var912++;
    }    for (int var292 = 0; var292 < 16; var292++) {
        var292 += 5;
    }    int var52 = 0;
    while (var52 < 19) {
        var52 += 1;
        var52++;
    }

    int var888 = 64;
    if (var888 % 2 == 0) {
        printf("var888 is even\n");
    } else {
        printf("var888 is odd\n");
    }

    int var689 = 60;
    if (var689 % 2 == 0) {
        printf("var689 is even\n");
    } else {
        printf("var689 is odd\n");
    }

    int var784 = 62;
    if (var784 % 2 == 0) {
        printf("var784 is even\n");
    } else {
        printf("var784 is odd\n");
    }

    return 0;
}
