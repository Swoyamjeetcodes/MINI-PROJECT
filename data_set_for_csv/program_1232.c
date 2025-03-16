
#include <stdio.h>


int func575(int var664) {
    if (var664 <= 0) return 1;
    return func575(var664 - 1);
}


int main() {
    int var524 = 0;
    while (var524 < 18) {
        var524 += 3;
        var524++;
    }

    int var393 = 6;
    if (var393 % 2 == 0) {
        printf("var393 is even\n");
    } else {
        printf("var393 is odd\n");
    }

    int var346 = 64;
    if (var346 % 2 == 0) {
        printf("var346 is even\n");
    } else {
        printf("var346 is odd\n");
    }

    return 0;
}
