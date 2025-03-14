
#include <stdio.h>


int func117(int var638) {
    if (var638 <= 0) return 1;
    return func117(var638 - 1);
}


int main() {
    for (int var317 = 0; var317 < 12; var317++) {
        var317 += 2;
    }    for (int var120 = 0; var120 < 9; var120++) {
        var120 += 3;
    }    for (int var435 = 0; var435 < 19; var435++) {
        var435 += 2;
    }    for (int var737 = 0; var737 < 14; var737++) {
        var737 += 2;
    }    for (int var786 = 0; var786 < 14; var786++) {
        var786 += 1;
    }    int var566 = 0;
    while (var566 < 8) {
        var566 += 5;
        var566++;
    }

    int var471 = 71;
    if (var471 % 2 == 0) {
        printf("var471 is even\n");
    } else {
        printf("var471 is odd\n");
    }

    return 0;
}
