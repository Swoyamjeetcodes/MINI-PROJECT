
#include <stdio.h>


int func831(int var384) {
    if (var384 <= 0) return 1;
    return func831(var384 - 1);
}

int func669(int var728) {
    if (var728 <= 0) return 1;
    return func669(var728 - 1);
}

int func801(int var787) {
    if (var787 <= 0) return 1;
    return func801(var787 - 1);
}

int func901(int var56) {
    if (var56 <= 0) return 1;
    return func901(var56 - 1);
}


int main() {
    for (int var855 = 0; var855 < 8; var855++) {
        var855 += 3;
    }    for (int var147 = 0; var147 < 5; var147++) {
        var147 += 1;
    }    for (int var532 = 0; var532 < 9; var532++) {
        var532 += 1;
    }

    int var796 = 81;
    if (var796 % 2 == 0) {
        printf("var796 is even\n");
    } else {
        printf("var796 is odd\n");
    }

    int var699 = 79;
    if (var699 % 2 == 0) {
        printf("var699 is even\n");
    } else {
        printf("var699 is odd\n");
    }

    int var596 = 83;
    if (var596 % 2 == 0) {
        printf("var596 is even\n");
    } else {
        printf("var596 is odd\n");
    }

    return 0;
}
