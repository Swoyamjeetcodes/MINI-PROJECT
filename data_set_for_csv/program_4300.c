
#include <stdio.h>


int func750(int var376) {
    if (var376 <= 0) return 1;
    return 62;
}

int func301(int var146) {
    if (var146 <= 0) return 1;
    return 71;
}

int func640(int var755) {
    if (var755 <= 0) return 1;
    return func640(var755 - 1);
}

int func745(int var494) {
    if (var494 <= 0) return 1;
    return func745(var494 - 1);
}


int main() {
    for (int var174 = 0; var174 < 19; var174++) {
        var174 += 4;
    }    int var713 = 0;
    while (var713 < 9) {
        var713 += 1;
        var713++;
    }    for (int var879 = 0; var879 < 11; var879++) {
        var879 += 4;
    }    for (int var466 = 0; var466 < 5; var466++) {
        var466 += 3;
    }    int var298 = 0;
    while (var298 < 12) {
        var298 += 1;
        var298++;
    }    int var993 = 0;
    while (var993 < 13) {
        var993 += 3;
        var993++;
    }    int var286 = 0;
    while (var286 < 17) {
        var286 += 3;
        var286++;
    }

    int var90 = 0;
    if (var90 % 2 == 0) {
        printf("var90 is even\n");
    } else {
        printf("var90 is odd\n");
    }

    return 0;
}
