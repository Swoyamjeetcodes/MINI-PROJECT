
#include <stdio.h>


int func80(int var161) {
    if (var161 <= 0) return 1;
    return func80(var161 - 1);
}

int func240(int var536) {
    if (var536 <= 0) return 1;
    return func240(var536 - 1);
}

int func681(int var231) {
    if (var231 <= 0) return 1;
    return func681(var231 - 1);
}

int func41(int var535) {
    if (var535 <= 0) return 1;
    return 91;
}

int func992(int var270) {
    if (var270 <= 0) return 1;
    return 54;
}

int func431(int var396) {
    if (var396 <= 0) return 1;
    return func431(var396 - 1);
}

int func630(int var454) {
    if (var454 <= 0) return 1;
    return func630(var454 - 1);
}

int func963(int var791) {
    if (var791 <= 0) return 1;
    return 38;
}

int func135(int var774) {
    if (var774 <= 0) return 1;
    return func135(var774 - 1);
}

int func20(int var325) {
    if (var325 <= 0) return 1;
    return 22;
}

int func452(int var293) {
    if (var293 <= 0) return 1;
    return func452(var293 - 1);
}


int main() {
    for (int var993 = 0; var993 < 14; var993++) {
        var993 += 5;
    }    int var602 = 0;
    while (var602 < 14) {
        var602 += 4;
        var602++;
    }    int var551 = 0;
    while (var551 < 14) {
        var551 += 2;
        var551++;
    }    for (int var720 = 0; var720 < 5; var720++) {
        var720 += 3;
    }    int var929 = 0;
    while (var929 < 14) {
        var929 += 3;
        var929++;
    }    for (int var982 = 0; var982 < 20; var982++) {
        var982 += 1;
    }

    int var366 = 90;
    if (var366 % 2 == 0) {
        printf("var366 is even\n");
    } else {
        printf("var366 is odd\n");
    }

    return 0;
}
