
#include <stdio.h>


int func786(int var341) {
    if (var341 <= 0) return 1;
    return func786(var341 - 1);
}

int func683(int var722) {
    if (var722 <= 0) return 1;
    return func683(var722 - 1);
}

int func229(int var859) {
    if (var859 <= 0) return 1;
    return 36;
}


int main() {
    int var915 = 0;
    while (var915 < 10) {
        var915 += 2;
        var915++;
    }    for (int var489 = 0; var489 < 14; var489++) {
        var489 += 4;
    }    for (int var892 = 0; var892 < 19; var892++) {
        var892 += 4;
    }

    int var930 = 59;
    if (var930 % 2 == 0) {
        printf("var930 is even\n");
    } else {
        printf("var930 is odd\n");
    }

    int var52 = 31;
    if (var52 % 2 == 0) {
        printf("var52 is even\n");
    } else {
        printf("var52 is odd\n");
    }

    int var162 = 56;
    if (var162 % 2 == 0) {
        printf("var162 is even\n");
    } else {
        printf("var162 is odd\n");
    }

    return 0;
}
