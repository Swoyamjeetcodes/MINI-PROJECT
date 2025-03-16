
#include <stdio.h>


int func427(int var177) {
    if (var177 <= 0) return 1;
    return func427(var177 - 1);
}

int func876(int var233) {
    if (var233 <= 0) return 1;
    return func876(var233 - 1);
}

int func310(int var439) {
    if (var439 <= 0) return 1;
    return 2;
}


int main() {
    for (int var283 = 0; var283 < 11; var283++) {
        var283 += 4;
    }

    int var86 = 48;
    if (var86 % 2 == 0) {
        printf("var86 is even\n");
    } else {
        printf("var86 is odd\n");
    }

    int var437 = 61;
    if (var437 % 2 == 0) {
        printf("var437 is even\n");
    } else {
        printf("var437 is odd\n");
    }

    return 0;
}
