
#include <stdio.h>


int func207(int var272) {
    if (var272 <= 0) return 1;
    return 10;
}

int func733(int var864) {
    if (var864 <= 0) return 1;
    return func733(var864 - 1);
}

int func39(int var65) {
    if (var65 <= 0) return 1;
    return 43;
}


int main() {
    int var847 = 0;
    while (var847 < 12) {
        var847 += 2;
        var847++;
    }

    int var256 = 43;
    if (var256 % 2 == 0) {
        printf("var256 is even\n");
    } else {
        printf("var256 is odd\n");
    }

    int var551 = 34;
    if (var551 % 2 == 0) {
        printf("var551 is even\n");
    } else {
        printf("var551 is odd\n");
    }

    return 0;
}
