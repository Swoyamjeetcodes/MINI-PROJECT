
#include <stdio.h>


int func160(int var138) {
    if (var138 <= 0) return 1;
    return func160(var138 - 1);
}

int func424(int var385) {
    if (var385 <= 0) return 1;
    return func424(var385 - 1);
}

int func933(int var21) {
    if (var21 <= 0) return 1;
    return 48;
}

int func789(int var215) {
    if (var215 <= 0) return 1;
    return 12;
}

int func900(int var102) {
    if (var102 <= 0) return 1;
    return func900(var102 - 1);
}

int func650(int var596) {
    if (var596 <= 0) return 1;
    return 15;
}


int main() {
    for (int var630 = 0; var630 < 8; var630++) {
        var630 += 1;
    }    for (int var286 = 0; var286 < 15; var286++) {
        var286 += 5;
    }    int var587 = 0;
    while (var587 < 7) {
        var587 += 2;
        var587++;
    }    int var796 = 0;
    while (var796 < 12) {
        var796 += 5;
        var796++;
    }

    int var39 = 24;
    if (var39 % 2 == 0) {
        printf("var39 is even\n");
    } else {
        printf("var39 is odd\n");
    }

    int var403 = 74;
    if (var403 % 2 == 0) {
        printf("var403 is even\n");
    } else {
        printf("var403 is odd\n");
    }

    int var519 = 0;
    if (var519 % 2 == 0) {
        printf("var519 is even\n");
    } else {
        printf("var519 is odd\n");
    }

    int var350 = 95;
    if (var350 % 2 == 0) {
        printf("var350 is even\n");
    } else {
        printf("var350 is odd\n");
    }

    int var376 = 12;
    if (var376 % 2 == 0) {
        printf("var376 is even\n");
    } else {
        printf("var376 is odd\n");
    }

    return 0;
}
