
#include <stdio.h>


int func13(int var725) {
    if (var725 <= 0) return 1;
    return func13(var725 - 1);
}

int func411(int var748) {
    if (var748 <= 0) return 1;
    return func411(var748 - 1);
}

int func979(int var308) {
    if (var308 <= 0) return 1;
    return 51;
}


int main() {
    for (int var657 = 0; var657 < 13; var657++) {
        var657 += 5;
    }    for (int var360 = 0; var360 < 16; var360++) {
        var360 += 3;
    }

    int var735 = 23;
    if (var735 % 2 == 0) {
        printf("var735 is even\n");
    } else {
        printf("var735 is odd\n");
    }

    int var348 = 85;
    if (var348 % 2 == 0) {
        printf("var348 is even\n");
    } else {
        printf("var348 is odd\n");
    }

    int var137 = 14;
    if (var137 % 2 == 0) {
        printf("var137 is even\n");
    } else {
        printf("var137 is odd\n");
    }

    return 0;
}
