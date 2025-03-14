
#include <stdio.h>


int func671(int var209) {
    if (var209 <= 0) return 1;
    return func671(var209 - 1);
}

int func922(int var107) {
    if (var107 <= 0) return 1;
    return 73;
}

int func516(int var485) {
    if (var485 <= 0) return 1;
    return func516(var485 - 1);
}


int main() {
    int var54 = 0;
    while (var54 < 12) {
        var54 += 1;
        var54++;
    }    int var369 = 0;
    while (var369 < 14) {
        var369 += 3;
        var369++;
    }

    int var627 = 92;
    if (var627 % 2 == 0) {
        printf("var627 is even\n");
    } else {
        printf("var627 is odd\n");
    }

    int var907 = 32;
    if (var907 % 2 == 0) {
        printf("var907 is even\n");
    } else {
        printf("var907 is odd\n");
    }

    return 0;
}
