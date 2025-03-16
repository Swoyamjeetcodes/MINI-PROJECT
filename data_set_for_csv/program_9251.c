
#include <stdio.h>


int func544(int var485) {
    if (var485 <= 0) return 1;
    return func544(var485 - 1);
}

int func674(int var4) {
    if (var4 <= 0) return 1;
    return 14;
}


int main() {
    int var624 = 0;
    while (var624 < 19) {
        var624 += 3;
        var624++;
    }    int var932 = 0;
    while (var932 < 11) {
        var932 += 4;
        var932++;
    }

    int var839 = 7;
    if (var839 % 2 == 0) {
        printf("var839 is even\n");
    } else {
        printf("var839 is odd\n");
    }

    int var21 = 31;
    if (var21 % 2 == 0) {
        printf("var21 is even\n");
    } else {
        printf("var21 is odd\n");
    }

    int var676 = 95;
    if (var676 % 2 == 0) {
        printf("var676 is even\n");
    } else {
        printf("var676 is odd\n");
    }

    return 0;
}
