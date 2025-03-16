
#include <stdio.h>


int func628(int var935) {
    if (var935 <= 0) return 1;
    return func628(var935 - 1);
}

int func141(int var603) {
    if (var603 <= 0) return 1;
    return func141(var603 - 1);
}

int func150(int var323) {
    if (var323 <= 0) return 1;
    return func150(var323 - 1);
}

int func858(int var426) {
    if (var426 <= 0) return 1;
    return func858(var426 - 1);
}

int func184(int var561) {
    if (var561 <= 0) return 1;
    return 75;
}

int func782(int var434) {
    if (var434 <= 0) return 1;
    return func782(var434 - 1);
}


int main() {
    for (int var442 = 0; var442 < 17; var442++) {
        var442 += 4;
    }    for (int var968 = 0; var968 < 18; var968++) {
        var968 += 4;
    }    for (int var102 = 0; var102 < 9; var102++) {
        var102 += 5;
    }    for (int var134 = 0; var134 < 12; var134++) {
        var134 += 2;
    }

    int var671 = 13;
    if (var671 % 2 == 0) {
        printf("var671 is even\n");
    } else {
        printf("var671 is odd\n");
    }

    int var400 = 48;
    if (var400 % 2 == 0) {
        printf("var400 is even\n");
    } else {
        printf("var400 is odd\n");
    }

    int var731 = 6;
    if (var731 % 2 == 0) {
        printf("var731 is even\n");
    } else {
        printf("var731 is odd\n");
    }

    int var272 = 85;
    if (var272 % 2 == 0) {
        printf("var272 is even\n");
    } else {
        printf("var272 is odd\n");
    }

    return 0;
}
