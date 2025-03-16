
#include <stdio.h>


int func801(int var885) {
    if (var885 <= 0) return 1;
    return func801(var885 - 1);
}


int main() {
    for (int var176 = 0; var176 < 20; var176++) {
        var176 += 1;
    }

    int var559 = 17;
    if (var559 % 2 == 0) {
        printf("var559 is even\n");
    } else {
        printf("var559 is odd\n");
    }

    int var459 = 11;
    if (var459 % 2 == 0) {
        printf("var459 is even\n");
    } else {
        printf("var459 is odd\n");
    }

    int var452 = 77;
    if (var452 % 2 == 0) {
        printf("var452 is even\n");
    } else {
        printf("var452 is odd\n");
    }

    return 0;
}
