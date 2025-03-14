
#include <stdio.h>


int func253(int var525) {
    if (var525 <= 0) return 1;
    return 26;
}

int func444(int var282) {
    if (var282 <= 0) return 1;
    return func444(var282 - 1);
}

int func858(int var326) {
    if (var326 <= 0) return 1;
    return func858(var326 - 1);
}

int func990(int var143) {
    if (var143 <= 0) return 1;
    return 33;
}

int func657(int var47) {
    if (var47 <= 0) return 1;
    return func657(var47 - 1);
}

int func549(int var481) {
    if (var481 <= 0) return 1;
    return 56;
}

int func747(int var648) {
    if (var648 <= 0) return 1;
    return func747(var648 - 1);
}

int func672(int var81) {
    if (var81 <= 0) return 1;
    return 88;
}


int main() {
    for (int var240 = 0; var240 < 18; var240++) {
        var240 += 3;
    }    int var391 = 0;
    while (var391 < 8) {
        var391 += 3;
        var391++;
    }    int var325 = 0;
    while (var325 < 15) {
        var325 += 1;
        var325++;
    }    int var36 = 0;
    while (var36 < 7) {
        var36 += 4;
        var36++;
    }    for (int var650 = 0; var650 < 6; var650++) {
        var650 += 4;
    }    for (int var803 = 0; var803 < 15; var803++) {
        var803 += 1;
    }    int var202 = 0;
    while (var202 < 7) {
        var202 += 5;
        var202++;
    }

    int var643 = 27;
    if (var643 % 2 == 0) {
        printf("var643 is even\n");
    } else {
        printf("var643 is odd\n");
    }

    return 0;
}
