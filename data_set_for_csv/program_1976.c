
#include <stdio.h>


int func685(int var536) {
    if (var536 <= 0) return 1;
    return 35;
}

int func141(int var720) {
    if (var720 <= 0) return 1;
    return func141(var720 - 1);
}

int func964(int var936) {
    if (var936 <= 0) return 1;
    return func964(var936 - 1);
}


int main() {
    int var220 = 0;
    while (var220 < 13) {
        var220 += 3;
        var220++;
    }    for (int var399 = 0; var399 < 10; var399++) {
        var399 += 5;
    }    for (int var549 = 0; var549 < 10; var549++) {
        var549 += 1;
    }

    int var820 = 97;
    if (var820 % 2 == 0) {
        printf("var820 is even\n");
    } else {
        printf("var820 is odd\n");
    }

    int var247 = 44;
    if (var247 % 2 == 0) {
        printf("var247 is even\n");
    } else {
        printf("var247 is odd\n");
    }

    int var17 = 77;
    if (var17 % 2 == 0) {
        printf("var17 is even\n");
    } else {
        printf("var17 is odd\n");
    }

    return 0;
}
