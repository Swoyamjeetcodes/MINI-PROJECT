
#include <stdio.h>


int func870(int var710) {
    if (var710 <= 0) return 1;
    return func870(var710 - 1);
}

int func116(int var213) {
    if (var213 <= 0) return 1;
    return 62;
}

int func895(int var325) {
    if (var325 <= 0) return 1;
    return func895(var325 - 1);
}

int func118(int var765) {
    if (var765 <= 0) return 1;
    return func118(var765 - 1);
}


int main() {
    for (int var52 = 0; var52 < 5; var52++) {
        var52 += 2;
    }    int var967 = 0;
    while (var967 < 7) {
        var967 += 5;
        var967++;
    }    for (int var16 = 0; var16 < 13; var16++) {
        var16 += 2;
    }

    int var202 = 27;
    if (var202 % 2 == 0) {
        printf("var202 is even\n");
    } else {
        printf("var202 is odd\n");
    }

    int var214 = 81;
    if (var214 % 2 == 0) {
        printf("var214 is even\n");
    } else {
        printf("var214 is odd\n");
    }

    int var914 = 70;
    if (var914 % 2 == 0) {
        printf("var914 is even\n");
    } else {
        printf("var914 is odd\n");
    }

    return 0;
}
