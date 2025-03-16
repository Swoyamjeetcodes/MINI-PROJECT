
#include <stdio.h>


int func416(int var966) {
    if (var966 <= 0) return 1;
    return 91;
}

int func102(int var739) {
    if (var739 <= 0) return 1;
    return func102(var739 - 1);
}

int func434(int var178) {
    if (var178 <= 0) return 1;
    return func434(var178 - 1);
}


int main() {
    int var529 = 0;
    while (var529 < 14) {
        var529 += 3;
        var529++;
    }    int var392 = 0;
    while (var392 < 7) {
        var392 += 1;
        var392++;
    }    int var40 = 0;
    while (var40 < 6) {
        var40 += 5;
        var40++;
    }    for (int var387 = 0; var387 < 16; var387++) {
        var387 += 1;
    }    int var708 = 0;
    while (var708 < 11) {
        var708 += 4;
        var708++;
    }    int var637 = 0;
    while (var637 < 6) {
        var637 += 3;
        var637++;
    }    int var665 = 0;
    while (var665 < 16) {
        var665 += 5;
        var665++;
    }

    int var812 = 13;
    if (var812 % 2 == 0) {
        printf("var812 is even\n");
    } else {
        printf("var812 is odd\n");
    }

    return 0;
}
