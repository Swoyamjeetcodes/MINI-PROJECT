
#include <stdio.h>


int func412(int var563) {
    if (var563 <= 0) return 1;
    return func412(var563 - 1);
}


int main() {
    int var999 = 0;
    while (var999 < 9) {
        var999 += 1;
        var999++;
    }    for (int var931 = 0; var931 < 10; var931++) {
        var931 += 3;
    }

    int var652 = 12;
    if (var652 % 2 == 0) {
        printf("var652 is even\n");
    } else {
        printf("var652 is odd\n");
    }

    int var540 = 47;
    if (var540 % 2 == 0) {
        printf("var540 is even\n");
    } else {
        printf("var540 is odd\n");
    }

    int var555 = 84;
    if (var555 % 2 == 0) {
        printf("var555 is even\n");
    } else {
        printf("var555 is odd\n");
    }

    return 0;
}
