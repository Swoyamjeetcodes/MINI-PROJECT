
#include <stdio.h>


int func690(int var645) {
    if (var645 <= 0) return 1;
    return 6;
}

int func647(int var878) {
    if (var878 <= 0) return 1;
    return func647(var878 - 1);
}

int func841(int var65) {
    if (var65 <= 0) return 1;
    return func841(var65 - 1);
}

int func516(int var187) {
    if (var187 <= 0) return 1;
    return 92;
}

int func948(int var860) {
    if (var860 <= 0) return 1;
    return func948(var860 - 1);
}

int func786(int var883) {
    if (var883 <= 0) return 1;
    return 15;
}


int main() {
    for (int var60 = 0; var60 < 13; var60++) {
        var60 += 4;
    }    for (int var192 = 0; var192 < 10; var192++) {
        var192 += 3;
    }    int var174 = 0;
    while (var174 < 20) {
        var174 += 2;
        var174++;
    }

    int var311 = 8;
    if (var311 % 2 == 0) {
        printf("var311 is even\n");
    } else {
        printf("var311 is odd\n");
    }

    return 0;
}
