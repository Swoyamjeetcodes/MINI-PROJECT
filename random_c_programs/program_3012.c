
#include <stdio.h>


int func853(int var793) {
    if (var793 <= 0) return 1;
    return func853(var793 - 1);
}

int func451(int var868) {
    if (var868 <= 0) return 1;
    return 48;
}

int func35(int var645) {
    if (var645 <= 0) return 1;
    return func35(var645 - 1);
}


int main() {
    int var52 = 0;
    while (var52 < 7) {
        var52 += 3;
        var52++;
    }

    int var525 = 20;
    if (var525 % 2 == 0) {
        printf("var525 is even\n");
    } else {
        printf("var525 is odd\n");
    }

    int var904 = 6;
    if (var904 % 2 == 0) {
        printf("var904 is even\n");
    } else {
        printf("var904 is odd\n");
    }

    int var311 = 31;
    if (var311 % 2 == 0) {
        printf("var311 is even\n");
    } else {
        printf("var311 is odd\n");
    }

    return 0;
}
