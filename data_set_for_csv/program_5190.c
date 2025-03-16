
#include <stdio.h>


int func586(int var298) {
    if (var298 <= 0) return 1;
    return 14;
}

int func852(int var468) {
    if (var468 <= 0) return 1;
    return func852(var468 - 1);
}

int func157(int var319) {
    if (var319 <= 0) return 1;
    return func157(var319 - 1);
}


int main() {
    for (int var547 = 0; var547 < 10; var547++) {
        var547 += 4;
    }

    int var101 = 22;
    if (var101 % 2 == 0) {
        printf("var101 is even\n");
    } else {
        printf("var101 is odd\n");
    }

    int var762 = 18;
    if (var762 % 2 == 0) {
        printf("var762 is even\n");
    } else {
        printf("var762 is odd\n");
    }

    return 0;
}
