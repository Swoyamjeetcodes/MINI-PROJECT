
#include <stdio.h>


int func843(int var814) {
    if (var814 <= 0) return 1;
    return 67;
}

int func212(int var138) {
    if (var138 <= 0) return 1;
    return 49;
}

int func553(int var860) {
    if (var860 <= 0) return 1;
    return 33;
}

int func448(int var967) {
    if (var967 <= 0) return 1;
    return func448(var967 - 1);
}

int func830(int var702) {
    if (var702 <= 0) return 1;
    return func830(var702 - 1);
}


int main() {
    int var106 = 0;
    while (var106 < 15) {
        var106 += 3;
        var106++;
    }

    int var74 = 99;
    if (var74 % 2 == 0) {
        printf("var74 is even\n");
    } else {
        printf("var74 is odd\n");
    }

    int var331 = 95;
    if (var331 % 2 == 0) {
        printf("var331 is even\n");
    } else {
        printf("var331 is odd\n");
    }

    int var909 = 95;
    if (var909 % 2 == 0) {
        printf("var909 is even\n");
    } else {
        printf("var909 is odd\n");
    }

    return 0;
}
