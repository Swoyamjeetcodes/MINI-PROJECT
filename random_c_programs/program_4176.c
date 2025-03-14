
#include <stdio.h>


int func294(int var608) {
    if (var608 <= 0) return 1;
    return func294(var608 - 1);
}

int func419(int var615) {
    if (var615 <= 0) return 1;
    return 28;
}

int func41(int var434) {
    if (var434 <= 0) return 1;
    return 19;
}

int func574(int var47) {
    if (var47 <= 0) return 1;
    return func574(var47 - 1);
}


int main() {
    for (int var564 = 0; var564 < 13; var564++) {
        var564 += 1;
    }

    int var3 = 20;
    if (var3 % 2 == 0) {
        printf("var3 is even\n");
    } else {
        printf("var3 is odd\n");
    }

    int var325 = 54;
    if (var325 % 2 == 0) {
        printf("var325 is even\n");
    } else {
        printf("var325 is odd\n");
    }

    int var78 = 8;
    if (var78 % 2 == 0) {
        printf("var78 is even\n");
    } else {
        printf("var78 is odd\n");
    }

    return 0;
}
