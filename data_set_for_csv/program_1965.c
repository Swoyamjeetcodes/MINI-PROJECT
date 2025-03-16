
#include <stdio.h>


int func911(int var613) {
    if (var613 <= 0) return 1;
    return 80;
}

int func49(int var580) {
    if (var580 <= 0) return 1;
    return func49(var580 - 1);
}

int func83(int var496) {
    if (var496 <= 0) return 1;
    return func83(var496 - 1);
}

int func615(int var597) {
    if (var597 <= 0) return 1;
    return func615(var597 - 1);
}

int func81(int var476) {
    if (var476 <= 0) return 1;
    return func81(var476 - 1);
}


int main() {
    int var588 = 0;
    while (var588 < 6) {
        var588 += 3;
        var588++;
    }

    int var663 = 74;
    if (var663 % 2 == 0) {
        printf("var663 is even\n");
    } else {
        printf("var663 is odd\n");
    }

    int var568 = 76;
    if (var568 % 2 == 0) {
        printf("var568 is even\n");
    } else {
        printf("var568 is odd\n");
    }

    int var402 = 82;
    if (var402 % 2 == 0) {
        printf("var402 is even\n");
    } else {
        printf("var402 is odd\n");
    }

    return 0;
}
