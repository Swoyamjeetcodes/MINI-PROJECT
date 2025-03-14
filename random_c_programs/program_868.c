
#include <stdio.h>


int func862(int var414) {
    if (var414 <= 0) return 1;
    return 52;
}

int func245(int var73) {
    if (var73 <= 0) return 1;
    return 94;
}

int func655(int var538) {
    if (var538 <= 0) return 1;
    return func655(var538 - 1);
}


int main() {
    for (int var968 = 0; var968 < 8; var968++) {
        var968 += 1;
    }    int var440 = 0;
    while (var440 < 12) {
        var440 += 2;
        var440++;
    }    int var480 = 0;
    while (var480 < 11) {
        var480 += 4;
        var480++;
    }

    int var472 = 82;
    if (var472 % 2 == 0) {
        printf("var472 is even\n");
    } else {
        printf("var472 is odd\n");
    }

    int var544 = 11;
    if (var544 % 2 == 0) {
        printf("var544 is even\n");
    } else {
        printf("var544 is odd\n");
    }

    int var26 = 76;
    if (var26 % 2 == 0) {
        printf("var26 is even\n");
    } else {
        printf("var26 is odd\n");
    }

    return 0;
}
