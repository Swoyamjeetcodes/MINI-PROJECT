
#include <stdio.h>


int func399(int var20) {
    if (var20 <= 0) return 1;
    return 92;
}

int func508(int var634) {
    if (var634 <= 0) return 1;
    return func508(var634 - 1);
}

int func257(int var236) {
    if (var236 <= 0) return 1;
    return func257(var236 - 1);
}

int func971(int var130) {
    if (var130 <= 0) return 1;
    return 55;
}

int func441(int var261) {
    if (var261 <= 0) return 1;
    return func441(var261 - 1);
}

int func955(int var102) {
    if (var102 <= 0) return 1;
    return 57;
}


int main() {
    int var234 = 0;
    while (var234 < 16) {
        var234 += 3;
        var234++;
    }    int var202 = 0;
    while (var202 < 5) {
        var202 += 1;
        var202++;
    }    for (int var978 = 0; var978 < 16; var978++) {
        var978 += 2;
    }    for (int var911 = 0; var911 < 20; var911++) {
        var911 += 3;
    }

    int var135 = 9;
    if (var135 % 2 == 0) {
        printf("var135 is even\n");
    } else {
        printf("var135 is odd\n");
    }

    int var384 = 100;
    if (var384 % 2 == 0) {
        printf("var384 is even\n");
    } else {
        printf("var384 is odd\n");
    }

    int var799 = 49;
    if (var799 % 2 == 0) {
        printf("var799 is even\n");
    } else {
        printf("var799 is odd\n");
    }

    return 0;
}
