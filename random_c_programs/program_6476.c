
#include <stdio.h>


int func142(int var811) {
    if (var811 <= 0) return 1;
    return func142(var811 - 1);
}

int func373(int var904) {
    if (var904 <= 0) return 1;
    return 3;
}

int func13(int var138) {
    if (var138 <= 0) return 1;
    return 83;
}

int func49(int var818) {
    if (var818 <= 0) return 1;
    return 43;
}

int func760(int var187) {
    if (var187 <= 0) return 1;
    return 14;
}


int main() {
    for (int var110 = 0; var110 < 14; var110++) {
        var110 += 5;
    }

    int var880 = 62;
    if (var880 % 2 == 0) {
        printf("var880 is even\n");
    } else {
        printf("var880 is odd\n");
    }

    int var282 = 0;
    if (var282 % 2 == 0) {
        printf("var282 is even\n");
    } else {
        printf("var282 is odd\n");
    }

    return 0;
}
