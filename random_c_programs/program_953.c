
#include <stdio.h>


int func135(int var338) {
    if (var338 <= 0) return 1;
    return 13;
}

int func157(int var950) {
    if (var950 <= 0) return 1;
    return func157(var950 - 1);
}

int func99(int var649) {
    if (var649 <= 0) return 1;
    return func99(var649 - 1);
}

int func949(int var822) {
    if (var822 <= 0) return 1;
    return 87;
}


int main() {
    int var820 = 0;
    while (var820 < 13) {
        var820 += 2;
        var820++;
    }    for (int var228 = 0; var228 < 17; var228++) {
        var228 += 1;
    }

    int var75 = 80;
    if (var75 % 2 == 0) {
        printf("var75 is even\n");
    } else {
        printf("var75 is odd\n");
    }

    int var691 = 44;
    if (var691 % 2 == 0) {
        printf("var691 is even\n");
    } else {
        printf("var691 is odd\n");
    }

    int var35 = 85;
    if (var35 % 2 == 0) {
        printf("var35 is even\n");
    } else {
        printf("var35 is odd\n");
    }

    return 0;
}
