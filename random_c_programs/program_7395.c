
#include <stdio.h>


int func241(int var509) {
    if (var509 <= 0) return 1;
    return func241(var509 - 1);
}


int main() {
    int var89 = 0;
    while (var89 < 13) {
        var89 += 4;
        var89++;
    }    int var313 = 0;
    while (var313 < 20) {
        var313 += 4;
        var313++;
    }    for (int var876 = 0; var876 < 13; var876++) {
        var876 += 4;
    }

    int var550 = 24;
    if (var550 % 2 == 0) {
        printf("var550 is even\n");
    } else {
        printf("var550 is odd\n");
    }

    int var789 = 50;
    if (var789 % 2 == 0) {
        printf("var789 is even\n");
    } else {
        printf("var789 is odd\n");
    }

    int var406 = 61;
    if (var406 % 2 == 0) {
        printf("var406 is even\n");
    } else {
        printf("var406 is odd\n");
    }

    int var124 = 11;
    if (var124 % 2 == 0) {
        printf("var124 is even\n");
    } else {
        printf("var124 is odd\n");
    }

    int var357 = 9;
    if (var357 % 2 == 0) {
        printf("var357 is even\n");
    } else {
        printf("var357 is odd\n");
    }

    return 0;
}
