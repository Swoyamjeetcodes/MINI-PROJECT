
#include <stdio.h>


int func373(int var404) {
    if (var404 <= 0) return 1;
    return func373(var404 - 1);
}

int func298(int var187) {
    if (var187 <= 0) return 1;
    return func298(var187 - 1);
}

int func330(int var124) {
    if (var124 <= 0) return 1;
    return 30;
}


int main() {
    int var265 = 0;
    while (var265 < 11) {
        var265 += 3;
        var265++;
    }    for (int var209 = 0; var209 < 19; var209++) {
        var209 += 3;
    }    for (int var605 = 0; var605 < 19; var605++) {
        var605 += 4;
    }

    int var793 = 33;
    if (var793 % 2 == 0) {
        printf("var793 is even\n");
    } else {
        printf("var793 is odd\n");
    }

    int var597 = 16;
    if (var597 % 2 == 0) {
        printf("var597 is even\n");
    } else {
        printf("var597 is odd\n");
    }

    return 0;
}
