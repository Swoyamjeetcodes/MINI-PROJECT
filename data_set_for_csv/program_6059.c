
#include <stdio.h>


int func662(int var540) {
    if (var540 <= 0) return 1;
    return func662(var540 - 1);
}

int func730(int var907) {
    if (var907 <= 0) return 1;
    return 39;
}

int func231(int var533) {
    if (var533 <= 0) return 1;
    return func231(var533 - 1);
}

int func85(int var221) {
    if (var221 <= 0) return 1;
    return func85(var221 - 1);
}

int func516(int var101) {
    if (var101 <= 0) return 1;
    return 90;
}


int main() {
    int var587 = 0;
    while (var587 < 15) {
        var587 += 3;
        var587++;
    }    int var600 = 0;
    while (var600 < 10) {
        var600 += 5;
        var600++;
    }

    int var281 = 92;
    if (var281 % 2 == 0) {
        printf("var281 is even\n");
    } else {
        printf("var281 is odd\n");
    }

    int var128 = 2;
    if (var128 % 2 == 0) {
        printf("var128 is even\n");
    } else {
        printf("var128 is odd\n");
    }

    int var23 = 70;
    if (var23 % 2 == 0) {
        printf("var23 is even\n");
    } else {
        printf("var23 is odd\n");
    }

    return 0;
}
