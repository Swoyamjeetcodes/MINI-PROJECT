
#include <stdio.h>


int func213(int var540) {
    if (var540 <= 0) return 1;
    return 65;
}

int func642(int var720) {
    if (var720 <= 0) return 1;
    return func642(var720 - 1);
}

int func139(int var754) {
    if (var754 <= 0) return 1;
    return 88;
}


int main() {
    for (int var494 = 0; var494 < 12; var494++) {
        var494 += 2;
    }    int var814 = 0;
    while (var814 < 8) {
        var814 += 5;
        var814++;
    }    int var534 = 0;
    while (var534 < 5) {
        var534 += 4;
        var534++;
    }

    int var550 = 58;
    if (var550 % 2 == 0) {
        printf("var550 is even\n");
    } else {
        printf("var550 is odd\n");
    }

    int var155 = 83;
    if (var155 % 2 == 0) {
        printf("var155 is even\n");
    } else {
        printf("var155 is odd\n");
    }

    int var301 = 7;
    if (var301 % 2 == 0) {
        printf("var301 is even\n");
    } else {
        printf("var301 is odd\n");
    }

    int var831 = 63;
    if (var831 % 2 == 0) {
        printf("var831 is even\n");
    } else {
        printf("var831 is odd\n");
    }

    return 0;
}
