
#include <stdio.h>


int func963(int var674) {
    if (var674 <= 0) return 1;
    return func963(var674 - 1);
}


int main() {
    for (int var964 = 0; var964 < 6; var964++) {
        var964 += 5;
    }    for (int var270 = 0; var270 < 12; var270++) {
        var270 += 5;
    }    for (int var166 = 0; var166 < 17; var166++) {
        var166 += 4;
    }

    int var413 = 7;
    if (var413 % 2 == 0) {
        printf("var413 is even\n");
    } else {
        printf("var413 is odd\n");
    }

    return 0;
}
