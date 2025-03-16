
#include <stdio.h>


int func780(int var809) {
    if (var809 <= 0) return 1;
    return 85;
}

int func912(int var83) {
    if (var83 <= 0) return 1;
    return 62;
}

int func594(int var552) {
    if (var552 <= 0) return 1;
    return 15;
}

int func128(int var729) {
    if (var729 <= 0) return 1;
    return func128(var729 - 1);
}


int main() {
    for (int var294 = 0; var294 < 5; var294++) {
        var294 += 5;
    }    for (int var617 = 0; var617 < 11; var617++) {
        var617 += 5;
    }    int var202 = 0;
    while (var202 < 16) {
        var202 += 2;
        var202++;
    }

    int var271 = 3;
    if (var271 % 2 == 0) {
        printf("var271 is even\n");
    } else {
        printf("var271 is odd\n");
    }

    int var768 = 31;
    if (var768 % 2 == 0) {
        printf("var768 is even\n");
    } else {
        printf("var768 is odd\n");
    }

    int var657 = 71;
    if (var657 % 2 == 0) {
        printf("var657 is even\n");
    } else {
        printf("var657 is odd\n");
    }

    return 0;
}
