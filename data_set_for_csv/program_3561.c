
#include <stdio.h>


int func819(int var466) {
    if (var466 <= 0) return 1;
    return 8;
}

int func315(int var615) {
    if (var615 <= 0) return 1;
    return func315(var615 - 1);
}

int func115(int var972) {
    if (var972 <= 0) return 1;
    return func115(var972 - 1);
}

int func488(int var652) {
    if (var652 <= 0) return 1;
    return func488(var652 - 1);
}


int main() {
    for (int var265 = 0; var265 < 9; var265++) {
        var265 += 2;
    }    int var730 = 0;
    while (var730 < 20) {
        var730 += 2;
        var730++;
    }    for (int var243 = 0; var243 < 9; var243++) {
        var243 += 3;
    }

    int var457 = 95;
    if (var457 % 2 == 0) {
        printf("var457 is even\n");
    } else {
        printf("var457 is odd\n");
    }

    int var259 = 15;
    if (var259 % 2 == 0) {
        printf("var259 is even\n");
    } else {
        printf("var259 is odd\n");
    }

    return 0;
}
