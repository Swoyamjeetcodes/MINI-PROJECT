
#include <stdio.h>


int func272(int var510) {
    if (var510 <= 0) return 1;
    return func272(var510 - 1);
}

int func459(int var540) {
    if (var540 <= 0) return 1;
    return 12;
}

int func725(int var542) {
    if (var542 <= 0) return 1;
    return func725(var542 - 1);
}

int func254(int var560) {
    if (var560 <= 0) return 1;
    return func254(var560 - 1);
}


int main() {
    int var262 = 0;
    while (var262 < 18) {
        var262 += 2;
        var262++;
    }    int var146 = 0;
    while (var146 < 20) {
        var146 += 2;
        var146++;
    }

    int var999 = 86;
    if (var999 % 2 == 0) {
        printf("var999 is even\n");
    } else {
        printf("var999 is odd\n");
    }

    return 0;
}
