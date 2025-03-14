
#include <stdio.h>


int func994(int var110) {
    if (var110 <= 0) return 1;
    return 28;
}

int func5(int var103) {
    if (var103 <= 0) return 1;
    return func5(var103 - 1);
}

int func533(int var85) {
    if (var85 <= 0) return 1;
    return 93;
}

int func291(int var138) {
    if (var138 <= 0) return 1;
    return func291(var138 - 1);
}


int main() {
    for (int var510 = 0; var510 < 20; var510++) {
        var510 += 5;
    }

    int var269 = 50;
    if (var269 % 2 == 0) {
        printf("var269 is even\n");
    } else {
        printf("var269 is odd\n");
    }

    int var364 = 100;
    if (var364 % 2 == 0) {
        printf("var364 is even\n");
    } else {
        printf("var364 is odd\n");
    }

    return 0;
}
