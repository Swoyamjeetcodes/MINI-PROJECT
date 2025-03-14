
#include <stdio.h>


int func311(int var430) {
    if (var430 <= 0) return 1;
    return func311(var430 - 1);
}


int main() {
    for (int var680 = 0; var680 < 17; var680++) {
        var680 += 3;
    }    int var963 = 0;
    while (var963 < 12) {
        var963 += 4;
        var963++;
    }    int var35 = 0;
    while (var35 < 15) {
        var35 += 1;
        var35++;
    }

    int var436 = 23;
    if (var436 % 2 == 0) {
        printf("var436 is even\n");
    } else {
        printf("var436 is odd\n");
    }

    int var532 = 37;
    if (var532 % 2 == 0) {
        printf("var532 is even\n");
    } else {
        printf("var532 is odd\n");
    }

    int var948 = 85;
    if (var948 % 2 == 0) {
        printf("var948 is even\n");
    } else {
        printf("var948 is odd\n");
    }

    int var875 = 11;
    if (var875 % 2 == 0) {
        printf("var875 is even\n");
    } else {
        printf("var875 is odd\n");
    }

    return 0;
}
