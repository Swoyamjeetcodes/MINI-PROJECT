
#include <stdio.h>


int func137(int var802) {
    if (var802 <= 0) return 1;
    return 65;
}

int func588(int var307) {
    if (var307 <= 0) return 1;
    return 14;
}

int func87(int var381) {
    if (var381 <= 0) return 1;
    return func87(var381 - 1);
}

int func351(int var71) {
    if (var71 <= 0) return 1;
    return func351(var71 - 1);
}

int func987(int var569) {
    if (var569 <= 0) return 1;
    return func987(var569 - 1);
}


int main() {
    int var823 = 0;
    while (var823 < 6) {
        var823 += 4;
        var823++;
    }    int var164 = 0;
    while (var164 < 8) {
        var164 += 1;
        var164++;
    }    int var502 = 0;
    while (var502 < 20) {
        var502 += 5;
        var502++;
    }

    int var656 = 13;
    if (var656 % 2 == 0) {
        printf("var656 is even\n");
    } else {
        printf("var656 is odd\n");
    }

    int var181 = 76;
    if (var181 % 2 == 0) {
        printf("var181 is even\n");
    } else {
        printf("var181 is odd\n");
    }

    return 0;
}
