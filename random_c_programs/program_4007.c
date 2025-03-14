
#include <stdio.h>


int func935(int var564) {
    if (var564 <= 0) return 1;
    return 35;
}

int func707(int var960) {
    if (var960 <= 0) return 1;
    return func707(var960 - 1);
}

int func595(int var743) {
    if (var743 <= 0) return 1;
    return func595(var743 - 1);
}


int main() {
    for (int var197 = 0; var197 < 13; var197++) {
        var197 += 2;
    }    int var354 = 0;
    while (var354 < 20) {
        var354 += 4;
        var354++;
    }    int var677 = 0;
    while (var677 < 6) {
        var677 += 4;
        var677++;
    }    int var951 = 0;
    while (var951 < 10) {
        var951 += 5;
        var951++;
    }

    int var234 = 1;
    if (var234 % 2 == 0) {
        printf("var234 is even\n");
    } else {
        printf("var234 is odd\n");
    }

    int var429 = 64;
    if (var429 % 2 == 0) {
        printf("var429 is even\n");
    } else {
        printf("var429 is odd\n");
    }

    int var733 = 75;
    if (var733 % 2 == 0) {
        printf("var733 is even\n");
    } else {
        printf("var733 is odd\n");
    }

    int var832 = 4;
    if (var832 % 2 == 0) {
        printf("var832 is even\n");
    } else {
        printf("var832 is odd\n");
    }

    return 0;
}
