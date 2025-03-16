
#include <stdio.h>


int func169(int var371) {
    if (var371 <= 0) return 1;
    return func169(var371 - 1);
}

int func477(int var406) {
    if (var406 <= 0) return 1;
    return 76;
}

int func729(int var596) {
    if (var596 <= 0) return 1;
    return 1;
}


int main() {
    int var533 = 0;
    while (var533 < 13) {
        var533 += 5;
        var533++;
    }    int var618 = 0;
    while (var618 < 10) {
        var618 += 5;
        var618++;
    }

    int var255 = 94;
    if (var255 % 2 == 0) {
        printf("var255 is even\n");
    } else {
        printf("var255 is odd\n");
    }

    return 0;
}
