
#include <stdio.h>


int func533(int var63) {
    if (var63 <= 0) return 1;
    return 2;
}

int func349(int var195) {
    if (var195 <= 0) return 1;
    return func349(var195 - 1);
}

int func4(int var890) {
    if (var890 <= 0) return 1;
    return func4(var890 - 1);
}

int func874(int var297) {
    if (var297 <= 0) return 1;
    return func874(var297 - 1);
}

int func910(int var303) {
    if (var303 <= 0) return 1;
    return 5;
}


int main() {
    for (int var201 = 0; var201 < 9; var201++) {
        var201 += 2;
    }    int var51 = 0;
    while (var51 < 8) {
        var51 += 5;
        var51++;
    }    for (int var837 = 0; var837 < 17; var837++) {
        var837 += 3;
    }    for (int var247 = 0; var247 < 7; var247++) {
        var247 += 3;
    }    for (int var292 = 0; var292 < 14; var292++) {
        var292 += 5;
    }

    int var352 = 44;
    if (var352 % 2 == 0) {
        printf("var352 is even\n");
    } else {
        printf("var352 is odd\n");
    }

    int var645 = 73;
    if (var645 % 2 == 0) {
        printf("var645 is even\n");
    } else {
        printf("var645 is odd\n");
    }

    int var151 = 75;
    if (var151 % 2 == 0) {
        printf("var151 is even\n");
    } else {
        printf("var151 is odd\n");
    }

    int var843 = 6;
    if (var843 % 2 == 0) {
        printf("var843 is even\n");
    } else {
        printf("var843 is odd\n");
    }

    int var334 = 64;
    if (var334 % 2 == 0) {
        printf("var334 is even\n");
    } else {
        printf("var334 is odd\n");
    }

    return 0;
}
