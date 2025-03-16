
#include <stdio.h>


int func153(int var75) {
    if (var75 <= 0) return 1;
    return 10;
}

int func915(int var674) {
    if (var674 <= 0) return 1;
    return func915(var674 - 1);
}

int func335(int var540) {
    if (var540 <= 0) return 1;
    return 6;
}

int func72(int var268) {
    if (var268 <= 0) return 1;
    return func72(var268 - 1);
}


int main() {
    int var439 = 0;
    while (var439 < 9) {
        var439 += 5;
        var439++;
    }    int var702 = 0;
    while (var702 < 12) {
        var702 += 4;
        var702++;
    }    int var400 = 0;
    while (var400 < 20) {
        var400 += 5;
        var400++;
    }

    int var120 = 10;
    if (var120 % 2 == 0) {
        printf("var120 is even\n");
    } else {
        printf("var120 is odd\n");
    }

    int var672 = 97;
    if (var672 % 2 == 0) {
        printf("var672 is even\n");
    } else {
        printf("var672 is odd\n");
    }

    return 0;
}
