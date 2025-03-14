
#include <stdio.h>


int func107(int var259) {
    if (var259 <= 0) return 1;
    return func107(var259 - 1);
}


int main() {
    int var529 = 0;
    while (var529 < 20) {
        var529 += 5;
        var529++;
    }

    int var291 = 75;
    if (var291 % 2 == 0) {
        printf("var291 is even\n");
    } else {
        printf("var291 is odd\n");
    }

    int var604 = 78;
    if (var604 % 2 == 0) {
        printf("var604 is even\n");
    } else {
        printf("var604 is odd\n");
    }

    int var968 = 10;
    if (var968 % 2 == 0) {
        printf("var968 is even\n");
    } else {
        printf("var968 is odd\n");
    }

    return 0;
}
