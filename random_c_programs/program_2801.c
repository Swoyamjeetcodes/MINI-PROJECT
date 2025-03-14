
#include <stdio.h>


int func864(int var744) {
    if (var744 <= 0) return 1;
    return func864(var744 - 1);
}

int func608(int var318) {
    if (var318 <= 0) return 1;
    return func608(var318 - 1);
}

int func208(int var436) {
    if (var436 <= 0) return 1;
    return func208(var436 - 1);
}


int main() {
    int var561 = 0;
    while (var561 < 17) {
        var561 += 3;
        var561++;
    }    int var413 = 0;
    while (var413 < 11) {
        var413 += 4;
        var413++;
    }

    int var140 = 19;
    if (var140 % 2 == 0) {
        printf("var140 is even\n");
    } else {
        printf("var140 is odd\n");
    }

    int var219 = 20;
    if (var219 % 2 == 0) {
        printf("var219 is even\n");
    } else {
        printf("var219 is odd\n");
    }

    int var173 = 8;
    if (var173 % 2 == 0) {
        printf("var173 is even\n");
    } else {
        printf("var173 is odd\n");
    }

    int var202 = 40;
    if (var202 % 2 == 0) {
        printf("var202 is even\n");
    } else {
        printf("var202 is odd\n");
    }

    int var689 = 66;
    if (var689 % 2 == 0) {
        printf("var689 is even\n");
    } else {
        printf("var689 is odd\n");
    }

    return 0;
}
