
#include <stdio.h>


int func169(int var288) {
    if (var288 <= 0) return 1;
    return func169(var288 - 1);
}

int func961(int var811) {
    if (var811 <= 0) return 1;
    return 36;
}

int func425(int var189) {
    if (var189 <= 0) return 1;
    return 50;
}

int func12(int var375) {
    if (var375 <= 0) return 1;
    return func12(var375 - 1);
}


int main() {
    int var942 = 0;
    while (var942 < 16) {
        var942 += 5;
        var942++;
    }    for (int var761 = 0; var761 < 15; var761++) {
        var761 += 2;
    }    int var918 = 0;
    while (var918 < 17) {
        var918 += 1;
        var918++;
    }    for (int var913 = 0; var913 < 15; var913++) {
        var913 += 4;
    }

    int var317 = 8;
    if (var317 % 2 == 0) {
        printf("var317 is even\n");
    } else {
        printf("var317 is odd\n");
    }

    int var919 = 97;
    if (var919 % 2 == 0) {
        printf("var919 is even\n");
    } else {
        printf("var919 is odd\n");
    }

    int var80 = 5;
    if (var80 % 2 == 0) {
        printf("var80 is even\n");
    } else {
        printf("var80 is odd\n");
    }

    int var935 = 69;
    if (var935 % 2 == 0) {
        printf("var935 is even\n");
    } else {
        printf("var935 is odd\n");
    }

    return 0;
}
