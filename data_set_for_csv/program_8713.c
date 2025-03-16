
#include <stdio.h>


int func939(int var261) {
    if (var261 <= 0) return 1;
    return 31;
}

int func997(int var983) {
    if (var983 <= 0) return 1;
    return func997(var983 - 1);
}

int func736(int var358) {
    if (var358 <= 0) return 1;
    return func736(var358 - 1);
}

int func40(int var966) {
    if (var966 <= 0) return 1;
    return func40(var966 - 1);
}


int main() {
    int var816 = 0;
    while (var816 < 7) {
        var816 += 2;
        var816++;
    }    int var799 = 0;
    while (var799 < 7) {
        var799 += 2;
        var799++;
    }    int var523 = 0;
    while (var523 < 5) {
        var523 += 4;
        var523++;
    }

    int var60 = 3;
    if (var60 % 2 == 0) {
        printf("var60 is even\n");
    } else {
        printf("var60 is odd\n");
    }

    int var432 = 23;
    if (var432 % 2 == 0) {
        printf("var432 is even\n");
    } else {
        printf("var432 is odd\n");
    }

    int var323 = 29;
    if (var323 % 2 == 0) {
        printf("var323 is even\n");
    } else {
        printf("var323 is odd\n");
    }

    return 0;
}
