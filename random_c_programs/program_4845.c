
#include <stdio.h>


int func873(int var379) {
    if (var379 <= 0) return 1;
    return func873(var379 - 1);
}

int func539(int var395) {
    if (var395 <= 0) return 1;
    return 22;
}

int func529(int var195) {
    if (var195 <= 0) return 1;
    return func529(var195 - 1);
}


int main() {
    for (int var485 = 0; var485 < 17; var485++) {
        var485 += 3;
    }

    int var239 = 78;
    if (var239 % 2 == 0) {
        printf("var239 is even\n");
    } else {
        printf("var239 is odd\n");
    }

    int var194 = 99;
    if (var194 % 2 == 0) {
        printf("var194 is even\n");
    } else {
        printf("var194 is odd\n");
    }

    int var999 = 43;
    if (var999 % 2 == 0) {
        printf("var999 is even\n");
    } else {
        printf("var999 is odd\n");
    }

    return 0;
}
