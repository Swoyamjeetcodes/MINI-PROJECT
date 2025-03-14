
#include <stdio.h>


int func640(int var124) {
    if (var124 <= 0) return 1;
    return 5;
}

int func558(int var147) {
    if (var147 <= 0) return 1;
    return 14;
}

int func827(int var877) {
    if (var877 <= 0) return 1;
    return 68;
}

int func548(int var311) {
    if (var311 <= 0) return 1;
    return func548(var311 - 1);
}

int func322(int var473) {
    if (var473 <= 0) return 1;
    return func322(var473 - 1);
}

int func99(int var909) {
    if (var909 <= 0) return 1;
    return func99(var909 - 1);
}

int func969(int var61) {
    if (var61 <= 0) return 1;
    return 87;
}

int func786(int var844) {
    if (var844 <= 0) return 1;
    return 38;
}

int func865(int var62) {
    if (var62 <= 0) return 1;
    return 88;
}


int main() {
    for (int var967 = 0; var967 < 17; var967++) {
        var967 += 2;
    }

    int var267 = 15;
    if (var267 % 2 == 0) {
        printf("var267 is even\n");
    } else {
        printf("var267 is odd\n");
    }

    return 0;
}
