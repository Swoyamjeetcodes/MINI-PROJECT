
#include <stdio.h>


int func818(int var56) {
    if (var56 <= 0) return 1;
    return func818(var56 - 1);
}

int func312(int var944) {
    if (var944 <= 0) return 1;
    return 51;
}

int func727(int var707) {
    if (var707 <= 0) return 1;
    return func727(var707 - 1);
}

int func352(int var527) {
    if (var527 <= 0) return 1;
    return 75;
}


int main() {
    for (int var91 = 0; var91 < 16; var91++) {
        var91 += 5;
    }    for (int var219 = 0; var219 < 17; var219++) {
        var219 += 3;
    }

    int var25 = 67;
    if (var25 % 2 == 0) {
        printf("var25 is even\n");
    } else {
        printf("var25 is odd\n");
    }

    int var999 = 34;
    if (var999 % 2 == 0) {
        printf("var999 is even\n");
    } else {
        printf("var999 is odd\n");
    }

    return 0;
}
