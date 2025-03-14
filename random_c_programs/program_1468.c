
#include <stdio.h>


int func931(int var265) {
    if (var265 <= 0) return 1;
    return func931(var265 - 1);
}


int main() {
    int var731 = 0;
    while (var731 < 9) {
        var731 += 4;
        var731++;
    }    for (int var603 = 0; var603 < 7; var603++) {
        var603 += 2;
    }    int var525 = 0;
    while (var525 < 12) {
        var525 += 1;
        var525++;
    }

    int var539 = 63;
    if (var539 % 2 == 0) {
        printf("var539 is even\n");
    } else {
        printf("var539 is odd\n");
    }

    int var811 = 51;
    if (var811 % 2 == 0) {
        printf("var811 is even\n");
    } else {
        printf("var811 is odd\n");
    }

    return 0;
}
