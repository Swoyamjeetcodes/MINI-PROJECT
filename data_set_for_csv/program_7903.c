
#include <stdio.h>


int func918(int var936) {
    if (var936 <= 0) return 1;
    return func918(var936 - 1);
}

int func48(int var816) {
    if (var816 <= 0) return 1;
    return func48(var816 - 1);
}

int func852(int var574) {
    if (var574 <= 0) return 1;
    return func852(var574 - 1);
}


int main() {
    for (int var342 = 0; var342 < 5; var342++) {
        var342 += 5;
    }    int var80 = 0;
    while (var80 < 15) {
        var80 += 4;
        var80++;
    }    for (int var357 = 0; var357 < 13; var357++) {
        var357 += 3;
    }

    int var154 = 2;
    if (var154 % 2 == 0) {
        printf("var154 is even\n");
    } else {
        printf("var154 is odd\n");
    }

    return 0;
}
