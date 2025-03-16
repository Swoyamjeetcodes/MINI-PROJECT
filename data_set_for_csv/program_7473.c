
#include <stdio.h>


int func601(int var940) {
    if (var940 <= 0) return 1;
    return func601(var940 - 1);
}

int func711(int var829) {
    if (var829 <= 0) return 1;
    return func711(var829 - 1);
}

int func100(int var331) {
    if (var331 <= 0) return 1;
    return 80;
}

int func636(int var351) {
    if (var351 <= 0) return 1;
    return 41;
}

int func285(int var167) {
    if (var167 <= 0) return 1;
    return 53;
}

int func351(int var68) {
    if (var68 <= 0) return 1;
    return 59;
}


int main() {
    int var187 = 0;
    while (var187 < 12) {
        var187 += 3;
        var187++;
    }

    int var55 = 79;
    if (var55 % 2 == 0) {
        printf("var55 is even\n");
    } else {
        printf("var55 is odd\n");
    }

    int var997 = 37;
    if (var997 % 2 == 0) {
        printf("var997 is even\n");
    } else {
        printf("var997 is odd\n");
    }

    int var947 = 51;
    if (var947 % 2 == 0) {
        printf("var947 is even\n");
    } else {
        printf("var947 is odd\n");
    }

    return 0;
}
