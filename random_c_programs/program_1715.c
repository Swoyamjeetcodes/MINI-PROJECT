
#include <stdio.h>


int func603(int var561) {
    if (var561 <= 0) return 1;
    return func603(var561 - 1);
}

int func248(int var107) {
    if (var107 <= 0) return 1;
    return func248(var107 - 1);
}

int func751(int var710) {
    if (var710 <= 0) return 1;
    return func751(var710 - 1);
}


int main() {
    for (int var346 = 0; var346 < 5; var346++) {
        var346 += 4;
    }    for (int var92 = 0; var92 < 14; var92++) {
        var92 += 1;
    }    for (int var570 = 0; var570 < 6; var570++) {
        var570 += 2;
    }    int var106 = 0;
    while (var106 < 11) {
        var106 += 4;
        var106++;
    }    for (int var823 = 0; var823 < 5; var823++) {
        var823 += 1;
    }    for (int var688 = 0; var688 < 8; var688++) {
        var688 += 5;
    }    int var165 = 0;
    while (var165 < 9) {
        var165 += 5;
        var165++;
    }

    int var12 = 8;
    if (var12 % 2 == 0) {
        printf("var12 is even\n");
    } else {
        printf("var12 is odd\n");
    }

    int var398 = 7;
    if (var398 % 2 == 0) {
        printf("var398 is even\n");
    } else {
        printf("var398 is odd\n");
    }

    int var405 = 97;
    if (var405 % 2 == 0) {
        printf("var405 is even\n");
    } else {
        printf("var405 is odd\n");
    }

    int var923 = 90;
    if (var923 % 2 == 0) {
        printf("var923 is even\n");
    } else {
        printf("var923 is odd\n");
    }

    int var496 = 34;
    if (var496 % 2 == 0) {
        printf("var496 is even\n");
    } else {
        printf("var496 is odd\n");
    }

    int var901 = 46;
    if (var901 % 2 == 0) {
        printf("var901 is even\n");
    } else {
        printf("var901 is odd\n");
    }

    int var3 = 42;
    if (var3 % 2 == 0) {
        printf("var3 is even\n");
    } else {
        printf("var3 is odd\n");
    }

    return 0;
}
