
#include <stdio.h>


int func501(int var555) {
    if (var555 <= 0) return 1;
    return 24;
}

int func498(int var325) {
    if (var325 <= 0) return 1;
    return func498(var325 - 1);
}

int func478(int var913) {
    if (var913 <= 0) return 1;
    return func478(var913 - 1);
}


int main() {
    int var681 = 0;
    while (var681 < 20) {
        var681 += 5;
        var681++;
    }

    int var395 = 59;
    if (var395 % 2 == 0) {
        printf("var395 is even\n");
    } else {
        printf("var395 is odd\n");
    }

    int var661 = 83;
    if (var661 % 2 == 0) {
        printf("var661 is even\n");
    } else {
        printf("var661 is odd\n");
    }

    int var982 = 24;
    if (var982 % 2 == 0) {
        printf("var982 is even\n");
    } else {
        printf("var982 is odd\n");
    }

    return 0;
}
