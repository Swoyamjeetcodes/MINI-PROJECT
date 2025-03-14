
#include <stdio.h>


int func555(int var658) {
    if (var658 <= 0) return 1;
    return func555(var658 - 1);
}


int main() {
    for (int var967 = 0; var967 < 16; var967++) {
        var967 += 5;
    }    int var936 = 0;
    while (var936 < 17) {
        var936 += 4;
        var936++;
    }    for (int var706 = 0; var706 < 16; var706++) {
        var706 += 4;
    }

    int var244 = 75;
    if (var244 % 2 == 0) {
        printf("var244 is even\n");
    } else {
        printf("var244 is odd\n");
    }

    int var691 = 55;
    if (var691 % 2 == 0) {
        printf("var691 is even\n");
    } else {
        printf("var691 is odd\n");
    }

    int var832 = 20;
    if (var832 % 2 == 0) {
        printf("var832 is even\n");
    } else {
        printf("var832 is odd\n");
    }

    return 0;
}
