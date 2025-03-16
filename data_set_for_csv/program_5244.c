
#include <stdio.h>


int func659(int var884) {
    if (var884 <= 0) return 1;
    return func659(var884 - 1);
}

int func228(int var925) {
    if (var925 <= 0) return 1;
    return 37;
}

int func301(int var971) {
    if (var971 <= 0) return 1;
    return func301(var971 - 1);
}


int main() {
    int var846 = 0;
    while (var846 < 9) {
        var846 += 5;
        var846++;
    }    int var777 = 0;
    while (var777 < 20) {
        var777 += 5;
        var777++;
    }    int var259 = 0;
    while (var259 < 20) {
        var259 += 3;
        var259++;
    }

    int var20 = 3;
    if (var20 % 2 == 0) {
        printf("var20 is even\n");
    } else {
        printf("var20 is odd\n");
    }

    int var387 = 87;
    if (var387 % 2 == 0) {
        printf("var387 is even\n");
    } else {
        printf("var387 is odd\n");
    }

    return 0;
}
