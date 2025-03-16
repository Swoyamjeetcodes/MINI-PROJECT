
#include <stdio.h>


int func865(int var167) {
    if (var167 <= 0) return 1;
    return func865(var167 - 1);
}

int func31(int var781) {
    if (var781 <= 0) return 1;
    return 1;
}

int func586(int var2) {
    if (var2 <= 0) return 1;
    return func586(var2 - 1);
}


int main() {
    int var353 = 0;
    while (var353 < 15) {
        var353 += 4;
        var353++;
    }    for (int var233 = 0; var233 < 13; var233++) {
        var233 += 4;
    }    int var80 = 0;
    while (var80 < 6) {
        var80 += 5;
        var80++;
    }

    int var66 = 41;
    if (var66 % 2 == 0) {
        printf("var66 is even\n");
    } else {
        printf("var66 is odd\n");
    }

    return 0;
}
