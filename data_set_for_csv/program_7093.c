
#include <stdio.h>


int func663(int var529) {
    if (var529 <= 0) return 1;
    return func663(var529 - 1);
}

int func228(int var735) {
    if (var735 <= 0) return 1;
    return func228(var735 - 1);
}

int func940(int var18) {
    if (var18 <= 0) return 1;
    return 74;
}

int func566(int var855) {
    if (var855 <= 0) return 1;
    return 22;
}

int func459(int var450) {
    if (var450 <= 0) return 1;
    return func459(var450 - 1);
}


int main() {
    for (int var897 = 0; var897 < 20; var897++) {
        var897 += 5;
    }    int var674 = 0;
    while (var674 < 13) {
        var674 += 4;
        var674++;
    }    for (int var148 = 0; var148 < 16; var148++) {
        var148 += 2;
    }    int var308 = 0;
    while (var308 < 18) {
        var308 += 1;
        var308++;
    }    for (int var710 = 0; var710 < 20; var710++) {
        var710 += 4;
    }    int var778 = 0;
    while (var778 < 11) {
        var778 += 3;
        var778++;
    }    int var331 = 0;
    while (var331 < 15) {
        var331 += 1;
        var331++;
    }

    int var248 = 86;
    if (var248 % 2 == 0) {
        printf("var248 is even\n");
    } else {
        printf("var248 is odd\n");
    }

    return 0;
}
