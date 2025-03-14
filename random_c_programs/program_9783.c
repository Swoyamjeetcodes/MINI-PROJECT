
#include <stdio.h>


int func260(int var34) {
    if (var34 <= 0) return 1;
    return 56;
}

int func253(int var666) {
    if (var666 <= 0) return 1;
    return 60;
}

int func822(int var678) {
    if (var678 <= 0) return 1;
    return func822(var678 - 1);
}

int func41(int var399) {
    if (var399 <= 0) return 1;
    return 59;
}


int main() {
    for (int var291 = 0; var291 < 5; var291++) {
        var291 += 4;
    }

    int var53 = 48;
    if (var53 % 2 == 0) {
        printf("var53 is even\n");
    } else {
        printf("var53 is odd\n");
    }

    int var656 = 8;
    if (var656 % 2 == 0) {
        printf("var656 is even\n");
    } else {
        printf("var656 is odd\n");
    }

    int var45 = 87;
    if (var45 % 2 == 0) {
        printf("var45 is even\n");
    } else {
        printf("var45 is odd\n");
    }

    return 0;
}
