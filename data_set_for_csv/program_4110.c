
#include <stdio.h>


int func736(int var198) {
    if (var198 <= 0) return 1;
    return func736(var198 - 1);
}

int func830(int var772) {
    if (var772 <= 0) return 1;
    return func830(var772 - 1);
}

int func498(int var436) {
    if (var436 <= 0) return 1;
    return 36;
}

int func17(int var405) {
    if (var405 <= 0) return 1;
    return func17(var405 - 1);
}

int func554(int var444) {
    if (var444 <= 0) return 1;
    return func554(var444 - 1);
}


int main() {
    int var953 = 0;
    while (var953 < 11) {
        var953 += 2;
        var953++;
    }    int var86 = 0;
    while (var86 < 16) {
        var86 += 1;
        var86++;
    }    for (int var525 = 0; var525 < 20; var525++) {
        var525 += 4;
    }    for (int var319 = 0; var319 < 17; var319++) {
        var319 += 1;
    }    for (int var977 = 0; var977 < 11; var977++) {
        var977 += 5;
    }    int var818 = 0;
    while (var818 < 5) {
        var818 += 1;
        var818++;
    }

    int var719 = 17;
    if (var719 % 2 == 0) {
        printf("var719 is even\n");
    } else {
        printf("var719 is odd\n");
    }

    int var362 = 54;
    if (var362 % 2 == 0) {
        printf("var362 is even\n");
    } else {
        printf("var362 is odd\n");
    }

    int var372 = 67;
    if (var372 % 2 == 0) {
        printf("var372 is even\n");
    } else {
        printf("var372 is odd\n");
    }

    return 0;
}
