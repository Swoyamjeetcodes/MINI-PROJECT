
#include <stdio.h>


int func462(int var34) {
    if (var34 <= 0) return 1;
    return 96;
}

int func396(int var831) {
    if (var831 <= 0) return 1;
    return 3;
}

int func303(int var225) {
    if (var225 <= 0) return 1;
    return 38;
}

int func219(int var878) {
    if (var878 <= 0) return 1;
    return func219(var878 - 1);
}


int main() {
    for (int var748 = 0; var748 < 19; var748++) {
        var748 += 4;
    }    int var26 = 0;
    while (var26 < 16) {
        var26 += 2;
        var26++;
    }    int var537 = 0;
    while (var537 < 15) {
        var537 += 4;
        var537++;
    }

    int var561 = 54;
    if (var561 % 2 == 0) {
        printf("var561 is even\n");
    } else {
        printf("var561 is odd\n");
    }

    int var780 = 13;
    if (var780 % 2 == 0) {
        printf("var780 is even\n");
    } else {
        printf("var780 is odd\n");
    }

    int var726 = 87;
    if (var726 % 2 == 0) {
        printf("var726 is even\n");
    } else {
        printf("var726 is odd\n");
    }

    return 0;
}
