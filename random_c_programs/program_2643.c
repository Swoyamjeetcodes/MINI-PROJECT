
#include <stdio.h>


int func138(int var568) {
    if (var568 <= 0) return 1;
    return 24;
}

int func898(int var159) {
    if (var159 <= 0) return 1;
    return func898(var159 - 1);
}

int func540(int var494) {
    if (var494 <= 0) return 1;
    return func540(var494 - 1);
}

int func417(int var718) {
    if (var718 <= 0) return 1;
    return 33;
}

int func509(int var86) {
    if (var86 <= 0) return 1;
    return 26;
}


int main() {
    int var82 = 0;
    while (var82 < 15) {
        var82 += 5;
        var82++;
    }    for (int var934 = 0; var934 < 20; var934++) {
        var934 += 3;
    }    int var536 = 0;
    while (var536 < 14) {
        var536 += 4;
        var536++;
    }    for (int var246 = 0; var246 < 5; var246++) {
        var246 += 5;
    }    int var933 = 0;
    while (var933 < 16) {
        var933 += 3;
        var933++;
    }    int var864 = 0;
    while (var864 < 9) {
        var864 += 5;
        var864++;
    }

    int var43 = 33;
    if (var43 % 2 == 0) {
        printf("var43 is even\n");
    } else {
        printf("var43 is odd\n");
    }

    int var860 = 21;
    if (var860 % 2 == 0) {
        printf("var860 is even\n");
    } else {
        printf("var860 is odd\n");
    }

    int var477 = 2;
    if (var477 % 2 == 0) {
        printf("var477 is even\n");
    } else {
        printf("var477 is odd\n");
    }

    return 0;
}
