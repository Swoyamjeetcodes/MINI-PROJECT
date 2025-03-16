
#include <stdio.h>


int func652(int var611) {
    if (var611 <= 0) return 1;
    return 42;
}

int func314(int var491) {
    if (var491 <= 0) return 1;
    return func314(var491 - 1);
}


int main() {
    for (int var619 = 0; var619 < 12; var619++) {
        var619 += 4;
    }    int var967 = 0;
    while (var967 < 17) {
        var967 += 4;
        var967++;
    }    for (int var172 = 0; var172 < 17; var172++) {
        var172 += 3;
    }

    int var374 = 14;
    if (var374 % 2 == 0) {
        printf("var374 is even\n");
    } else {
        printf("var374 is odd\n");
    }

    int var196 = 93;
    if (var196 % 2 == 0) {
        printf("var196 is even\n");
    } else {
        printf("var196 is odd\n");
    }

    int var996 = 21;
    if (var996 % 2 == 0) {
        printf("var996 is even\n");
    } else {
        printf("var996 is odd\n");
    }

    return 0;
}
