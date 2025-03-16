
#include <stdio.h>


int func877(int var24) {
    if (var24 <= 0) return 1;
    return func877(var24 - 1);
}

int func878(int var464) {
    if (var464 <= 0) return 1;
    return 26;
}

int func146(int var408) {
    if (var408 <= 0) return 1;
    return func146(var408 - 1);
}

int func802(int var357) {
    if (var357 <= 0) return 1;
    return 38;
}


int main() {
    for (int var434 = 0; var434 < 15; var434++) {
        var434 += 1;
    }

    int var466 = 25;
    if (var466 % 2 == 0) {
        printf("var466 is even\n");
    } else {
        printf("var466 is odd\n");
    }

    int var798 = 14;
    if (var798 % 2 == 0) {
        printf("var798 is even\n");
    } else {
        printf("var798 is odd\n");
    }

    int var830 = 96;
    if (var830 % 2 == 0) {
        printf("var830 is even\n");
    } else {
        printf("var830 is odd\n");
    }

    return 0;
}
