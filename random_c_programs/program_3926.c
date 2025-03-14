
#include <stdio.h>


int func42(int var367) {
    if (var367 <= 0) return 1;
    return func42(var367 - 1);
}

int func697(int var3) {
    if (var3 <= 0) return 1;
    return 12;
}


int main() {
    int var865 = 0;
    while (var865 < 13) {
        var865 += 2;
        var865++;
    }    for (int var302 = 0; var302 < 7; var302++) {
        var302 += 1;
    }    int var613 = 0;
    while (var613 < 9) {
        var613 += 5;
        var613++;
    }

    int var588 = 98;
    if (var588 % 2 == 0) {
        printf("var588 is even\n");
    } else {
        printf("var588 is odd\n");
    }

    int var325 = 33;
    if (var325 % 2 == 0) {
        printf("var325 is even\n");
    } else {
        printf("var325 is odd\n");
    }

    return 0;
}
