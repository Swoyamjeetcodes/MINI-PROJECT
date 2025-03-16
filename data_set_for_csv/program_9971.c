
#include <stdio.h>


int func342(int var461) {
    if (var461 <= 0) return 1;
    return func342(var461 - 1);
}

int func89(int var299) {
    if (var299 <= 0) return 1;
    return func89(var299 - 1);
}

int func272(int var424) {
    if (var424 <= 0) return 1;
    return 40;
}


int main() {
    int var408 = 0;
    while (var408 < 7) {
        var408 += 2;
        var408++;
    }

    int var690 = 23;
    if (var690 % 2 == 0) {
        printf("var690 is even\n");
    } else {
        printf("var690 is odd\n");
    }

    int var586 = 59;
    if (var586 % 2 == 0) {
        printf("var586 is even\n");
    } else {
        printf("var586 is odd\n");
    }

    int var385 = 20;
    if (var385 % 2 == 0) {
        printf("var385 is even\n");
    } else {
        printf("var385 is odd\n");
    }

    return 0;
}
