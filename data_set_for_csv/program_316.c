
#include <stdio.h>


int func43(int var183) {
    if (var183 <= 0) return 1;
    return 16;
}

int func208(int var185) {
    if (var185 <= 0) return 1;
    return func208(var185 - 1);
}

int func195(int var472) {
    if (var472 <= 0) return 1;
    return func195(var472 - 1);
}

int func229(int var18) {
    if (var18 <= 0) return 1;
    return 19;
}

int func233(int var233) {
    if (var233 <= 0) return 1;
    return 11;
}


int main() {
    int var836 = 0;
    while (var836 < 9) {
        var836 += 3;
        var836++;
    }    int var714 = 0;
    while (var714 < 12) {
        var714 += 1;
        var714++;
    }

    int var999 = 97;
    if (var999 % 2 == 0) {
        printf("var999 is even\n");
    } else {
        printf("var999 is odd\n");
    }

    int var754 = 52;
    if (var754 % 2 == 0) {
        printf("var754 is even\n");
    } else {
        printf("var754 is odd\n");
    }

    return 0;
}
