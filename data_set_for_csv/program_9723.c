
#include <stdio.h>


int func278(int var263) {
    if (var263 <= 0) return 1;
    return func278(var263 - 1);
}


int main() {
    for (int var614 = 0; var614 < 12; var614++) {
        var614 += 1;
    }    for (int var129 = 0; var129 < 16; var129++) {
        var129 += 5;
    }

    int var8 = 40;
    if (var8 % 2 == 0) {
        printf("var8 is even\n");
    } else {
        printf("var8 is odd\n");
    }

    int var663 = 64;
    if (var663 % 2 == 0) {
        printf("var663 is even\n");
    } else {
        printf("var663 is odd\n");
    }

    int var990 = 15;
    if (var990 % 2 == 0) {
        printf("var990 is even\n");
    } else {
        printf("var990 is odd\n");
    }

    return 0;
}
