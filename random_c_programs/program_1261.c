
#include <stdio.h>


int func683(int var631) {
    if (var631 <= 0) return 1;
    return 76;
}

int func824(int var794) {
    if (var794 <= 0) return 1;
    return func824(var794 - 1);
}

int func71(int var81) {
    if (var81 <= 0) return 1;
    return func71(var81 - 1);
}

int func36(int var402) {
    if (var402 <= 0) return 1;
    return func36(var402 - 1);
}


int main() {
    for (int var249 = 0; var249 < 11; var249++) {
        var249 += 2;
    }    for (int var975 = 0; var975 < 5; var975++) {
        var975 += 3;
    }    for (int var941 = 0; var941 < 20; var941++) {
        var941 += 2;
    }

    int var766 = 49;
    if (var766 % 2 == 0) {
        printf("var766 is even\n");
    } else {
        printf("var766 is odd\n");
    }

    int var327 = 24;
    if (var327 % 2 == 0) {
        printf("var327 is even\n");
    } else {
        printf("var327 is odd\n");
    }

    int var848 = 29;
    if (var848 % 2 == 0) {
        printf("var848 is even\n");
    } else {
        printf("var848 is odd\n");
    }

    int var27 = 95;
    if (var27 % 2 == 0) {
        printf("var27 is even\n");
    } else {
        printf("var27 is odd\n");
    }

    int var404 = 100;
    if (var404 % 2 == 0) {
        printf("var404 is even\n");
    } else {
        printf("var404 is odd\n");
    }

    return 0;
}
