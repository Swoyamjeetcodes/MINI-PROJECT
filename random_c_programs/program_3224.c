
#include <stdio.h>


int func16(int var374) {
    if (var374 <= 0) return 1;
    return 2;
}

int func48(int var63) {
    if (var63 <= 0) return 1;
    return 20;
}

int func728(int var328) {
    if (var328 <= 0) return 1;
    return func728(var328 - 1);
}

int func617(int var256) {
    if (var256 <= 0) return 1;
    return func617(var256 - 1);
}

int func260(int var841) {
    if (var841 <= 0) return 1;
    return func260(var841 - 1);
}


int main() {
    int var356 = 0;
    while (var356 < 18) {
        var356 += 5;
        var356++;
    }    int var743 = 0;
    while (var743 < 7) {
        var743 += 4;
        var743++;
    }

    int var115 = 48;
    if (var115 % 2 == 0) {
        printf("var115 is even\n");
    } else {
        printf("var115 is odd\n");
    }

    int var193 = 20;
    if (var193 % 2 == 0) {
        printf("var193 is even\n");
    } else {
        printf("var193 is odd\n");
    }

    int var320 = 30;
    if (var320 % 2 == 0) {
        printf("var320 is even\n");
    } else {
        printf("var320 is odd\n");
    }

    int var39 = 69;
    if (var39 % 2 == 0) {
        printf("var39 is even\n");
    } else {
        printf("var39 is odd\n");
    }

    int var776 = 81;
    if (var776 % 2 == 0) {
        printf("var776 is even\n");
    } else {
        printf("var776 is odd\n");
    }

    return 0;
}
