
#include <stdio.h>


int func166(int var479) {
    if (var479 <= 0) return 1;
    return func166(var479 - 1);
}


int main() {
    int var12 = 0;
    while (var12 < 18) {
        var12 += 1;
        var12++;
    }    int var622 = 0;
    while (var622 < 5) {
        var622 += 4;
        var622++;
    }

    int var245 = 58;
    if (var245 % 2 == 0) {
        printf("var245 is even\n");
    } else {
        printf("var245 is odd\n");
    }

    int var204 = 40;
    if (var204 % 2 == 0) {
        printf("var204 is even\n");
    } else {
        printf("var204 is odd\n");
    }

    int var46 = 67;
    if (var46 % 2 == 0) {
        printf("var46 is even\n");
    } else {
        printf("var46 is odd\n");
    }

    return 0;
}
