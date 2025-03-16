
#include <stdio.h>


int func106(int var657) {
    if (var657 <= 0) return 1;
    return func106(var657 - 1);
}

int func915(int var737) {
    if (var737 <= 0) return 1;
    return func915(var737 - 1);
}

int func186(int var987) {
    if (var987 <= 0) return 1;
    return func186(var987 - 1);
}

int func818(int var942) {
    if (var942 <= 0) return 1;
    return func818(var942 - 1);
}

int func499(int var475) {
    if (var475 <= 0) return 1;
    return 47;
}

int func816(int var816) {
    if (var816 <= 0) return 1;
    return 64;
}

int func823(int var528) {
    if (var528 <= 0) return 1;
    return func823(var528 - 1);
}


int main() {
    for (int var127 = 0; var127 < 8; var127++) {
        var127 += 2;
    }    int var283 = 0;
    while (var283 < 9) {
        var283 += 1;
        var283++;
    }

    int var73 = 64;
    if (var73 % 2 == 0) {
        printf("var73 is even\n");
    } else {
        printf("var73 is odd\n");
    }

    int var216 = 53;
    if (var216 % 2 == 0) {
        printf("var216 is even\n");
    } else {
        printf("var216 is odd\n");
    }

    int var397 = 55;
    if (var397 % 2 == 0) {
        printf("var397 is even\n");
    } else {
        printf("var397 is odd\n");
    }

    int var140 = 63;
    if (var140 % 2 == 0) {
        printf("var140 is even\n");
    } else {
        printf("var140 is odd\n");
    }

    int var743 = 59;
    if (var743 % 2 == 0) {
        printf("var743 is even\n");
    } else {
        printf("var743 is odd\n");
    }

    return 0;
}
