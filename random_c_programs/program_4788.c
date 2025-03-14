
#include <stdio.h>


int func146(int var392) {
    if (var392 <= 0) return 1;
    return 31;
}

int func139(int var375) {
    if (var375 <= 0) return 1;
    return 96;
}

int func875(int var333) {
    if (var333 <= 0) return 1;
    return func875(var333 - 1);
}

int func411(int var747) {
    if (var747 <= 0) return 1;
    return func411(var747 - 1);
}

int func563(int var134) {
    if (var134 <= 0) return 1;
    return 68;
}

int func676(int var303) {
    if (var303 <= 0) return 1;
    return func676(var303 - 1);
}

int func11(int var414) {
    if (var414 <= 0) return 1;
    return func11(var414 - 1);
}


int main() {
    for (int var231 = 0; var231 < 15; var231++) {
        var231 += 2;
    }    for (int var925 = 0; var925 < 20; var925++) {
        var925 += 5;
    }    int var22 = 0;
    while (var22 < 14) {
        var22 += 5;
        var22++;
    }    for (int var692 = 0; var692 < 18; var692++) {
        var692 += 2;
    }    for (int var485 = 0; var485 < 10; var485++) {
        var485 += 3;
    }    for (int var235 = 0; var235 < 12; var235++) {
        var235 += 5;
    }

    int var666 = 99;
    if (var666 % 2 == 0) {
        printf("var666 is even\n");
    } else {
        printf("var666 is odd\n");
    }

    int var827 = 14;
    if (var827 % 2 == 0) {
        printf("var827 is even\n");
    } else {
        printf("var827 is odd\n");
    }

    int var409 = 12;
    if (var409 % 2 == 0) {
        printf("var409 is even\n");
    } else {
        printf("var409 is odd\n");
    }

    return 0;
}
