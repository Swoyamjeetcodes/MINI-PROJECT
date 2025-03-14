
#include <stdio.h>


int func63(int var782) {
    if (var782 <= 0) return 1;
    return 36;
}

int func771(int var427) {
    if (var427 <= 0) return 1;
    return func771(var427 - 1);
}

int func901(int var234) {
    if (var234 <= 0) return 1;
    return func901(var234 - 1);
}

int func614(int var694) {
    if (var694 <= 0) return 1;
    return func614(var694 - 1);
}

int func990(int var972) {
    if (var972 <= 0) return 1;
    return func990(var972 - 1);
}

int func129(int var153) {
    if (var153 <= 0) return 1;
    return func129(var153 - 1);
}


int main() {
    int var639 = 0;
    while (var639 < 19) {
        var639 += 3;
        var639++;
    }    for (int var638 = 0; var638 < 15; var638++) {
        var638 += 4;
    }    int var842 = 0;
    while (var842 < 11) {
        var842 += 3;
        var842++;
    }

    int var107 = 19;
    if (var107 % 2 == 0) {
        printf("var107 is even\n");
    } else {
        printf("var107 is odd\n");
    }

    int var658 = 19;
    if (var658 % 2 == 0) {
        printf("var658 is even\n");
    } else {
        printf("var658 is odd\n");
    }

    return 0;
}
