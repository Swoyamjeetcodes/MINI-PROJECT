
#include <stdio.h>


int func146(int var152) {
    if (var152 <= 0) return 1;
    return 50;
}

int func709(int var72) {
    if (var72 <= 0) return 1;
    return func709(var72 - 1);
}

int func857(int var269) {
    if (var269 <= 0) return 1;
    return 93;
}

int func477(int var532) {
    if (var532 <= 0) return 1;
    return func477(var532 - 1);
}

int func468(int var539) {
    if (var539 <= 0) return 1;
    return 81;
}


int main() {
    int var933 = 0;
    while (var933 < 14) {
        var933 += 4;
        var933++;
    }    for (int var411 = 0; var411 < 13; var411++) {
        var411 += 2;
    }    for (int var207 = 0; var207 < 14; var207++) {
        var207 += 1;
    }

    int var290 = 95;
    if (var290 % 2 == 0) {
        printf("var290 is even\n");
    } else {
        printf("var290 is odd\n");
    }

    return 0;
}
