
#include <stdio.h>


int func128(int var199) {
    if (var199 <= 0) return 1;
    return func128(var199 - 1);
}


int main() {
    for (int var896 = 0; var896 < 13; var896++) {
        var896 += 2;
    }    int var853 = 0;
    while (var853 < 20) {
        var853 += 1;
        var853++;
    }    for (int var249 = 0; var249 < 9; var249++) {
        var249 += 5;
    }    for (int var151 = 0; var151 < 12; var151++) {
        var151 += 2;
    }    for (int var999 = 0; var999 < 14; var999++) {
        var999 += 4;
    }    for (int var437 = 0; var437 < 12; var437++) {
        var437 += 1;
    }    for (int var682 = 0; var682 < 7; var682++) {
        var682 += 1;
    }

    int var651 = 31;
    if (var651 % 2 == 0) {
        printf("var651 is even\n");
    } else {
        printf("var651 is odd\n");
    }

    int var964 = 6;
    if (var964 % 2 == 0) {
        printf("var964 is even\n");
    } else {
        printf("var964 is odd\n");
    }

    int var443 = 53;
    if (var443 % 2 == 0) {
        printf("var443 is even\n");
    } else {
        printf("var443 is odd\n");
    }

    return 0;
}
