
#include <stdio.h>


int func596(int var831) {
    if (var831 <= 0) return 1;
    return 43;
}

int func676(int var444) {
    if (var444 <= 0) return 1;
    return func676(var444 - 1);
}

int func787(int var942) {
    if (var942 <= 0) return 1;
    return func787(var942 - 1);
}

int func354(int var348) {
    if (var348 <= 0) return 1;
    return 97;
}

int func972(int var27) {
    if (var27 <= 0) return 1;
    return func972(var27 - 1);
}


int main() {
    for (int var449 = 0; var449 < 20; var449++) {
        var449 += 1;
    }    for (int var974 = 0; var974 < 5; var974++) {
        var974 += 3;
    }

    int var204 = 94;
    if (var204 % 2 == 0) {
        printf("var204 is even\n");
    } else {
        printf("var204 is odd\n");
    }

    int var341 = 47;
    if (var341 % 2 == 0) {
        printf("var341 is even\n");
    } else {
        printf("var341 is odd\n");
    }

    return 0;
}
