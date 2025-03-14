
#include <stdio.h>


int func648(int var451) {
    if (var451 <= 0) return 1;
    return 78;
}

int func613(int var618) {
    if (var618 <= 0) return 1;
    return func613(var618 - 1);
}

int func110(int var345) {
    if (var345 <= 0) return 1;
    return func110(var345 - 1);
}

int func788(int var715) {
    if (var715 <= 0) return 1;
    return 88;
}

int func944(int var741) {
    if (var741 <= 0) return 1;
    return 93;
}


int main() {
    for (int var245 = 0; var245 < 16; var245++) {
        var245 += 5;
    }

    int var444 = 88;
    if (var444 % 2 == 0) {
        printf("var444 is even\n");
    } else {
        printf("var444 is odd\n");
    }

    return 0;
}
