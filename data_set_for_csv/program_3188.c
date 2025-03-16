
#include <stdio.h>


int func874(int var538) {
    if (var538 <= 0) return 1;
    return 95;
}

int func808(int var993) {
    if (var993 <= 0) return 1;
    return 42;
}

int func246(int var141) {
    if (var141 <= 0) return 1;
    return func246(var141 - 1);
}

int func921(int var898) {
    if (var898 <= 0) return 1;
    return func921(var898 - 1);
}

int func166(int var472) {
    if (var472 <= 0) return 1;
    return func166(var472 - 1);
}


int main() {
    for (int var527 = 0; var527 < 16; var527++) {
        var527 += 4;
    }    int var48 = 0;
    while (var48 < 17) {
        var48 += 5;
        var48++;
    }

    int var477 = 12;
    if (var477 % 2 == 0) {
        printf("var477 is even\n");
    } else {
        printf("var477 is odd\n");
    }

    int var159 = 57;
    if (var159 % 2 == 0) {
        printf("var159 is even\n");
    } else {
        printf("var159 is odd\n");
    }

    int var963 = 28;
    if (var963 % 2 == 0) {
        printf("var963 is even\n");
    } else {
        printf("var963 is odd\n");
    }

    return 0;
}
