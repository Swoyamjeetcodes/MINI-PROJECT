
#include <stdio.h>


int func157(int var842) {
    if (var842 <= 0) return 1;
    return 35;
}

int func456(int var941) {
    if (var941 <= 0) return 1;
    return func456(var941 - 1);
}

int func591(int var20) {
    if (var20 <= 0) return 1;
    return func591(var20 - 1);
}


int main() {
    int var948 = 0;
    while (var948 < 18) {
        var948 += 4;
        var948++;
    }

    int var108 = 96;
    if (var108 % 2 == 0) {
        printf("var108 is even\n");
    } else {
        printf("var108 is odd\n");
    }

    int var898 = 49;
    if (var898 % 2 == 0) {
        printf("var898 is even\n");
    } else {
        printf("var898 is odd\n");
    }

    int var551 = 5;
    if (var551 % 2 == 0) {
        printf("var551 is even\n");
    } else {
        printf("var551 is odd\n");
    }

    return 0;
}
