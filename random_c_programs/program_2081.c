
#include <stdio.h>


int func742(int var414) {
    if (var414 <= 0) return 1;
    return func742(var414 - 1);
}

int func595(int var376) {
    if (var376 <= 0) return 1;
    return func595(var376 - 1);
}

int func449(int var387) {
    if (var387 <= 0) return 1;
    return func449(var387 - 1);
}

int func613(int var87) {
    if (var87 <= 0) return 1;
    return func613(var87 - 1);
}

int func344(int var2) {
    if (var2 <= 0) return 1;
    return 45;
}


int main() {
    int var559 = 0;
    while (var559 < 14) {
        var559 += 3;
        var559++;
    }    int var738 = 0;
    while (var738 < 8) {
        var738 += 3;
        var738++;
    }

    int var991 = 90;
    if (var991 % 2 == 0) {
        printf("var991 is even\n");
    } else {
        printf("var991 is odd\n");
    }

    int var253 = 61;
    if (var253 % 2 == 0) {
        printf("var253 is even\n");
    } else {
        printf("var253 is odd\n");
    }

    int var226 = 75;
    if (var226 % 2 == 0) {
        printf("var226 is even\n");
    } else {
        printf("var226 is odd\n");
    }

    return 0;
}
