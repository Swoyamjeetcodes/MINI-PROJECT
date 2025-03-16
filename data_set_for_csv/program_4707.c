
#include <stdio.h>


int func474(int var643) {
    if (var643 <= 0) return 1;
    return func474(var643 - 1);
}

int func95(int var119) {
    if (var119 <= 0) return 1;
    return func95(var119 - 1);
}

int func90(int var381) {
    if (var381 <= 0) return 1;
    return func90(var381 - 1);
}


int main() {
    for (int var12 = 0; var12 < 20; var12++) {
        var12 += 3;
    }    int var461 = 0;
    while (var461 < 11) {
        var461 += 3;
        var461++;
    }

    int var593 = 65;
    if (var593 % 2 == 0) {
        printf("var593 is even\n");
    } else {
        printf("var593 is odd\n");
    }

    int var723 = 64;
    if (var723 % 2 == 0) {
        printf("var723 is even\n");
    } else {
        printf("var723 is odd\n");
    }

    int var921 = 68;
    if (var921 % 2 == 0) {
        printf("var921 is even\n");
    } else {
        printf("var921 is odd\n");
    }

    return 0;
}
