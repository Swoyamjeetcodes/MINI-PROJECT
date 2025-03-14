
#include <stdio.h>


int func838(int var880) {
    if (var880 <= 0) return 1;
    return 61;
}

int func823(int var934) {
    if (var934 <= 0) return 1;
    return func823(var934 - 1);
}

int func675(int var918) {
    if (var918 <= 0) return 1;
    return func675(var918 - 1);
}

int func51(int var340) {
    if (var340 <= 0) return 1;
    return func51(var340 - 1);
}


int main() {
    int var162 = 0;
    while (var162 < 5) {
        var162 += 5;
        var162++;
    }    for (int var873 = 0; var873 < 8; var873++) {
        var873 += 2;
    }

    int var263 = 79;
    if (var263 % 2 == 0) {
        printf("var263 is even\n");
    } else {
        printf("var263 is odd\n");
    }

    int var529 = 75;
    if (var529 % 2 == 0) {
        printf("var529 is even\n");
    } else {
        printf("var529 is odd\n");
    }

    int var699 = 86;
    if (var699 % 2 == 0) {
        printf("var699 is even\n");
    } else {
        printf("var699 is odd\n");
    }

    return 0;
}
