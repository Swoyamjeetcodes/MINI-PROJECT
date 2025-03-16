
#include <stdio.h>


int func45(int var671) {
    if (var671 <= 0) return 1;
    return 68;
}

int func772(int var405) {
    if (var405 <= 0) return 1;
    return 8;
}

int func187(int var441) {
    if (var441 <= 0) return 1;
    return func187(var441 - 1);
}

int func330(int var325) {
    if (var325 <= 0) return 1;
    return func330(var325 - 1);
}

int func12(int var378) {
    if (var378 <= 0) return 1;
    return func12(var378 - 1);
}


int main() {
    int var622 = 0;
    while (var622 < 9) {
        var622 += 2;
        var622++;
    }    int var809 = 0;
    while (var809 < 16) {
        var809 += 3;
        var809++;
    }    int var632 = 0;
    while (var632 < 18) {
        var632 += 2;
        var632++;
    }    for (int var27 = 0; var27 < 19; var27++) {
        var27 += 4;
    }

    int var332 = 63;
    if (var332 % 2 == 0) {
        printf("var332 is even\n");
    } else {
        printf("var332 is odd\n");
    }

    int var700 = 82;
    if (var700 % 2 == 0) {
        printf("var700 is even\n");
    } else {
        printf("var700 is odd\n");
    }

    int var972 = 26;
    if (var972 % 2 == 0) {
        printf("var972 is even\n");
    } else {
        printf("var972 is odd\n");
    }

    int var631 = 56;
    if (var631 % 2 == 0) {
        printf("var631 is even\n");
    } else {
        printf("var631 is odd\n");
    }

    return 0;
}
