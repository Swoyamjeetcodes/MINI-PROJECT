
#include <stdio.h>


int func871(int var662) {
    if (var662 <= 0) return 1;
    return 5;
}

int func968(int var801) {
    if (var801 <= 0) return 1;
    return func968(var801 - 1);
}

int func670(int var54) {
    if (var54 <= 0) return 1;
    return func670(var54 - 1);
}

int func710(int var623) {
    if (var623 <= 0) return 1;
    return func710(var623 - 1);
}

int func135(int var13) {
    if (var13 <= 0) return 1;
    return func135(var13 - 1);
}


int main() {
    int var612 = 0;
    while (var612 < 10) {
        var612 += 4;
        var612++;
    }    for (int var876 = 0; var876 < 19; var876++) {
        var876 += 3;
    }

    int var776 = 51;
    if (var776 % 2 == 0) {
        printf("var776 is even\n");
    } else {
        printf("var776 is odd\n");
    }

    int var732 = 18;
    if (var732 % 2 == 0) {
        printf("var732 is even\n");
    } else {
        printf("var732 is odd\n");
    }

    int var231 = 89;
    if (var231 % 2 == 0) {
        printf("var231 is even\n");
    } else {
        printf("var231 is odd\n");
    }

    return 0;
}
