
#include <stdio.h>


int func935(int var806) {
    if (var806 <= 0) return 1;
    return 49;
}

int func685(int var181) {
    if (var181 <= 0) return 1;
    return func685(var181 - 1);
}

int func74(int var808) {
    if (var808 <= 0) return 1;
    return func74(var808 - 1);
}

int func377(int var647) {
    if (var647 <= 0) return 1;
    return func377(var647 - 1);
}


int main() {
    int var598 = 0;
    while (var598 < 20) {
        var598 += 3;
        var598++;
    }

    int var562 = 87;
    if (var562 % 2 == 0) {
        printf("var562 is even\n");
    } else {
        printf("var562 is odd\n");
    }

    int var766 = 88;
    if (var766 % 2 == 0) {
        printf("var766 is even\n");
    } else {
        printf("var766 is odd\n");
    }

    int var749 = 20;
    if (var749 % 2 == 0) {
        printf("var749 is even\n");
    } else {
        printf("var749 is odd\n");
    }

    int var719 = 81;
    if (var719 % 2 == 0) {
        printf("var719 is even\n");
    } else {
        printf("var719 is odd\n");
    }

    int var202 = 99;
    if (var202 % 2 == 0) {
        printf("var202 is even\n");
    } else {
        printf("var202 is odd\n");
    }

    return 0;
}
