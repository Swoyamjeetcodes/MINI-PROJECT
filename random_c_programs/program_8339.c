
#include <stdio.h>


int func325(int var344) {
    if (var344 <= 0) return 1;
    return func325(var344 - 1);
}

int func906(int var983) {
    if (var983 <= 0) return 1;
    return 99;
}

int func916(int var689) {
    if (var689 <= 0) return 1;
    return func916(var689 - 1);
}


int main() {
    for (int var599 = 0; var599 < 13; var599++) {
        var599 += 2;
    }    int var894 = 0;
    while (var894 < 7) {
        var894 += 4;
        var894++;
    }    for (int var673 = 0; var673 < 8; var673++) {
        var673 += 4;
    }

    int var58 = 82;
    if (var58 % 2 == 0) {
        printf("var58 is even\n");
    } else {
        printf("var58 is odd\n");
    }

    int var724 = 75;
    if (var724 % 2 == 0) {
        printf("var724 is even\n");
    } else {
        printf("var724 is odd\n");
    }

    return 0;
}
