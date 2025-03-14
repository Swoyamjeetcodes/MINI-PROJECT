
#include <stdio.h>


int func929(int var311) {
    if (var311 <= 0) return 1;
    return 41;
}

int func842(int var501) {
    if (var501 <= 0) return 1;
    return func842(var501 - 1);
}


int main() {
    int var431 = 0;
    while (var431 < 20) {
        var431 += 4;
        var431++;
    }    for (int var100 = 0; var100 < 13; var100++) {
        var100 += 5;
    }    int var143 = 0;
    while (var143 < 20) {
        var143 += 3;
        var143++;
    }

    int var580 = 26;
    if (var580 % 2 == 0) {
        printf("var580 is even\n");
    } else {
        printf("var580 is odd\n");
    }

    int var383 = 16;
    if (var383 % 2 == 0) {
        printf("var383 is even\n");
    } else {
        printf("var383 is odd\n");
    }

    int var780 = 3;
    if (var780 % 2 == 0) {
        printf("var780 is even\n");
    } else {
        printf("var780 is odd\n");
    }

    return 0;
}
