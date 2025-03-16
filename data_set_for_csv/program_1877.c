
#include <stdio.h>


int func567(int var918) {
    if (var918 <= 0) return 1;
    return 26;
}

int func500(int var546) {
    if (var546 <= 0) return 1;
    return func500(var546 - 1);
}

int func278(int var349) {
    if (var349 <= 0) return 1;
    return func278(var349 - 1);
}

int func41(int var970) {
    if (var970 <= 0) return 1;
    return func41(var970 - 1);
}

int func812(int var533) {
    if (var533 <= 0) return 1;
    return func812(var533 - 1);
}

int func394(int var844) {
    if (var844 <= 0) return 1;
    return 54;
}


int main() {
    for (int var346 = 0; var346 < 15; var346++) {
        var346 += 2;
    }    for (int var551 = 0; var551 < 15; var551++) {
        var551 += 1;
    }    for (int var205 = 0; var205 < 10; var205++) {
        var205 += 2;
    }    int var741 = 0;
    while (var741 < 5) {
        var741 += 5;
        var741++;
    }

    int var573 = 33;
    if (var573 % 2 == 0) {
        printf("var573 is even\n");
    } else {
        printf("var573 is odd\n");
    }

    return 0;
}
