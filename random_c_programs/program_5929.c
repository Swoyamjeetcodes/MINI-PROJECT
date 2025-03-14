
#include <stdio.h>


int func178(int var343) {
    if (var343 <= 0) return 1;
    return func178(var343 - 1);
}

int func359(int var380) {
    if (var380 <= 0) return 1;
    return func359(var380 - 1);
}


int main() {
    for (int var461 = 0; var461 < 11; var461++) {
        var461 += 3;
    }    for (int var290 = 0; var290 < 7; var290++) {
        var290 += 2;
    }

    int var641 = 90;
    if (var641 % 2 == 0) {
        printf("var641 is even\n");
    } else {
        printf("var641 is odd\n");
    }

    int var532 = 92;
    if (var532 % 2 == 0) {
        printf("var532 is even\n");
    } else {
        printf("var532 is odd\n");
    }

    int var529 = 32;
    if (var529 % 2 == 0) {
        printf("var529 is even\n");
    } else {
        printf("var529 is odd\n");
    }

    return 0;
}
