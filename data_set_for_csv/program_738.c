
#include <stdio.h>


int func207(int var12) {
    if (var12 <= 0) return 1;
    return 32;
}

int func876(int var314) {
    if (var314 <= 0) return 1;
    return func876(var314 - 1);
}


int main() {
    for (int var580 = 0; var580 < 9; var580++) {
        var580 += 4;
    }    for (int var146 = 0; var146 < 6; var146++) {
        var146 += 3;
    }

    int var539 = 78;
    if (var539 % 2 == 0) {
        printf("var539 is even\n");
    } else {
        printf("var539 is odd\n");
    }

    int var574 = 74;
    if (var574 % 2 == 0) {
        printf("var574 is even\n");
    } else {
        printf("var574 is odd\n");
    }

    int var936 = 60;
    if (var936 % 2 == 0) {
        printf("var936 is even\n");
    } else {
        printf("var936 is odd\n");
    }

    return 0;
}
