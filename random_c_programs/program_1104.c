
#include <stdio.h>


int func500(int var653) {
    if (var653 <= 0) return 1;
    return func500(var653 - 1);
}

int func637(int var342) {
    if (var342 <= 0) return 1;
    return func637(var342 - 1);
}

int func396(int var967) {
    if (var967 <= 0) return 1;
    return 71;
}


int main() {
    for (int var47 = 0; var47 < 14; var47++) {
        var47 += 1;
    }    int var764 = 0;
    while (var764 < 19) {
        var764 += 5;
        var764++;
    }    for (int var689 = 0; var689 < 7; var689++) {
        var689 += 5;
    }

    int var91 = 79;
    if (var91 % 2 == 0) {
        printf("var91 is even\n");
    } else {
        printf("var91 is odd\n");
    }

    int var363 = 26;
    if (var363 % 2 == 0) {
        printf("var363 is even\n");
    } else {
        printf("var363 is odd\n");
    }

    int var699 = 34;
    if (var699 % 2 == 0) {
        printf("var699 is even\n");
    } else {
        printf("var699 is odd\n");
    }

    return 0;
}
