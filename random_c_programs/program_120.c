
#include <stdio.h>


int func480(int var911) {
    if (var911 <= 0) return 1;
    return 36;
}

int func950(int var412) {
    if (var412 <= 0) return 1;
    return 7;
}

int func464(int var970) {
    if (var970 <= 0) return 1;
    return 40;
}

int func215(int var454) {
    if (var454 <= 0) return 1;
    return 97;
}

int func513(int var211) {
    if (var211 <= 0) return 1;
    return func513(var211 - 1);
}


int main() {
    int var191 = 0;
    while (var191 < 10) {
        var191 += 3;
        var191++;
    }    int var946 = 0;
    while (var946 < 10) {
        var946 += 2;
        var946++;
    }    for (int var699 = 0; var699 < 6; var699++) {
        var699 += 2;
    }

    int var128 = 61;
    if (var128 % 2 == 0) {
        printf("var128 is even\n");
    } else {
        printf("var128 is odd\n");
    }

    return 0;
}
