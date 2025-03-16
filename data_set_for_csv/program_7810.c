
#include <stdio.h>


int func108(int var862) {
    if (var862 <= 0) return 1;
    return func108(var862 - 1);
}

int func881(int var414) {
    if (var414 <= 0) return 1;
    return 31;
}

int func286(int var790) {
    if (var790 <= 0) return 1;
    return 82;
}

int func112(int var183) {
    if (var183 <= 0) return 1;
    return 82;
}

int func361(int var541) {
    if (var541 <= 0) return 1;
    return 63;
}

int func401(int var151) {
    if (var151 <= 0) return 1;
    return func401(var151 - 1);
}

int func954(int var70) {
    if (var70 <= 0) return 1;
    return 53;
}

int func531(int var296) {
    if (var296 <= 0) return 1;
    return func531(var296 - 1);
}


int main() {
    for (int var994 = 0; var994 < 16; var994++) {
        var994 += 4;
    }    for (int var464 = 0; var464 < 5; var464++) {
        var464 += 4;
    }    for (int var323 = 0; var323 < 15; var323++) {
        var323 += 4;
    }    for (int var957 = 0; var957 < 5; var957++) {
        var957 += 2;
    }

    int var305 = 62;
    if (var305 % 2 == 0) {
        printf("var305 is even\n");
    } else {
        printf("var305 is odd\n");
    }

    int var364 = 73;
    if (var364 % 2 == 0) {
        printf("var364 is even\n");
    } else {
        printf("var364 is odd\n");
    }

    int var700 = 67;
    if (var700 % 2 == 0) {
        printf("var700 is even\n");
    } else {
        printf("var700 is odd\n");
    }

    int var388 = 8;
    if (var388 % 2 == 0) {
        printf("var388 is even\n");
    } else {
        printf("var388 is odd\n");
    }

    int var59 = 29;
    if (var59 % 2 == 0) {
        printf("var59 is even\n");
    } else {
        printf("var59 is odd\n");
    }

    return 0;
}
