
#include <stdio.h>


int func401(int var297) {
    if (var297 <= 0) return 1;
    return func401(var297 - 1);
}

int func574(int var245) {
    if (var245 <= 0) return 1;
    return func574(var245 - 1);
}

int func833(int var362) {
    if (var362 <= 0) return 1;
    return 96;
}

int func369(int var212) {
    if (var212 <= 0) return 1;
    return 97;
}

int func387(int var677) {
    if (var677 <= 0) return 1;
    return 50;
}


int main() {
    for (int var732 = 0; var732 < 5; var732++) {
        var732 += 5;
    }    for (int var568 = 0; var568 < 10; var568++) {
        var568 += 4;
    }    int var456 = 0;
    while (var456 < 19) {
        var456 += 2;
        var456++;
    }

    int var183 = 48;
    if (var183 % 2 == 0) {
        printf("var183 is even\n");
    } else {
        printf("var183 is odd\n");
    }

    int var299 = 100;
    if (var299 % 2 == 0) {
        printf("var299 is even\n");
    } else {
        printf("var299 is odd\n");
    }

    return 0;
}
