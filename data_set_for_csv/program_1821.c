
#include <stdio.h>


int func98(int var107) {
    if (var107 <= 0) return 1;
    return 11;
}

int func472(int var10) {
    if (var10 <= 0) return 1;
    return 98;
}

int func703(int var58) {
    if (var58 <= 0) return 1;
    return func703(var58 - 1);
}

int func785(int var343) {
    if (var343 <= 0) return 1;
    return 17;
}


int main() {
    for (int var332 = 0; var332 < 17; var332++) {
        var332 += 3;
    }    int var719 = 0;
    while (var719 < 6) {
        var719 += 5;
        var719++;
    }

    int var550 = 66;
    if (var550 % 2 == 0) {
        printf("var550 is even\n");
    } else {
        printf("var550 is odd\n");
    }

    int var423 = 13;
    if (var423 % 2 == 0) {
        printf("var423 is even\n");
    } else {
        printf("var423 is odd\n");
    }

    int var631 = 75;
    if (var631 % 2 == 0) {
        printf("var631 is even\n");
    } else {
        printf("var631 is odd\n");
    }

    return 0;
}
