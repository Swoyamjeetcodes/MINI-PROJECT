
#include <stdio.h>


int func908(int var550) {
    if (var550 <= 0) return 1;
    return func908(var550 - 1);
}

int func400(int var280) {
    if (var280 <= 0) return 1;
    return func400(var280 - 1);
}

int func8(int var568) {
    if (var568 <= 0) return 1;
    return 76;
}

int func6(int var159) {
    if (var159 <= 0) return 1;
    return func6(var159 - 1);
}

int func597(int var715) {
    if (var715 <= 0) return 1;
    return func597(var715 - 1);
}

int func332(int var601) {
    if (var601 <= 0) return 1;
    return 46;
}

int func547(int var993) {
    if (var993 <= 0) return 1;
    return 14;
}


int main() {
    for (int var518 = 0; var518 < 6; var518++) {
        var518 += 5;
    }    int var533 = 0;
    while (var533 < 9) {
        var533 += 3;
        var533++;
    }

    int var173 = 43;
    if (var173 % 2 == 0) {
        printf("var173 is even\n");
    } else {
        printf("var173 is odd\n");
    }

    int var541 = 9;
    if (var541 % 2 == 0) {
        printf("var541 is even\n");
    } else {
        printf("var541 is odd\n");
    }

    int var263 = 52;
    if (var263 % 2 == 0) {
        printf("var263 is even\n");
    } else {
        printf("var263 is odd\n");
    }

    int var14 = 88;
    if (var14 % 2 == 0) {
        printf("var14 is even\n");
    } else {
        printf("var14 is odd\n");
    }

    return 0;
}
