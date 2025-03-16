
#include <stdio.h>


int func239(int var989) {
    if (var989 <= 0) return 1;
    return 98;
}

int func254(int var132) {
    if (var132 <= 0) return 1;
    return func254(var132 - 1);
}

int func490(int var582) {
    if (var582 <= 0) return 1;
    return func490(var582 - 1);
}


int main() {
    for (int var159 = 0; var159 < 10; var159++) {
        var159 += 1;
    }    for (int var599 = 0; var599 < 14; var599++) {
        var599 += 3;
    }    int var61 = 0;
    while (var61 < 11) {
        var61 += 4;
        var61++;
    }

    int var286 = 45;
    if (var286 % 2 == 0) {
        printf("var286 is even\n");
    } else {
        printf("var286 is odd\n");
    }

    int var352 = 75;
    if (var352 % 2 == 0) {
        printf("var352 is even\n");
    } else {
        printf("var352 is odd\n");
    }

    return 0;
}
