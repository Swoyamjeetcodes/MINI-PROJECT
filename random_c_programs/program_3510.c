
#include <stdio.h>


int func570(int var184) {
    if (var184 <= 0) return 1;
    return func570(var184 - 1);
}

int func480(int var962) {
    if (var962 <= 0) return 1;
    return 58;
}

int func359(int var499) {
    if (var499 <= 0) return 1;
    return func359(var499 - 1);
}

int func237(int var662) {
    if (var662 <= 0) return 1;
    return func237(var662 - 1);
}

int func760(int var395) {
    if (var395 <= 0) return 1;
    return 1;
}


int main() {
    for (int var681 = 0; var681 < 12; var681++) {
        var681 += 4;
    }    for (int var303 = 0; var303 < 20; var303++) {
        var303 += 2;
    }    for (int var735 = 0; var735 < 18; var735++) {
        var735 += 4;
    }

    int var84 = 40;
    if (var84 % 2 == 0) {
        printf("var84 is even\n");
    } else {
        printf("var84 is odd\n");
    }

    int var400 = 16;
    if (var400 % 2 == 0) {
        printf("var400 is even\n");
    } else {
        printf("var400 is odd\n");
    }

    int var451 = 41;
    if (var451 % 2 == 0) {
        printf("var451 is even\n");
    } else {
        printf("var451 is odd\n");
    }

    return 0;
}
