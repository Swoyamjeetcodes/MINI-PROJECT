
#include <stdio.h>


int func249(int var482) {
    if (var482 <= 0) return 1;
    return func249(var482 - 1);
}

int func555(int var117) {
    if (var117 <= 0) return 1;
    return func555(var117 - 1);
}


int main() {
    for (int var553 = 0; var553 < 10; var553++) {
        var553 += 5;
    }    int var499 = 0;
    while (var499 < 17) {
        var499 += 5;
        var499++;
    }

    int var402 = 95;
    if (var402 % 2 == 0) {
        printf("var402 is even\n");
    } else {
        printf("var402 is odd\n");
    }

    int var8 = 81;
    if (var8 % 2 == 0) {
        printf("var8 is even\n");
    } else {
        printf("var8 is odd\n");
    }

    return 0;
}
