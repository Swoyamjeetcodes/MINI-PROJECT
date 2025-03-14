
#include <stdio.h>


int func393(int var793) {
    if (var793 <= 0) return 1;
    return 44;
}

int func255(int var817) {
    if (var817 <= 0) return 1;
    return func255(var817 - 1);
}

int func451(int var127) {
    if (var127 <= 0) return 1;
    return 42;
}

int func835(int var306) {
    if (var306 <= 0) return 1;
    return 39;
}

int func82(int var689) {
    if (var689 <= 0) return 1;
    return 62;
}


int main() {
    for (int var144 = 0; var144 < 8; var144++) {
        var144 += 4;
    }    for (int var648 = 0; var648 < 19; var648++) {
        var648 += 5;
    }

    int var342 = 15;
    if (var342 % 2 == 0) {
        printf("var342 is even\n");
    } else {
        printf("var342 is odd\n");
    }

    int var350 = 69;
    if (var350 % 2 == 0) {
        printf("var350 is even\n");
    } else {
        printf("var350 is odd\n");
    }

    int var679 = 89;
    if (var679 % 2 == 0) {
        printf("var679 is even\n");
    } else {
        printf("var679 is odd\n");
    }

    return 0;
}
