
#include <stdio.h>


int func227(int var700) {
    if (var700 <= 0) return 1;
    return func227(var700 - 1);
}


int main() {
    for (int var575 = 0; var575 < 15; var575++) {
        var575 += 2;
    }    int var445 = 0;
    while (var445 < 9) {
        var445 += 3;
        var445++;
    }    for (int var542 = 0; var542 < 9; var542++) {
        var542 += 4;
    }

    int var65 = 41;
    if (var65 % 2 == 0) {
        printf("var65 is even\n");
    } else {
        printf("var65 is odd\n");
    }

    return 0;
}
