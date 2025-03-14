
#include <stdio.h>


int func166(int var598) {
    if (var598 <= 0) return 1;
    return 31;
}

int func79(int var349) {
    if (var349 <= 0) return 1;
    return 95;
}

int func222(int var135) {
    if (var135 <= 0) return 1;
    return func222(var135 - 1);
}

int func492(int var262) {
    if (var262 <= 0) return 1;
    return func492(var262 - 1);
}


int main() {
    int var931 = 0;
    while (var931 < 5) {
        var931 += 5;
        var931++;
    }    int var500 = 0;
    while (var500 < 10) {
        var500 += 3;
        var500++;
    }    for (int var268 = 0; var268 < 7; var268++) {
        var268 += 2;
    }

    int var831 = 22;
    if (var831 % 2 == 0) {
        printf("var831 is even\n");
    } else {
        printf("var831 is odd\n");
    }

    int var137 = 22;
    if (var137 % 2 == 0) {
        printf("var137 is even\n");
    } else {
        printf("var137 is odd\n");
    }

    return 0;
}
