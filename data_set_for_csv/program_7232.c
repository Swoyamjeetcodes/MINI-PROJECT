
#include <stdio.h>


int func983(int var751) {
    if (var751 <= 0) return 1;
    return func983(var751 - 1);
}

int func975(int var639) {
    if (var639 <= 0) return 1;
    return 25;
}


int main() {
    int var395 = 0;
    while (var395 < 6) {
        var395 += 5;
        var395++;
    }    int var62 = 0;
    while (var62 < 14) {
        var62 += 3;
        var62++;
    }

    int var24 = 46;
    if (var24 % 2 == 0) {
        printf("var24 is even\n");
    } else {
        printf("var24 is odd\n");
    }

    int var734 = 18;
    if (var734 % 2 == 0) {
        printf("var734 is even\n");
    } else {
        printf("var734 is odd\n");
    }

    int var770 = 66;
    if (var770 % 2 == 0) {
        printf("var770 is even\n");
    } else {
        printf("var770 is odd\n");
    }

    return 0;
}
