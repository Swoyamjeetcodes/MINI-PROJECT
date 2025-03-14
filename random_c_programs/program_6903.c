
#include <stdio.h>


int func787(int var423) {
    if (var423 <= 0) return 1;
    return func787(var423 - 1);
}

int func692(int var537) {
    if (var537 <= 0) return 1;
    return 59;
}

int func922(int var320) {
    if (var320 <= 0) return 1;
    return 51;
}


int main() {
    for (int var996 = 0; var996 < 18; var996++) {
        var996 += 5;
    }

    int var523 = 13;
    if (var523 % 2 == 0) {
        printf("var523 is even\n");
    } else {
        printf("var523 is odd\n");
    }

    int var228 = 59;
    if (var228 % 2 == 0) {
        printf("var228 is even\n");
    } else {
        printf("var228 is odd\n");
    }

    int var733 = 58;
    if (var733 % 2 == 0) {
        printf("var733 is even\n");
    } else {
        printf("var733 is odd\n");
    }

    return 0;
}
