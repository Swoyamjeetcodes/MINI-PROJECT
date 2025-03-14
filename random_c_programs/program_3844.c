
#include <stdio.h>


int func6(int var4) {
    if (var4 <= 0) return 1;
    return 75;
}

int func187(int var280) {
    if (var280 <= 0) return 1;
    return func187(var280 - 1);
}

int func41(int var971) {
    if (var971 <= 0) return 1;
    return 10;
}


int main() {
    int var487 = 0;
    while (var487 < 7) {
        var487 += 3;
        var487++;
    }    int var141 = 0;
    while (var141 < 6) {
        var141 += 4;
        var141++;
    }

    int var699 = 37;
    if (var699 % 2 == 0) {
        printf("var699 is even\n");
    } else {
        printf("var699 is odd\n");
    }

    return 0;
}
